class box
{
    private:
        double length;
        double width;
        double height;
    public:
    //constructor
        box(double le , double wi ,double hei){length=le;width=wi;height=hei;};
        double volume();
        friend double surfaceArea(box& abox);
};