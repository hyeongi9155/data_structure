#include<iostream>
#include<cassert>
#include<cstdlib>
using namespace std;
typedef double value_type;

class dnode{
private:
	value_type data_field;
	dnode* link_fore_field;
	dnode* link_back_field;
public:
	typedef double value_type;
	dnode(const value_type& data = value_type(), dnode* fore = NULL, dnode* back = NULL) {
		data_field = data;
		link_fore_field = fore;
		link_back_field = back;
	}
	void set_data(const value_type& data) {
		data_field = data;
	}
	void set_link_fore(dnode* fore) {
		if (this == NULL)
			return;
		link_fore_field = fore;
	}
	void set_link_back(dnode* back) {
		if (this == NULL)
			return;
		link_back_field = back;
	}
	value_type get_data() const {
		return data_field;
	}

	dnode* link_fore() {
		return link_fore_field;
	}
	const dnode* link_fore() const {
		return link_fore_field;
	}

	dnode* link_back() {
		return link_back_field;
	}
	const dnode* link_back()const {
		return link_back_field;
	}
};

size_t list_length(dnode* head_ptr);
dnode* list_search(dnode* head_ptr, const value_type& target);
dnode* list_locate(dnode* head_ptr, size_t target_num);
void list_head_insert(dnode*& head_ptr, value_type entry);
void list_insert(dnode* previous_ptr, value_type data);
void list_head_remove(dnode*& head_ptr);
void list_tail_remove(dnode*& head_ptr);
void list_remove(dnode* previous_ptr);
void list_clear(dnode*& head_ptr);
void list_copy(const dnode* source_ptr, dnode*& head_ptr, dnode*& cursor);
