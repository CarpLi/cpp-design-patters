#ifndef SCROLL_BAR_H
#define SCROLL_BAR_H

class scroll_bar
{
public:
    scroll_bar() = default;
    virtual ~scroll_bar() = default;
    virtual void show() = 0;
    void set_size(int n) {
        size = n;
    }
    int get_size() const {
        return size;
    }
private:
    int size;
};


#endif /* SCROLL_BAR_H */
