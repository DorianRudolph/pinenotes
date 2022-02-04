typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong size_t;

typedef ulong sizetype;

typedef bool _Bool;

typedef struct ucounts ucounts, *Pucounts;

typedef struct hlist_node hlist_node, *Phlist_node;

typedef struct user_namespace user_namespace, *Puser_namespace;

typedef struct kuid_t kuid_t, *Pkuid_t;

typedef struct atomic_t atomic_t, *Patomic_t;

typedef struct uid_gid_map uid_gid_map, *Puid_gid_map;

typedef struct kgid_t kgid_t, *Pkgid_t;

typedef struct ns_common ns_common, *Pns_common;

typedef struct work_struct work_struct, *Pwork_struct;

typedef struct ctl_table_set ctl_table_set, *Pctl_table_set;

typedef struct ctl_table_header ctl_table_header, *Pctl_table_header;

typedef ulonglong __u64;

typedef __u64 u64;

typedef uint __kernel_uid32_t;

typedef __kernel_uid32_t uid_t;

typedef uint __u32;

typedef __u32 u32;

typedef union anon_union.conflict42c5a_for_field_1 anon_union.conflict42c5a_for_field_1, *Panon_union.conflict42c5a_for_field_1;

typedef uint __kernel_gid32_t;

typedef __kernel_gid32_t gid_t;

typedef struct atomic64_t atomic64_t, *Patomic64_t;

typedef struct atomic64_t atomic_long_t;

typedef struct proc_ns_operations proc_ns_operations, *Pproc_ns_operations;

typedef struct list_head list_head, *Plist_head;

typedef struct ctl_dir ctl_dir, *Pctl_dir;

typedef union anon_union.conflict4137e_for_field_0 anon_union.conflict4137e_for_field_0, *Panon_union.conflict4137e_for_field_0;

typedef struct completion.conflict completion.conflict, *Pcompletion.conflict;

typedef struct ctl_table ctl_table, *Pctl_table;


// WARNING! conflicting data type names: /DWARF/types.h/size_t - /stddef.h/size_t

typedef longlong __kernel_loff_t;

typedef __kernel_loff_t loff_t;

typedef struct ctl_table_root ctl_table_root, *Pctl_table_root;

typedef struct ctl_node ctl_node, *Pctl_node;

typedef struct hlist_head hlist_head, *Phlist_head;

typedef struct uid_gid_extent uid_gid_extent, *Puid_gid_extent;

typedef struct anon_struct.conflict42c30 anon_struct.conflict42c30, *Panon_struct.conflict42c30;

typedef struct rb_root rb_root, *Prb_root;

typedef struct anon_struct.conflict41340 anon_struct.conflict41340, *Panon_struct.conflict41340;

typedef struct callback_head callback_head, *Pcallback_head;

typedef struct wait_queue_head.conflict wait_queue_head.conflict, *Pwait_queue_head.conflict;

typedef struct wait_queue_head.conflict wait_queue_head_t.conflict;

typedef ushort umode_t;

typedef struct ctl_table_poll.conflict ctl_table_poll.conflict, *Pctl_table_poll.conflict;

typedef struct rb_node rb_node, *Prb_node;

typedef struct spinlock.conflict spinlock.conflict, *Pspinlock.conflict;

typedef struct spinlock.conflict spinlock_t.conflict;

typedef union anon_union.conflict15c2c_for_field_0 anon_union.conflict15c2c_for_field_0, *Panon_union.conflict15c2c_for_field_0;

typedef struct raw_spinlock.conflict raw_spinlock.conflict, *Praw_spinlock.conflict;

typedef struct qspinlock qspinlock, *Pqspinlock;

typedef struct qspinlock arch_spinlock_t;

typedef union anon_union.conflictd4b_for_field_0 anon_union.conflictd4b_for_field_0, *Panon_union.conflictd4b_for_field_0;

typedef struct anon_struct.conflictd09 anon_struct.conflictd09, *Panon_struct.conflictd09;

typedef struct anon_struct.conflictd2a anon_struct.conflictd2a, *Panon_struct.conflictd2a;

typedef uchar __u8;

typedef __u8 u8;

typedef ushort __u16;

typedef __u16 u16;

struct atomic64_t {
    long counter;
};

struct list_head {
    struct list_head * next;
    struct list_head * prev;
};

struct work_struct {
    atomic_long_t data;
    struct list_head entry;
    void (* func)(struct work_struct *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct atomic_t {
    int counter;
};

struct hlist_node {
    struct hlist_node * next;
    struct hlist_node * * pprev;
};

struct kuid_t {
    uid_t val;
};

struct ucounts {
    struct hlist_node node;
    struct user_namespace * ns;
    struct kuid_t uid;
    int count;
    struct atomic_t ucount[9];
    undefined field5_0x44;
    undefined field6_0x45;
    undefined field7_0x46;
    undefined field8_0x47;
};

struct rb_node {
    ulong __rb_parent_color;
    struct rb_node * rb_right;
    struct rb_node * rb_left;
};

struct ctl_node {
    struct rb_node node;
    struct ctl_table_header * header;
};

struct anon_struct.conflictd09 {
    u8 locked;
    u8 pending;
};

struct anon_struct.conflictd2a {
    u16 locked_pending;
    u16 tail;
};

union anon_union.conflictd4b_for_field_0 {
    struct atomic_t val;
    struct anon_struct.conflictd09 field_1;
    struct anon_struct.conflictd2a field_2;
};

struct qspinlock {
    union anon_union.conflictd4b_for_field_0 field_0;
};

struct raw_spinlock.conflict {
    arch_spinlock_t raw_lock;
    uint magic;
    uint owner_cpu;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    void * owner;
};

struct callback_head {
    struct callback_head * next;
    void (* func)(struct callback_head *);
};

struct anon_struct.conflict41340 {
    struct ctl_table * ctl_table;
    int used;
    int count;
    int nreg;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
};

union anon_union.conflict4137e_for_field_0 {
    struct anon_struct.conflict41340 field_0;
    struct callback_head rcu;
};

struct hlist_head {
    struct hlist_node * first;
};

struct ctl_table_header {
    union anon_union.conflict4137e_for_field_0 field_0;
    struct completion.conflict * unregistering;
    struct ctl_table * ctl_table_arg;
    struct ctl_table_root * root;
    struct ctl_table_set * set;
    struct ctl_dir * parent;
    struct ctl_node * node;
    struct hlist_head inodes;
};

struct rb_root {
    struct rb_node * rb_node;
};

struct ctl_dir {
    struct ctl_table_header header;
    struct rb_root root;
};

struct ctl_table_set {
    int (* is_seen)(struct ctl_table_set *);
    struct ctl_dir dir;
};

struct ctl_table_root {
    struct ctl_table_set default_set;
    ctl_table_set * (* lookup)(struct ctl_table_root *);
    void (* set_ownership)(struct ctl_table_header *, struct ctl_table *, struct kuid_t *, struct kgid_t *);
    int (* permissions)(struct ctl_table_header *, struct ctl_table *);
};

union anon_union.conflict15c2c_for_field_0 {
    struct raw_spinlock.conflict rlock;
};

struct uid_gid_extent {
    u32 first;
    u32 lower_first;
    u32 count;
};

struct ns_common {
    atomic_long_t stashed;
    struct proc_ns_operations * ops;
    uint inum;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

struct anon_struct.conflict42c30 {
    struct uid_gid_extent * forward;
    struct uid_gid_extent * reverse;
};

union anon_union.conflict42c5a_for_field_1 {
    struct uid_gid_extent extent[5];
    struct anon_struct.conflict42c30 field_1;
    undefined1 field2[64]; // Automatically generated padding to match DWARF declared size
};

struct uid_gid_map {
    u32 nr_extents;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    union anon_union.conflict42c5a_for_field_1 field_1;
};

struct spinlock.conflict {
    union anon_union.conflict15c2c_for_field_0 field_0;
};

struct wait_queue_head.conflict {
    spinlock_t.conflict lock;
    struct list_head head;
};

struct ctl_table_poll.conflict {
    struct atomic_t event;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t.conflict wait;
};

struct kgid_t {
    gid_t val;
};

struct completion.conflict {
    uint done;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t.conflict wait;
};

struct ctl_table {
    char * procname;
    void * data;
    int maxlen;
    umode_t mode;
    undefined field4_0x16;
    undefined field5_0x17;
    struct ctl_table * child;
    int (* proc_handler)(struct ctl_table *, int, void *, size_t *, loff_t *);
    struct ctl_table_poll.conflict * poll;
    void * extra1;
    void * extra2;
};

struct proc_ns_operations {
};

struct user_namespace {
    struct uid_gid_map uid_map;
    struct uid_gid_map gid_map;
    struct uid_gid_map projid_map;
    struct atomic_t count;
    undefined field4_0xdc;
    undefined field5_0xdd;
    undefined field6_0xde;
    undefined field7_0xdf;
    struct user_namespace * parent;
    int level;
    struct kuid_t owner;
    struct kgid_t group;
    undefined field12_0xf4;
    undefined field13_0xf5;
    undefined field14_0xf6;
    undefined field15_0xf7;
    struct ns_common ns;
    ulong flags;
    struct work_struct work;
    struct ctl_table_set set;
    struct ctl_table_header * sysctls;
    struct ucounts * ucounts;
    int ucount_max[9];
    undefined field23_0x1dc;
    undefined field24_0x1dd;
    undefined field25_0x1de;
    undefined field26_0x1df;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

typedef union anon_union.conflict42c5a anon_union.conflict42c5a, *Panon_union.conflict42c5a;

union anon_union.conflict42c5a {
    struct uid_gid_extent extent[5];
    struct anon_struct.conflict42c30 field_1;
    undefined1 field2[64]; // Automatically generated padding to match DWARF declared size
};

typedef enum ucount_type {
    UCOUNT_USER_NAMESPACES=0,
    UCOUNT_PID_NAMESPACES=1,
    UCOUNT_UTS_NAMESPACES=2,
    UCOUNT_IPC_NAMESPACES=3,
    UCOUNT_NET_NAMESPACES=4,
    UCOUNT_MNT_NAMESPACES=5,
    UCOUNT_CGROUP_NAMESPACES=6,
    UCOUNT_INOTIFY_INSTANCES=7,
    UCOUNT_INOTIFY_WATCHES=8,
    UCOUNT_COUNTS=9
} ucount_type;

typedef struct dma_map_ops dma_map_ops, *Pdma_map_ops;

typedef struct device device, *Pdevice;

typedef u64 dma_addr_t;

typedef uint gfp_t;

typedef struct vm_area_struct vm_area_struct, *Pvm_area_struct;

typedef struct sg_table sg_table, *Psg_table;

typedef struct page.conflict page.conflict, *Ppage.conflict;

typedef enum dma_data_direction {
    DMA_BIDIRECTIONAL=0,
    DMA_TO_DEVICE=1,
    DMA_FROM_DEVICE=2,
    DMA_NONE=3
} dma_data_direction;

typedef struct scatterlist scatterlist, *Pscatterlist;

typedef u64 phys_addr_t;

typedef struct device_private device_private, *Pdevice_private;

typedef struct kobject kobject, *Pkobject;

typedef struct device_type device_type, *Pdevice_type;

typedef struct kobj_uevent_env kobj_uevent_env, *Pkobj_uevent_env;

typedef struct mutex mutex, *Pmutex;

typedef struct bus_type bus_type, *Pbus_type;

typedef struct device_driver device_driver, *Pdevice_driver;

typedef struct device.conflict device.conflict, *Pdevice.conflict;

typedef struct pm_message pm_message, *Ppm_message;

typedef struct pm_message pm_message_t;

typedef struct dev_links_info dev_links_info, *Pdev_links_info;

typedef struct dev_pm_info dev_pm_info, *Pdev_pm_info;

typedef int __s32;

typedef __s32 s32;

typedef struct dev_pm_domain dev_pm_domain, *Pdev_pm_domain;


// WARNING! conflicting data type names: /DWARF/types.h/bool - /bool

typedef struct irq_domain irq_domain, *Pirq_domain;

typedef struct dev_pin_info dev_pin_info, *Pdev_pin_info;

typedef struct device_dma_parameters device_dma_parameters, *Pdevice_dma_parameters;

typedef struct dma_coherent_mem dma_coherent_mem, *Pdma_coherent_mem;

typedef struct cma cma, *Pcma;

typedef struct removed_region removed_region, *Premoved_region;

typedef struct dev_archdata dev_archdata, *Pdev_archdata;

typedef struct device_node device_node, *Pdevice_node;

typedef struct fwnode_handle fwnode_handle, *Pfwnode_handle;

typedef u32 __kernel_dev_t;

typedef __kernel_dev_t dev_t;

typedef struct spinlock spinlock, *Pspinlock;

typedef struct spinlock spinlock_t;

typedef struct klist_node klist_node, *Pklist_node;

typedef struct class class, *Pclass;

typedef struct attribute_group attribute_group, *Pattribute_group;

typedef struct attribute attribute, *Pattribute;

typedef struct bin_attribute bin_attribute, *Pbin_attribute;

typedef long __kernel_long_t;

typedef __kernel_long_t __kernel_ssize_t;

typedef __kernel_ssize_t ssize_t;

typedef struct file file, *Pfile;

typedef struct iommu_group iommu_group, *Piommu_group;

typedef struct iommu_fwspec iommu_fwspec, *Piommu_fwspec;

typedef struct mm_struct.conflict mm_struct.conflict, *Pmm_struct.conflict;

typedef struct pgprot_t pgprot_t, *Ppgprot_t;

typedef union anon_union.conflict55ea_for_field_9 anon_union.conflict55ea_for_field_9, *Panon_union.conflict55ea_for_field_9;

typedef struct anon_vma_for_anon_vma anon_vma_for_anon_vma, *Panon_vma_for_anon_vma;

typedef struct vm_operations_struct vm_operations_struct, *Pvm_operations_struct;

typedef int vm_fault_t;

typedef struct vm_fault vm_fault, *Pvm_fault;

typedef enum page_entry_size {
    PE_SIZE_PTE=0,
    PE_SIZE_PMD=1,
    PE_SIZE_PUD=2
} page_entry_size;

typedef struct page page, *Ppage;

typedef struct vm_userfaultfd_ctx vm_userfaultfd_ctx, *Pvm_userfaultfd_ctx;

typedef union anon_union.conflict18914_for_field_1 anon_union.conflict18914_for_field_1, *Panon_union.conflict18914_for_field_1;

typedef union anon_union.conflict545e_for_field_2 anon_union.conflict545e_for_field_2, *Panon_union.conflict545e_for_field_2;

typedef struct kset.conflict kset.conflict, *Pkset.conflict;

typedef struct kobj_type kobj_type, *Pkobj_type;

typedef struct kobj_ns_type_operations kobj_ns_type_operations, *Pkobj_ns_type_operations;

typedef struct sock sock, *Psock;

typedef struct kernfs_node kernfs_node, *Pkernfs_node;

typedef struct kref kref, *Pkref;

typedef struct dev_pm_ops dev_pm_ops, *Pdev_pm_ops;

typedef struct optimistic_spin_queue optimistic_spin_queue, *Poptimistic_spin_queue;

typedef struct bus_type.conflict bus_type.conflict, *Pbus_type.conflict;

typedef struct module module, *Pmodule;

typedef enum probe_type {
    PROBE_DEFAULT_STRATEGY=0,
    PROBE_PREFER_ASYNCHRONOUS=1,
    PROBE_FORCE_SYNCHRONOUS=2
} probe_type;

typedef struct of_device_id of_device_id, *Pof_device_id;

typedef struct acpi_device_id acpi_device_id, *Pacpi_device_id;

typedef struct device_type.conflict device_type.conflict, *Pdevice_type.conflict;

typedef struct mutex.conflict mutex.conflict, *Pmutex.conflict;

typedef struct dev_pm_info.conflict dev_pm_info.conflict, *Pdev_pm_info.conflict;

typedef struct class.conflict class.conflict, *Pclass.conflict;

typedef struct dev_pm_ops.conflict dev_pm_ops.conflict, *Pdev_pm_ops.conflict;

typedef struct driver_private driver_private, *Pdriver_private;

typedef struct iommu_ops iommu_ops, *Piommu_ops;

typedef struct subsys_private subsys_private, *Psubsys_private;

typedef struct lock_class_key lock_class_key, *Plock_class_key;

typedef enum dl_dev_state {
    DL_DEV_NO_DRIVER=0,
    DL_DEV_PROBING=1,
    DL_DEV_DRIVER_BOUND=2,
    DL_DEV_UNBINDING=3
} dl_dev_state;

typedef struct completion completion, *Pcompletion;

typedef struct wakeup_source wakeup_source, *Pwakeup_source;

typedef struct timer_list timer_list, *Ptimer_list;

typedef struct wait_queue_head wait_queue_head, *Pwait_queue_head;

typedef struct wait_queue_head wait_queue_head_t;

typedef struct wake_irq wake_irq, *Pwake_irq;

typedef enum rpm_request {
    RPM_REQ_NONE=0,
    RPM_REQ_IDLE=1,
    RPM_REQ_SUSPEND=2,
    RPM_REQ_AUTOSUSPEND=3,
    RPM_REQ_RESUME=4
} rpm_request;

typedef enum rpm_status {
    RPM_ACTIVE=0,
    RPM_RESUMING=1,
    RPM_SUSPENDED=2,
    RPM_SUSPENDING=3
} rpm_status;

typedef struct pm_subsys_data pm_subsys_data, *Ppm_subsys_data;

typedef struct dev_pm_qos dev_pm_qos, *Pdev_pm_qos;

typedef struct irq_domain_ops irq_domain_ops, *Pirq_domain_ops;

typedef enum irq_domain_bus_token {
    DOMAIN_BUS_ANY=0,
    DOMAIN_BUS_WIRED=1,
    DOMAIN_BUS_PCI_MSI=2,
    DOMAIN_BUS_PLATFORM_MSI=3,
    DOMAIN_BUS_NEXUS=4,
    DOMAIN_BUS_IPI=5,
    DOMAIN_BUS_FSL_MC_MSI=6,
    DOMAIN_BUS_WAKEUP=7
} irq_domain_bus_token;

typedef struct irq_fwspec irq_fwspec, *Pirq_fwspec;

typedef ulong irq_hw_number_t;

typedef struct irq_data irq_data, *Pirq_data;

typedef struct irq_domain_chip_generic irq_domain_chip_generic, *Pirq_domain_chip_generic;

typedef struct radix_tree_root radix_tree_root, *Pradix_tree_root;

typedef struct pinctrl pinctrl, *Ppinctrl;

typedef struct pinctrl_state pinctrl_state, *Ppinctrl_state;

typedef u32 phandle;

typedef struct property property, *Pproperty;

typedef struct fwnode_operations fwnode_operations, *Pfwnode_operations;

typedef struct fwnode_reference_args fwnode_reference_args, *Pfwnode_reference_args;

typedef struct fwnode_endpoint fwnode_endpoint, *Pfwnode_endpoint;

typedef union anon_union.conflicte3e_for_field_0 anon_union.conflicte3e_for_field_0, *Panon_union.conflicte3e_for_field_0;

typedef union anon_union.conflict7f49_for_f_u anon_union.conflict7f49_for_f_u, *Panon_union.conflict7f49_for_f_u;

typedef struct path path, *Ppath;

typedef struct inode inode, *Pinode;

typedef struct file_operations file_operations, *Pfile_operations;

typedef struct kiocb kiocb, *Pkiocb;

typedef struct iov_iter iov_iter, *Piov_iter;

typedef struct dir_context dir_context, *Pdir_context;

typedef uint __poll_t;

typedef struct poll_table_struct poll_table_struct, *Ppoll_table_struct;

typedef void * fl_owner_t;

typedef struct file_lock file_lock, *Pfile_lock;

typedef struct pipe_inode_info pipe_inode_info, *Ppipe_inode_info;

typedef struct seq_file seq_file, *Pseq_file;

typedef enum rw_hint {
    WRITE_LIFE_NOT_SET=0,
    WRITE_LIFE_NONE=1,
    WRITE_LIFE_SHORT=2,
    WRITE_LIFE_MEDIUM=3,
    WRITE_LIFE_LONG=4,
    WRITE_LIFE_EXTREME=5
} rw_hint;

typedef uint fmode_t;

typedef struct fown_struct fown_struct, *Pfown_struct;

typedef struct cred cred, *Pcred;

typedef struct file_ra_state file_ra_state, *Pfile_ra_state;

typedef struct address_space address_space, *Paddress_space;

typedef u32 errseq_t;

typedef struct anon_struct.conflict18a52_for_field_0 anon_struct.conflict18a52_for_field_0, *Panon_struct.conflict18a52_for_field_0;

typedef u64 pteval_t;

typedef struct anon_struct.conflict55c7 anon_struct.conflict55c7, *Panon_struct.conflict55c7;

typedef struct pmd_t pmd_t, *Ppmd_t;

typedef struct pud_t pud_t, *Ppud_t;

typedef struct pte_t pte_t, *Ppte_t;

typedef struct mem_cgroup mem_cgroup, *Pmem_cgroup;

typedef struct page * pgtable_t;

typedef union anon_union.conflict542c_for_field_1 anon_union.conflict542c_for_field_1, *Panon_union.conflict542c_for_field_1;

typedef struct anon_struct.conflict5094 anon_struct.conflict5094, *Panon_struct.conflict5094;

typedef struct anon_struct.conflict187c2 anon_struct.conflict187c2, *Panon_struct.conflict187c2;

typedef struct anon_struct.conflict52b0 anon_struct.conflict52b0, *Panon_struct.conflict52b0;

typedef struct anon_struct.conflict52e9 anon_struct.conflict52e9, *Panon_struct.conflict52e9;

typedef struct anon_struct.conflict1888e anon_struct.conflict1888e, *Panon_struct.conflict1888e;

typedef struct anon_struct.conflict188d8 anon_struct.conflict188d8, *Panon_struct.conflict188d8;

typedef struct kset_uevent_ops.conflict kset_uevent_ops.conflict, *Pkset_uevent_ops.conflict;

typedef struct sysfs_ops sysfs_ops, *Psysfs_ops;

typedef enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE=0,
    KOBJ_NS_TYPE_NET=1,
    KOBJ_NS_TYPES=2
} kobj_ns_type;

typedef union anon_union.conflict9b6f_for_field_7 anon_union.conflict9b6f_for_field_7, *Panon_union.conflict9b6f_for_field_7;

typedef union kernfs_node_id kernfs_node_id, *Pkernfs_node_id;

typedef struct kernfs_iattrs kernfs_iattrs, *Pkernfs_iattrs;

typedef struct refcount_struct refcount_struct, *Prefcount_struct;

typedef struct refcount_struct refcount_t;

typedef enum module_state {
    MODULE_STATE_LIVE=0,
    MODULE_STATE_COMING=1,
    MODULE_STATE_GOING=2,
    MODULE_STATE_UNFORMED=3
} module_state;

typedef struct module_kobject module_kobject, *Pmodule_kobject;

typedef struct module_attribute module_attribute, *Pmodule_attribute;

typedef struct module_kobject.conflict module_kobject.conflict, *Pmodule_kobject.conflict;

typedef struct module.conflict module.conflict, *Pmodule.conflict;

typedef struct kernel_symbol kernel_symbol, *Pkernel_symbol;

typedef struct kernel_param kernel_param, *Pkernel_param;

typedef struct exception_table_entry exception_table_entry, *Pexception_table_entry;

typedef struct module_layout module_layout, *Pmodule_layout;

typedef struct mod_arch_specific mod_arch_specific, *Pmod_arch_specific;

typedef struct bug_entry bug_entry, *Pbug_entry;

typedef struct mod_kallsyms mod_kallsyms, *Pmod_kallsyms;

typedef struct module_sect_attrs module_sect_attrs, *Pmodule_sect_attrs;

typedef struct module_notes_attrs module_notes_attrs, *Pmodule_notes_attrs;

typedef int tracepoint_ptr_t;

typedef struct jump_entry jump_entry, *Pjump_entry;

typedef struct trace_event_call trace_event_call, *Ptrace_event_call;

typedef struct trace_eval_map trace_eval_map, *Ptrace_eval_map;

typedef ulong kernel_ulong_t;

typedef struct wakeup_source.conflict wakeup_source.conflict, *Pwakeup_source.conflict;

typedef struct pm_subsys_data.conflict pm_subsys_data.conflict, *Ppm_subsys_data.conflict;

typedef longlong __s64;

typedef __s64 s64;

typedef s64 ktime_t;

typedef struct pm_domain_data pm_domain_data, *Ppm_domain_data;

typedef struct irq_common_data irq_common_data, *Pirq_common_data;

typedef struct irq_chip irq_chip, *Pirq_chip;

typedef struct cpumask cpumask, *Pcpumask;

typedef struct msi_msg msi_msg, *Pmsi_msg;

typedef enum irqchip_irq_state {
    IRQCHIP_STATE_PENDING=0,
    IRQCHIP_STATE_ACTIVE=1,
    IRQCHIP_STATE_MASKED=2,
    IRQCHIP_STATE_LINE_LEVEL=3
} irqchip_irq_state;

typedef struct irq_domain.conflict irq_domain.conflict, *Pirq_domain.conflict;

typedef enum irq_gc_flags {
    IRQ_GC_INIT_MASK_CACHE=1,
    IRQ_GC_INIT_NESTED_LOCK=2,
    IRQ_GC_MASK_CACHE_PER_TYPE=4,
    IRQ_GC_NO_MASK=8,
    IRQ_GC_BE_IO=16
} irq_gc_flags;

typedef struct irq_chip_generic irq_chip_generic, *Pirq_chip_generic;

typedef struct radix_tree_node radix_tree_node, *Pradix_tree_node;

typedef struct raw_spinlock raw_spinlock, *Praw_spinlock;

typedef struct llist_node llist_node, *Pllist_node;

typedef struct vfsmount vfsmount, *Pvfsmount;

typedef struct dentry dentry, *Pdentry;

typedef struct posix_acl posix_acl, *Pposix_acl;

typedef struct inode_operations inode_operations, *Pinode_operations;

typedef struct delayed_call delayed_call, *Pdelayed_call;

typedef struct iattr iattr, *Piattr;

typedef struct kstat kstat, *Pkstat;

typedef struct fiemap_extent_info fiemap_extent_info, *Pfiemap_extent_info;

typedef struct timespec64 timespec64, *Ptimespec64;

typedef struct super_block super_block, *Psuper_block;

typedef union anon_union.conflict7bfe_for_field_12 anon_union.conflict7bfe_for_field_12, *Panon_union.conflict7bfe_for_field_12;

typedef ulong blkcnt_t;

typedef struct rw_semaphore rw_semaphore, *Prw_semaphore;

typedef struct bdi_writeback bdi_writeback, *Pbdi_writeback;

typedef union anon_union.conflict7c20_for_field_36 anon_union.conflict7c20_for_field_36, *Panon_union.conflict7c20_for_field_36;

typedef struct file_lock_context file_lock_context, *Pfile_lock_context;

typedef union anon_union.conflict7c42_for_field_46 anon_union.conflict7c42_for_field_46, *Panon_union.conflict7c42_for_field_46;

typedef struct fsnotify_mark_connector fsnotify_mark_connector, *Pfsnotify_mark_connector;

typedef struct fscrypt_info fscrypt_info, *Pfscrypt_info;

typedef struct fsverity_info fsverity_info, *Pfsverity_info;

typedef struct fasync_struct fasync_struct, *Pfasync_struct;

typedef struct file_lock_operations file_lock_operations, *Pfile_lock_operations;

typedef struct lock_manager_operations lock_manager_operations, *Plock_manager_operations;

typedef union anon_union.conflict82f6_for_fl_u anon_union.conflict82f6_for_fl_u, *Panon_union.conflict82f6_for_fl_u;

typedef struct seq_operations seq_operations, *Pseq_operations;

typedef struct rwlock_t rwlock_t, *Prwlock_t;

typedef struct pid pid, *Ppid;

typedef enum pid_type {
    PIDTYPE_PID=0,
    PIDTYPE_TGID=1,
    PIDTYPE_PGID=2,
    PIDTYPE_SID=3,
    PIDTYPE_MAX=4
} pid_type;

typedef struct kernel_cap_struct kernel_cap_struct, *Pkernel_cap_struct;

typedef struct kernel_cap_struct kernel_cap_t;

typedef struct key key, *Pkey;

typedef struct user_struct user_struct, *Puser_struct;

typedef struct group_info group_info, *Pgroup_info;

typedef union anon_union.conflict96ab_for_field_24 anon_union.conflict96ab_for_field_24, *Panon_union.conflict96ab_for_field_24;

typedef struct rb_root_cached rb_root_cached, *Prb_root_cached;

typedef struct address_space_operations address_space_operations, *Paddress_space_operations;

typedef struct writeback_control writeback_control, *Pwriteback_control;

typedef ulong sector_t;

typedef enum migrate_mode {
    MIGRATE_ASYNC=0,
    MIGRATE_SYNC_LIGHT=1,
    MIGRATE_SYNC=2,
    MIGRATE_SYNC_NO_COPY=3
} migrate_mode;

typedef uint isolate_mode_t;

typedef struct swap_info_struct swap_info_struct, *Pswap_info_struct;

typedef struct pgd_t pgd_t, *Ppgd_t;

typedef struct rw_semaphore.conflict rw_semaphore.conflict, *Prw_semaphore.conflict;

typedef struct mm_rss_stat mm_rss_stat, *Pmm_rss_stat;

typedef struct linux_binfmt linux_binfmt, *Plinux_binfmt;

typedef struct mm_context_t mm_context_t, *Pmm_context_t;

typedef struct core_state.conflict core_state.conflict, *Pcore_state.conflict;

typedef struct kioctx_table kioctx_table, *Pkioctx_table;

typedef struct uprobes_state uprobes_state, *Puprobes_state;

typedef u64 pmdval_t;

typedef union anon_union.conflict18746_for_field_0 anon_union.conflict18746_for_field_0, *Panon_union.conflict18746_for_field_0;

typedef struct kmem_cache kmem_cache, *Pkmem_cache;

typedef union anon_union.conflict1879b_for_field_3 anon_union.conflict1879b_for_field_3, *Panon_union.conflict1879b_for_field_3;

typedef struct page.conflict * pgtable_t.conflict;

typedef union anon_union.conflict1886c_for_field_3 anon_union.conflict1886c_for_field_3, *Panon_union.conflict1886c_for_field_3;

typedef struct dev_pagemap dev_pagemap, *Pdev_pagemap;

typedef struct percpu_ref percpu_ref, *Ppercpu_ref;

typedef struct kernfs_elem_dir kernfs_elem_dir, *Pkernfs_elem_dir;

typedef struct kernfs_elem_symlink kernfs_elem_symlink, *Pkernfs_elem_symlink;

typedef struct kernfs_elem_attr kernfs_elem_attr, *Pkernfs_elem_attr;

typedef struct anon_struct.conflict9b32 anon_struct.conflict9b32, *Panon_struct.conflict9b32;

typedef struct module_param_attrs module_param_attrs, *Pmodule_param_attrs;

typedef struct kernel_param.conflict kernel_param.conflict, *Pkernel_param.conflict;

typedef struct kernel_param_ops kernel_param_ops, *Pkernel_param_ops;

typedef char __s8;

typedef __s8 s8;

typedef union anon_union.conflictd091_for_field_6 anon_union.conflictd091_for_field_6, *Panon_union.conflictd091_for_field_6;

typedef struct mod_tree_node mod_tree_node, *Pmod_tree_node;

typedef struct mod_plt_sec mod_plt_sec, *Pmod_plt_sec;

typedef struct plt_entry plt_entry, *Pplt_entry;

typedef struct elf64_sym elf64_sym, *Pelf64_sym;

typedef struct elf64_sym Elf64_Sym;

typedef u64 jump_label_t;

typedef struct msi_desc msi_desc, *Pmsi_desc;

typedef struct irq_domain_ops.conflict irq_domain_ops.conflict, *Pirq_domain_ops.conflict;

typedef struct raw_spinlock raw_spinlock_t;

typedef struct irq_chip_type irq_chip_type, *Pirq_chip_type;

typedef struct irq_desc irq_desc, *Pirq_desc;

typedef union anon_union.conflict4d9b_for_field_6 anon_union.conflict4d9b_for_field_6, *Panon_union.conflict4d9b_for_field_6;

typedef struct seqcount seqcount, *Pseqcount;

typedef struct seqcount seqcount_t;

typedef struct hlist_bl_node hlist_bl_node, *Phlist_bl_node;

typedef struct qstr qstr, *Pqstr;

typedef struct lockref lockref, *Plockref;

typedef struct dentry_operations dentry_operations, *Pdentry_operations;

typedef union anon_union.conflict1862_for_field_12 anon_union.conflict1862_for_field_12, *Panon_union.conflict1862_for_field_12;

typedef union anon_union.conflict1887_for_d_u anon_union.conflict1887_for_d_u, *Panon_union.conflict1887_for_d_u;

typedef u32 uint32_t;

typedef struct fiemap_extent fiemap_extent, *Pfiemap_extent;

typedef __s64 time64_t;

typedef struct file_system_type file_system_type, *Pfile_system_type;

typedef struct super_operations super_operations, *Psuper_operations;

typedef struct kstatfs kstatfs, *Pkstatfs;

typedef struct dquot dquot, *Pdquot;

typedef struct shrink_control shrink_control, *Pshrink_control;

typedef struct dquot_operations dquot_operations, *Pdquot_operations;

typedef longlong qsize_t;

typedef struct kprojid_t kprojid_t, *Pkprojid_t;

typedef struct kqid kqid, *Pkqid;

typedef struct quotactl_ops quotactl_ops, *Pquotactl_ops;

typedef struct qc_info qc_info, *Pqc_info;

typedef struct qc_dqblk qc_dqblk, *Pqc_dqblk;

typedef struct qc_state qc_state, *Pqc_state;

typedef struct export_operations export_operations, *Pexport_operations;

typedef struct xattr_handler xattr_handler, *Pxattr_handler;

typedef struct fscrypt_operations fscrypt_operations, *Pfscrypt_operations;

typedef struct fsverity_operations fsverity_operations, *Pfsverity_operations;

typedef struct unicode_map unicode_map, *Punicode_map;

typedef struct hlist_bl_head hlist_bl_head, *Phlist_bl_head;

typedef struct block_device block_device, *Pblock_device;

typedef struct backing_dev_info backing_dev_info, *Pbacking_dev_info;

typedef struct mtd_info mtd_info, *Pmtd_info;

typedef struct quota_info quota_info, *Pquota_info;

typedef struct sb_writers sb_writers, *Psb_writers;

typedef struct uuid_t uuid_t, *Puuid_t;

typedef struct shrinker shrinker, *Pshrinker;

typedef struct workqueue_struct workqueue_struct, *Pworkqueue_struct;

typedef struct list_lru list_lru, *Plist_lru;

typedef struct task_struct task_struct, *Ptask_struct;

typedef struct percpu_counter.conflict percpu_counter.conflict, *Ppercpu_counter.conflict;

typedef struct bdi_writeback_congested bdi_writeback_congested, *Pbdi_writeback_congested;

typedef struct fprop_local_percpu fprop_local_percpu, *Pfprop_local_percpu;

typedef enum wb_reason {
    WB_REASON_BACKGROUND=0,
    WB_REASON_VMSCAN=1,
    WB_REASON_SYNC=2,
    WB_REASON_PERIODIC=3,
    WB_REASON_LAPTOP_TIMER=4,
    WB_REASON_FREE_MORE_MEM=5,
    WB_REASON_FS_FREE_SPACE=6,
    WB_REASON_FORKER_THREAD=7,
    WB_REASON_MAX=8
} wb_reason;

typedef struct delayed_work delayed_work, *Pdelayed_work;

typedef struct cdev cdev, *Pcdev;

typedef struct nfs_lock_info nfs_lock_info, *Pnfs_lock_info;

typedef struct nfs4_lock_info nfs4_lock_info, *Pnfs4_lock_info;

typedef struct anon_struct.conflict82d2 anon_struct.conflict82d2, *Panon_struct.conflict82d2;

typedef struct qrwlock qrwlock, *Pqrwlock;

typedef struct qrwlock arch_rwlock_t;

typedef struct upid upid, *Pupid;

typedef s32 int32_t;

typedef int32_t key_serial_t;

typedef union anon_union.conflict951a_for_field_2 anon_union.conflict951a_for_field_2, *Panon_union.conflict951a_for_field_2;

typedef struct key_user key_user, *Pkey_user;

typedef union anon_union.conflict9539_for_field_6 anon_union.conflict9539_for_field_6, *Panon_union.conflict9539_for_field_6;

typedef uint32_t key_perm_t;

typedef union anon_union.conflict9579_for_field_15 anon_union.conflict9579_for_field_15, *Panon_union.conflict9579_for_field_15;

typedef union anon_union.conflict95b3_for_field_16 anon_union.conflict95b3_for_field_16, *Panon_union.conflict95b3_for_field_16;

typedef struct key_restriction key_restriction, *Pkey_restriction;

typedef struct key_type key_type, *Pkey_type;

typedef union key_payload key_payload, *Pkey_payload;

typedef struct ratelimit_state ratelimit_state, *Pratelimit_state;

typedef enum writeback_sync_modes {
    WB_SYNC_NONE=0,
    WB_SYNC_ALL=1
} writeback_sync_modes;

typedef struct plist_node plist_node, *Pplist_node;

typedef struct swap_cluster_info swap_cluster_info, *Pswap_cluster_info;

typedef struct swap_cluster_list swap_cluster_list, *Pswap_cluster_list;

typedef struct percpu_cluster percpu_cluster, *Ppercpu_cluster;

typedef struct swap_extent swap_extent, *Pswap_extent;

typedef struct block_device.conflict1 block_device.conflict1, *Pblock_device.conflict1;

typedef u64 pgdval_t;

typedef struct raw_spinlock.conflict raw_spinlock_t.conflict;

typedef struct task_struct.conflict task_struct.conflict, *Ptask_struct.conflict;

typedef struct core_thread.conflict core_thread.conflict, *Pcore_thread.conflict;

typedef struct xol_area xol_area, *Pxol_area;

typedef struct anon_struct.conflict18715 anon_struct.conflict18715, *Panon_struct.conflict18715;

typedef struct anon_struct.conflict521e anon_struct.conflict521e, *Panon_struct.conflict521e;

typedef struct vmem_altmap vmem_altmap, *Pvmem_altmap;

typedef struct resource resource, *Presource;

typedef enum memory_type {
    MEMORY_DEVICE_PRIVATE=1,
    MEMORY_DEVICE_PUBLIC=2,
    MEMORY_DEVICE_FS_DAX=3
} memory_type;

typedef struct kernfs_root kernfs_root, *Pkernfs_root;

typedef struct kernfs_ops kernfs_ops, *Pkernfs_ops;

typedef struct kernfs_open_file kernfs_open_file, *Pkernfs_open_file;

typedef struct kernfs_open_node kernfs_open_node, *Pkernfs_open_node;

typedef struct kparam_string kparam_string, *Pkparam_string;

typedef struct kparam_array kparam_array, *Pkparam_array;

typedef struct latch_tree_node latch_tree_node, *Platch_tree_node;

typedef struct elf64_shdr elf64_shdr, *Pelf64_shdr;

typedef __u32 __le32;

typedef __u32 Elf64_Word;

typedef __u16 Elf64_Half;

typedef __u64 Elf64_Addr;

typedef __u64 Elf64_Xword;

typedef struct irq_chip_regs irq_chip_regs, *Pirq_chip_regs;

typedef struct irqaction irqaction, *Pirqaction;

typedef enum irqreturn {
    IRQ_NONE=0,
    IRQ_HANDLED=1,
    IRQ_WAKE_THREAD=2
} irqreturn;

typedef enum irqreturn irqreturn_t;

typedef struct irq_affinity_notify irq_affinity_notify, *Pirq_affinity_notify;

typedef struct cpumask cpumask_t;

typedef struct proc_dir_entry proc_dir_entry, *Pproc_dir_entry;

typedef union anon_union.conflict1e15b_for_field_0 anon_union.conflict1e15b_for_field_0, *Panon_union.conflict1e15b_for_field_0;

typedef union anon_union.conflict2152_for_field_13 anon_union.conflict2152_for_field_13, *Panon_union.conflict2152_for_field_13;

typedef struct mem_dqblk mem_dqblk, *Pmem_dqblk;

typedef __kernel_uid32_t projid_t;

typedef union anon_union.conflict6b1d_for_field_0 anon_union.conflict6b1d_for_field_0, *Panon_union.conflict6b1d_for_field_0;

typedef enum quota_type {
    USRQUOTA=0,
    GRPQUOTA=1,
    PRJQUOTA=2
} quota_type;

typedef struct qc_type_state qc_type_state, *Pqc_type_state;

typedef struct hd_struct hd_struct, *Phd_struct;

typedef struct gendisk gendisk, *Pgendisk;

typedef struct request_queue request_queue, *Prequest_queue;

typedef struct mem_dqinfo mem_dqinfo, *Pmem_dqinfo;

typedef struct quota_format_ops quota_format_ops, *Pquota_format_ops;

typedef struct percpu_rw_semaphore percpu_rw_semaphore, *Ppercpu_rw_semaphore;

typedef struct list_lru_node list_lru_node, *Plist_lru_node;

typedef struct thread_info thread_info, *Pthread_info;

typedef struct sched_class sched_class, *Psched_class;

typedef struct sched_entity sched_entity, *Psched_entity;

typedef struct sched_rt_entity sched_rt_entity, *Psched_rt_entity;

typedef struct task_group task_group, *Ptask_group;

typedef struct sched_dl_entity sched_dl_entity, *Psched_dl_entity;

typedef union rcu_special rcu_special, *Prcu_special;

typedef struct rcu_node rcu_node, *Prcu_node;

typedef struct sched_info sched_info, *Psched_info;

typedef struct mm_struct mm_struct, *Pmm_struct;

typedef struct vmacache vmacache, *Pvmacache;

typedef struct task_rss_stat task_rss_stat, *Ptask_rss_stat;

typedef struct restart_block restart_block, *Prestart_block;

typedef int __kernel_pid_t;

typedef __kernel_pid_t pid_t;

typedef struct prev_cputime prev_cputime, *Pprev_cputime;

typedef struct task_cputime task_cputime, *Ptask_cputime;

typedef struct nameidata nameidata, *Pnameidata;

typedef struct fs_struct fs_struct, *Pfs_struct;

typedef struct files_struct files_struct, *Pfiles_struct;

typedef struct nsproxy nsproxy, *Pnsproxy;

typedef struct signal_struct signal_struct, *Psignal_struct;

typedef struct sighand_struct sighand_struct, *Psighand_struct;

typedef struct sigset_t sigset_t, *Psigset_t;

typedef struct sigpending sigpending, *Psigpending;

typedef struct audit_context audit_context, *Paudit_context;

typedef struct seccomp seccomp, *Pseccomp;

typedef struct wake_q_node wake_q_node, *Pwake_q_node;

typedef struct rt_mutex_waiter rt_mutex_waiter, *Prt_mutex_waiter;

typedef struct bio_list bio_list, *Pbio_list;

typedef struct blk_plug blk_plug, *Pblk_plug;

typedef struct reclaim_state reclaim_state, *Preclaim_state;

typedef struct io_context io_context, *Pio_context;

typedef struct siginfo.conflict siginfo.conflict, *Psiginfo.conflict;

typedef struct siginfo.conflict siginfo_t.conflict;

typedef struct task_io_accounting task_io_accounting, *Ptask_io_accounting;

typedef struct nodemask_t nodemask_t, *Pnodemask_t;

typedef struct css_set css_set, *Pcss_set;

typedef struct robust_list_head robust_list_head, *Probust_list_head;

typedef struct compat_robust_list_head compat_robust_list_head, *Pcompat_robust_list_head;

typedef struct futex_pi_state futex_pi_state, *Pfutex_pi_state;

typedef struct perf_event_context perf_event_context, *Pperf_event_context;

typedef struct rseq rseq, *Prseq;

typedef struct tlbflush_unmap_batch tlbflush_unmap_batch, *Ptlbflush_unmap_batch;

typedef struct page_frag page_frag, *Ppage_frag;

typedef struct task_delay_info task_delay_info, *Ptask_delay_info;

typedef struct uprobe_task uprobe_task, *Puprobe_task;

typedef struct vm_struct vm_struct, *Pvm_struct;

typedef union anon_union.conflict45eb_for_field_183 anon_union.conflict45eb_for_field_183, *Panon_union.conflict45eb_for_field_183;

typedef union anon_union.conflict462a_for_field_184 anon_union.conflict462a_for_field_184, *Panon_union.conflict462a_for_field_184;

typedef struct thread_struct thread_struct, *Pthread_struct;

typedef struct file_operations.conflict file_operations.conflict, *Pfile_operations.conflict;

typedef struct file.conflict file.conflict, *Pfile.conflict;

typedef struct kiocb.conflict kiocb.conflict, *Pkiocb.conflict;

typedef struct inode.conflict inode.conflict, *Pinode.conflict;

typedef struct file_lock.conflict file_lock.conflict, *Pfile_lock.conflict;

typedef struct nlm_lockowner nlm_lockowner, *Pnlm_lockowner;

typedef struct nfs4_lock_state nfs4_lock_state, *Pnfs4_lock_state;

typedef union anon_union.conflictdb8_for_field_0 anon_union.conflictdb8_for_field_0, *Panon_union.conflictdb8_for_field_0;

typedef struct pid_namespace pid_namespace, *Ppid_namespace;

typedef struct keyring_index_key keyring_index_key, *Pkeyring_index_key;

typedef struct anon_struct.conflict9558 anon_struct.conflict9558, *Panon_struct.conflict9558;

typedef struct thread_info.conflict thread_info.conflict, *Pthread_info.conflict;

typedef struct pid.conflict pid.conflict, *Ppid.conflict;

typedef struct prev_cputime.conflict prev_cputime.conflict, *Pprev_cputime.conflict;

typedef struct sysv_sem sysv_sem, *Psysv_sem;

typedef struct sysv_shm sysv_shm, *Psysv_shm;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef struct task_io_accounting.conflict task_io_accounting.conflict, *Ptask_io_accounting.conflict;

typedef struct ftrace_ret_stack ftrace_ret_stack, *Pftrace_ret_stack;

typedef phys_addr_t resource_size_t;

typedef struct idr idr, *Pidr;

typedef struct kernfs_syscall_ops kernfs_syscall_ops, *Pkernfs_syscall_ops;

typedef __u64 Elf64_Off;

typedef struct anon_struct.conflict1e137 anon_struct.conflict1e137, *Panon_struct.conflict1e137;

typedef struct anon_struct.conflict45cf anon_struct.conflict45cf, *Panon_struct.conflict45cf;

typedef union anon_union.conflict45e6 anon_union.conflict45e6, *Panon_union.conflict45e6;

typedef struct quota_format_type.conflict quota_format_type.conflict, *Pquota_format_type.conflict;

typedef struct rcu_sync rcu_sync, *Prcu_sync;

typedef struct rcuwait rcuwait, *Prcuwait;

typedef struct list_lru_one list_lru_one, *Plist_lru_one;

typedef struct list_lru_memcg list_lru_memcg, *Plist_lru_memcg;

typedef ulong mm_segment_t;

typedef struct load_weight load_weight, *Pload_weight;

typedef struct sched_statistics sched_statistics, *Psched_statistics;

typedef struct cfs_rq cfs_rq, *Pcfs_rq;

typedef struct sched_avg sched_avg, *Psched_avg;

typedef struct hrtimer hrtimer, *Phrtimer;

typedef enum hrtimer_restart {
    HRTIMER_NORESTART=0,
    HRTIMER_RESTART=1
} hrtimer_restart;

typedef struct anon_struct.conflict454e anon_struct.conflict454e, *Panon_struct.conflict454e;

typedef struct anon_struct.conflict5770_for_field_0 anon_struct.conflict5770_for_field_0, *Panon_struct.conflict5770_for_field_0;

typedef union anon_union.conflictb99_for_field_1 anon_union.conflictb99_for_field_1, *Panon_union.conflictb99_for_field_1;

typedef struct uts_namespace uts_namespace, *Puts_namespace;

typedef struct ipc_namespace ipc_namespace, *Pipc_namespace;

typedef struct mnt_namespace mnt_namespace, *Pmnt_namespace;

typedef struct net net, *Pnet;

typedef struct cgroup_namespace cgroup_namespace, *Pcgroup_namespace;

typedef struct seccomp_filter seccomp_filter, *Pseccomp_filter;

typedef struct io_cq io_cq, *Pio_cq;

typedef union anon_union.conflict1bb71_for__sifields anon_union.conflict1bb71_for__sifields, *Panon_union.conflict1bb71_for__sifields;

typedef struct cgroup_subsys_state cgroup_subsys_state, *Pcgroup_subsys_state;

typedef struct cgroup cgroup, *Pcgroup;

typedef union anon_union.conflict3f4e_for_rseq_cs anon_union.conflict3f4e_for_rseq_cs, *Panon_union.conflict3f4e_for_rseq_cs;

typedef enum uprobe_task_state {
    UTASK_RUNNING=0,
    UTASK_SSTEP=1,
    UTASK_SSTEP_ACK=2,
    UTASK_SSTEP_TRAPPED=3
} uprobe_task_state;

typedef union anon_union.conflict4f5a_for_field_1 anon_union.conflict4f5a_for_field_1, *Panon_union.conflict4f5a_for_field_1;

typedef struct uprobe uprobe, *Puprobe;

typedef struct return_instance return_instance, *Preturn_instance;

typedef struct anon_struct.conflict460e anon_struct.conflict460e, *Panon_struct.conflict460e;

typedef struct cpu_context cpu_context, *Pcpu_context;

typedef struct anon_struct.conflict144d_for_uw anon_struct.conflict144d_for_uw, *Panon_struct.conflict144d_for_uw;

typedef struct debug_info debug_info, *Pdebug_info;

typedef struct path.conflict path.conflict, *Ppath.conflict;

typedef struct fown_struct.conflict fown_struct.conflict, *Pfown_struct.conflict;

typedef struct address_space.conflict address_space.conflict, *Paddress_space.conflict;

typedef struct inode_operations.conflict inode_operations.conflict, *Pinode_operations.conflict;

typedef struct dentry.conflict dentry.conflict, *Pdentry.conflict;

typedef struct iattr.conflict iattr.conflict, *Piattr.conflict;

typedef struct super_block.conflict super_block.conflict, *Psuper_block.conflict;

typedef struct rw_semaphore.conflict1 rw_semaphore.conflict1, *Prw_semaphore.conflict1;

typedef struct file_lock_context.conflict file_lock_context.conflict, *Pfile_lock_context.conflict;

typedef union anon_union.conflict209b3_for_field_41 anon_union.conflict209b3_for_field_41, *Panon_union.conflict209b3_for_field_41;

typedef struct fasync_struct.conflict fasync_struct.conflict, *Pfasync_struct.conflict;

typedef struct file_lock_operations.conflict file_lock_operations.conflict, *Pfile_lock_operations.conflict;

typedef struct lock_manager_operations.conflict lock_manager_operations.conflict, *Plock_manager_operations.conflict;

typedef struct anon_struct.conflictd87 anon_struct.conflictd87, *Panon_struct.conflictd87;

typedef struct sem_undo_list sem_undo_list, *Psem_undo_list;

typedef union anon_union.conflict179d5_for__sifields anon_union.conflict179d5_for__sifields, *Panon_union.conflict179d5_for__sifields;

typedef struct quota_format_ops.conflict quota_format_ops.conflict, *Pquota_format_ops.conflict;

typedef struct dquot.conflict dquot.conflict, *Pdquot.conflict;

typedef enum rcu_sync_type {
    RCU_SYNC=0,
    RCU_SCHED_SYNC=1,
    RCU_BH_SYNC=2
} rcu_sync_type;

typedef struct util_est util_est, *Putil_est;

typedef struct timerqueue_node timerqueue_node, *Ptimerqueue_node;

typedef struct hrtimer_clock_base hrtimer_clock_base, *Phrtimer_clock_base;

typedef struct core_state core_state, *Pcore_state;

typedef struct anon_struct.conflicta6f anon_struct.conflicta6f, *Panon_struct.conflicta6f;

typedef struct anon_struct.conflictb16 anon_struct.conflictb16, *Panon_struct.conflictb16;

typedef struct anon_struct.conflictb49 anon_struct.conflictb49, *Panon_struct.conflictb49;

typedef union anon_union.conflict5e2c_for_field_2 anon_union.conflict5e2c_for_field_2, *Panon_union.conflict5e2c_for_field_2;

typedef union anon_union.conflict5e4b_for_field_3 anon_union.conflict5e4b_for_field_3, *Panon_union.conflict5e4b_for_field_3;

typedef struct anon_struct.conflict177f2 anon_struct.conflict177f2, *Panon_struct.conflict177f2;

typedef struct anon_struct.conflict39a9 anon_struct.conflict39a9, *Panon_struct.conflict39a9;

typedef struct anon_struct.conflict39e2 anon_struct.conflict39e2, *Panon_struct.conflict39e2;

typedef struct anon_struct.conflict3a0f anon_struct.conflict3a0f, *Panon_struct.conflict3a0f;

typedef struct anon_struct.conflict3adc anon_struct.conflict3adc, *Panon_struct.conflict3adc;

typedef struct anon_struct.conflict3af7 anon_struct.conflict3af7, *Panon_struct.conflict3af7;

typedef struct anon_struct.conflict3b18 anon_struct.conflict3b18, *Panon_struct.conflict3b18;

typedef struct cgroup_subsys cgroup_subsys, *Pcgroup_subsys;

typedef struct cgroup_taskset cgroup_taskset, *Pcgroup_taskset;

typedef struct rcu_work rcu_work, *Prcu_work;

typedef struct cgroup_file cgroup_file, *Pcgroup_file;

typedef struct cgroup_root cgroup_root, *Pcgroup_root;

typedef struct cgroup_rstat_cpu cgroup_rstat_cpu, *Pcgroup_rstat_cpu;

typedef struct cgroup_base_stat cgroup_base_stat, *Pcgroup_base_stat;

typedef struct cgroup_bpf cgroup_bpf, *Pcgroup_bpf;

typedef struct psi_group psi_group, *Ppsi_group;

typedef struct cgroup_freezer_state cgroup_freezer_state, *Pcgroup_freezer_state;

typedef struct anon_struct.conflict4f18 anon_struct.conflict4f18, *Panon_struct.conflict4f18;

typedef struct anon_struct.conflict4f39 anon_struct.conflict4f39, *Panon_struct.conflict4f39;

typedef struct user_fpsimd_state user_fpsimd_state, *Puser_fpsimd_state;

typedef struct perf_event perf_event, *Pperf_event;

typedef struct rwlock_t.conflict rwlock_t.conflict, *Prwlock_t.conflict;

typedef struct radix_tree_root.conflict radix_tree_root.conflict, *Pradix_tree_root.conflict;

typedef struct address_space_operations.conflict address_space_operations.conflict, *Paddress_space_operations.conflict;

typedef struct lockref.conflict lockref.conflict, *Plockref.conflict;

typedef struct dentry_operations.conflict dentry_operations.conflict, *Pdentry_operations.conflict;

typedef union anon_union.conflict1e1a2_for_field_12 anon_union.conflict1e1a2_for_field_12, *Panon_union.conflict1e1a2_for_field_12;

typedef struct file_system_type.conflict file_system_type.conflict, *Pfile_system_type.conflict;

typedef struct super_operations.conflict super_operations.conflict, *Psuper_operations.conflict;

typedef struct dquot_operations.conflict dquot_operations.conflict, *Pdquot_operations.conflict;

typedef struct quotactl_ops.conflict quotactl_ops.conflict, *Pquotactl_ops.conflict;

typedef struct block_device.conflict block_device.conflict, *Pblock_device.conflict;

typedef struct quota_info.conflict quota_info.conflict, *Pquota_info.conflict;

typedef struct sb_writers.conflict sb_writers.conflict, *Psb_writers.conflict;

typedef struct shrinker.conflict shrinker.conflict, *Pshrinker.conflict;

typedef struct list_lru.conflict list_lru.conflict, *Plist_lru.conflict;

typedef struct task_struct.conflict1 task_struct.conflict1, *Ptask_struct.conflict1;

typedef struct hrtimer_cpu_base hrtimer_cpu_base, *Phrtimer_cpu_base;

typedef int __kernel_clockid_t;

typedef __kernel_clockid_t clockid_t;

typedef struct timerqueue_head timerqueue_head, *Ptimerqueue_head;

typedef struct core_thread core_thread, *Pcore_thread;

typedef enum timespec_type {
    TT_NONE=0,
    TT_NATIVE=1,
    TT_COMPAT=2
} timespec_type;

typedef union anon_union.conflictac6_for_field_2 anon_union.conflictac6_for_field_2, *Panon_union.conflictac6_for_field_2;

typedef struct pollfd pollfd, *Ppollfd;

typedef int __kernel_timer_t;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

typedef __kernel_long_t __kernel_clock_t;

typedef union anon_union.conflict3ab2_for_field_1 anon_union.conflict3ab2_for_field_1, *Panon_union.conflict3ab2_for_field_1;

typedef struct cftype cftype, *Pcftype;

typedef struct u64_stats_sync u64_stats_sync, *Pu64_stats_sync;

typedef struct arch_uprobe_task arch_uprobe_task, *Parch_uprobe_task;

typedef union anon_union.conflict1e114_for_field_0 anon_union.conflict1e114_for_field_0, *Panon_union.conflict1e114_for_field_0;

typedef struct percpu_rw_semaphore.conflict percpu_rw_semaphore.conflict, *Ppercpu_rw_semaphore.conflict;

typedef struct list_lru_node.conflict list_lru_node.conflict, *Plist_lru_node.conflict;

typedef struct io_context.conflict io_context.conflict, *Pio_context.conflict;

typedef struct timespec timespec, *Ptimespec;

typedef struct compat_timespec compat_timespec, *Pcompat_timespec;

typedef struct anon_struct.conflict3a54 anon_struct.conflict3a54, *Panon_struct.conflict3a54;

typedef struct anon_struct.conflict3a91 anon_struct.conflict3a91, *Panon_struct.conflict3a91;

typedef struct anon_struct.conflict1e0f0 anon_struct.conflict1e0f0, *Panon_struct.conflict1e0f0;

typedef struct rcu_sync.conflict rcu_sync.conflict, *Prcu_sync.conflict;

typedef struct rcuwait.conflict rcuwait.conflict, *Prcuwait.conflict;

typedef struct io_cq.conflict io_cq.conflict, *Pio_cq.conflict;

typedef __kernel_long_t __kernel_time_t;

typedef s32 compat_time_t;

struct anon_struct.conflict9558 {
    struct key_type * type;
    char * description;
};

union key_payload {
    void * rcu_data0;
    void * data[4];
};

union anon_union.conflict95b3_for_field_16 {
    union key_payload payload;
    struct anon_struct.conflict9558 field_1;
};

struct dev_pm_ops.conflict {
    int (* prepare)(struct device.conflict *);
    void (* complete)(struct device.conflict *);
    int (* suspend)(struct device.conflict *);
    int (* resume)(struct device.conflict *);
    int (* freeze)(struct device.conflict *);
    int (* thaw)(struct device.conflict *);
    int (* poweroff)(struct device.conflict *);
    int (* restore)(struct device.conflict *);
    int (* suspend_late)(struct device.conflict *);
    int (* resume_early)(struct device.conflict *);
    int (* freeze_late)(struct device.conflict *);
    int (* thaw_early)(struct device.conflict *);
    int (* poweroff_late)(struct device.conflict *);
    int (* restore_early)(struct device.conflict *);
    int (* suspend_noirq)(struct device.conflict *);
    int (* resume_noirq)(struct device.conflict *);
    int (* freeze_noirq)(struct device.conflict *);
    int (* thaw_noirq)(struct device.conflict *);
    int (* poweroff_noirq)(struct device.conflict *);
    int (* restore_noirq)(struct device.conflict *);
    int (* runtime_suspend)(struct device.conflict *);
    int (* runtime_resume)(struct device.conflict *);
    int (* runtime_idle)(struct device.conflict *);
};

struct user_fpsimd_state {
    __int128 unsigned vregs[32];
    __u32 fpsr;
    __u32 fpcr;
    __u32 __reserved[2];
};

struct trace_event_call {
};

struct raw_spinlock {
    arch_spinlock_t raw_lock;
};

union anon_union.conflicte3e_for_field_0 {
    struct raw_spinlock rlock;
};

struct spinlock {
    union anon_union.conflicte3e_for_field_0 field_0;
};

struct pm_subsys_data {
    spinlock_t lock;
    uint refcount;
    struct list_head clock_list;
    struct pm_domain_data * domain_data;
};

struct jump_entry {
    jump_label_t code;
    jump_label_t target;
    jump_label_t key;
};

struct radix_tree_root {
    spinlock_t xa_lock;
    gfp_t gfp_mask;
    struct radix_tree_node * rnode;
};

struct idr {
    struct radix_tree_root idr_rt;
    uint idr_base;
    uint idr_next;
};

struct wait_queue_head {
    spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_head head;
};

struct kernfs_root {
    struct kernfs_node * kn;
    uint flags;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct idr ino_idr;
    u32 last_ino;
    u32 next_generation;
    struct kernfs_syscall_ops * syscall_ops;
    struct list_head supers;
    wait_queue_head_t deactivate_waitq;
};

struct dev_pm_qos {
};

struct bio_list {
};

struct timespec64 {
    time64_t tv_sec;
    long tv_nsec;
};

struct rb_root_cached {
    struct rb_root rb_root;
    struct rb_node * rb_leftmost;
};

struct optimistic_spin_queue {
    struct atomic_t tail;
};

struct rw_semaphore {
    atomic_long_t count;
    struct list_head wait_list;
    raw_spinlock_t wait_lock;
    struct optimistic_spin_queue osq;
    struct task_struct * owner;
    long m_count;
};

struct address_space {
    struct inode * host;
    struct radix_tree_root i_pages;
    struct atomic_t i_mmap_writable;
    undefined field3_0x1c;
    undefined field4_0x1d;
    undefined field5_0x1e;
    undefined field6_0x1f;
    struct rb_root_cached i_mmap;
    struct rw_semaphore i_mmap_rwsem;
    ulong nrpages;
    ulong nrexceptional;
    ulong writeback_index;
    struct address_space_operations * a_ops;
    ulong flags;
    spinlock_t private_lock;
    gfp_t gfp_mask;
    struct list_head private_list;
    void * private_data;
    errseq_t wb_err;
    undefined field19_0xac;
    undefined field20_0xad;
    undefined field21_0xae;
    undefined field22_0xaf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

union anon_union.conflict7bfe_for_field_12 {
    uint i_nlink;
    uint __i_nlink;
};

union anon_union.conflict7c42_for_field_46 {
    struct pipe_inode_info * i_pipe;
    struct block_device * i_bdev;
    struct cdev * i_cdev;
    char * i_link;
    uint i_dir_seq;
};

union anon_union.conflict7c20_for_field_36 {
    struct hlist_head i_dentry;
    struct callback_head i_rcu;
};

struct inode {
    umode_t i_mode;
    ushort i_opflags;
    struct kuid_t i_uid;
    struct kgid_t i_gid;
    uint i_flags;
    struct posix_acl * i_acl;
    struct posix_acl * i_default_acl;
    struct inode_operations * i_op;
    struct super_block * i_sb;
    struct address_space * i_mapping;
    void * i_security;
    ulong i_ino;
    union anon_union.conflict7bfe_for_field_12 field_12;
    dev_t i_rdev;
    loff_t i_size;
    struct timespec64 i_atime;
    struct timespec64 i_mtime;
    struct timespec64 i_ctime;
    spinlock_t i_lock;
    ushort i_bytes;
    u8 i_blkbits;
    u8 i_write_hint;
    blkcnt_t i_blocks;
    ulong i_state;
    struct rw_semaphore i_rwsem;
    ulong dirtied_when;
    ulong dirtied_time_when;
    struct hlist_node i_hash;
    struct list_head i_io_list;
    struct bdi_writeback * i_wb;
    int i_wb_frn_winner;
    u16 i_wb_frn_avg_time;
    u16 i_wb_frn_history;
    struct list_head i_lru;
    struct list_head i_sb_list;
    struct list_head i_wb_list;
    union anon_union.conflict7c20_for_field_36 field_36;
    struct atomic64_t i_version;
    struct atomic64_t i_sequence;
    struct atomic_t i_count;
    struct atomic_t i_dio_count;
    struct atomic_t i_writecount;
    undefined field42_0x16c;
    undefined field43_0x16d;
    undefined field44_0x16e;
    undefined field45_0x16f;
    struct file_operations * i_fop;
    struct file_lock_context * i_flctx;
    struct address_space i_data;
    struct list_head i_devices;
    union anon_union.conflict7c42_for_field_46 field_46;
    __u32 i_generation;
    __u32 i_fsnotify_mask;
    struct fsnotify_mark_connector * i_fsnotify_marks;
    struct fscrypt_info * i_crypt_info;
    struct fsverity_info * i_verity_info;
    void * i_private;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct iov_iter {
};

struct path {
    struct vfsmount * mnt;
    struct dentry * dentry;
};

struct module_notes_attrs {
};

struct llist_node {
    struct llist_node * next;
};

struct anon_struct.conflict1e137 {
    u32 hash;
    u32 len;
};

union anon_union.conflict1e15b_for_field_0 {
    struct anon_struct.conflict1e137 field_0;
    u64 hash_len;
};

struct qstr {
    union anon_union.conflict1e15b_for_field_0 field_0;
    uchar * name;
};

struct irq_domain_chip_generic {
    uint irqs_per_chip;
    uint num_chips;
    uint irq_flags_to_clear;
    uint irq_flags_to_set;
    enum irq_gc_flags gc_flags;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    struct irq_chip_generic * gc[0];
};

struct linux_binfmt {
};

struct arch_uprobe_task {
};

struct cpumask {
    ulong bits[1];
};

struct irq_common_data {
    uint state_use_accessors;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void * handler_data;
    struct msi_desc * msi_desc;
    cpumask_var_t affinity;
    cpumask_var_t effective_affinity;
};

struct mutex {
    atomic_long_t owner;
    spinlock_t wait_lock;
    struct optimistic_spin_queue osq;
    struct list_head wait_list;
};

struct irq_data {
    u32 mask;
    uint irq;
    ulong hwirq;
    struct irq_common_data * common;
    struct irq_chip * chip;
    struct irq_domain.conflict * domain;
    struct irq_data * parent_data;
    void * chip_data;
};

struct refcount_struct {
    struct atomic_t refs;
};

struct kref {
    refcount_t refcount;
};

struct kobject {
    char * name;
    struct list_head entry;
    struct kobject * parent;
    struct kset.conflict * kset;
    struct kobj_type * ktype;
    struct kernfs_node * sd;
    struct kref kref;
    uint state_initialized:1;
    uint state_in_sysfs:1;
    uint state_add_uevent_sent:1;
    uint state_remove_uevent_sent:1;
    uint uevent_suppress:1;
    undefined field12_0x3d;
    undefined field13_0x3e;
    undefined field14_0x3f;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct irq_desc {
    struct irq_common_data irq_common_data;
    struct irq_data irq_data;
    uint * kstat_irqs;
    void (* handle_irq)(struct irq_desc *);
    struct irqaction * action;
    uint status_use_accessors;
    uint core_internal_state__do_not_mess_with_it;
    uint depth;
    uint wake_depth;
    uint tot_count;
    uint irq_count;
    ulong last_unhandled;
    uint irqs_unhandled;
    struct atomic_t threads_handled;
    int threads_handled_last;
    undefined field15_0xa4;
    undefined field16_0xa5;
    undefined field17_0xa6;
    undefined field18_0xa7;
    raw_spinlock_t lock;
    undefined field20_0xac;
    undefined field21_0xad;
    undefined field22_0xae;
    undefined field23_0xaf;
    undefined field24_0xb0;
    undefined field25_0xb1;
    undefined field26_0xb2;
    undefined field27_0xb3;
    undefined field28_0xb4;
    undefined field29_0xb5;
    undefined field30_0xb6;
    undefined field31_0xb7;
    undefined field32_0xb8;
    undefined field33_0xb9;
    undefined field34_0xba;
    undefined field35_0xbb;
    undefined field36_0xbc;
    undefined field37_0xbd;
    undefined field38_0xbe;
    undefined field39_0xbf;
    struct cpumask * percpu_enabled;
    struct cpumask * percpu_affinity;
    struct cpumask * affinity_hint;
    struct irq_affinity_notify * affinity_notify;
    ulong threads_oneshot;
    struct atomic_t threads_active;
    undefined field46_0xec;
    undefined field47_0xed;
    undefined field48_0xee;
    undefined field49_0xef;
    wait_queue_head_t.conflict wait_for_threads;
    uint nr_actions;
    uint no_suspend_depth;
    uint cond_suspend_depth;
    uint force_resume_depth;
    struct proc_dir_entry * dir;
    struct callback_head rcu;
    struct kobject kobj;
    struct mutex request_mutex;
    undefined field59_0x1c0;
    undefined field60_0x1c1;
    undefined field61_0x1c2;
    undefined field62_0x1c3;
    undefined field63_0x1c4;
    undefined field64_0x1c5;
    undefined field65_0x1c6;
    undefined field66_0x1c7;
    undefined field67_0x1c8;
    undefined field68_0x1c9;
    undefined field69_0x1ca;
    undefined field70_0x1cb;
    undefined field71_0x1cc;
    undefined field72_0x1cd;
    undefined field73_0x1ce;
    undefined field74_0x1cf;
    undefined field75_0x1d0;
    undefined field76_0x1d1;
    undefined field77_0x1d2;
    undefined field78_0x1d3;
    undefined field79_0x1d4;
    undefined field80_0x1d5;
    undefined field81_0x1d6;
    undefined field82_0x1d7;
    int parent_irq;
    undefined field84_0x1dc;
    undefined field85_0x1dd;
    undefined field86_0x1de;
    undefined field87_0x1df;
    struct module.conflict * owner;
    char * name;
    undefined field90_0x1f0;
    undefined field91_0x1f1;
    undefined field92_0x1f2;
    undefined field93_0x1f3;
    undefined field94_0x1f4;
    undefined field95_0x1f5;
    undefined field96_0x1f6;
    undefined field97_0x1f7;
    undefined field98_0x1f8;
    undefined field99_0x1f9;
    undefined field100_0x1fa;
    undefined field101_0x1fb;
    undefined field102_0x1fc;
    undefined field103_0x1fd;
    undefined field104_0x1fe;
    undefined field105_0x1ff;
};

struct anon_struct.conflict144d_for_uw {
    ulong tp_value;
    ulong tp2_value;
    struct user_fpsimd_state fpsimd_state;
};

struct mem_dqblk {
    qsize_t dqb_bhardlimit;
    qsize_t dqb_bsoftlimit;
    qsize_t dqb_curspace;
    qsize_t dqb_rsvspace;
    qsize_t dqb_ihardlimit;
    qsize_t dqb_isoftlimit;
    qsize_t dqb_curinodes;
    time64_t dqb_btime;
    time64_t dqb_itime;
};

struct percpu_counter.conflict {
    raw_spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    s64 count;
    struct list_head list;
    s32 * counters;
};

struct lock_class_key {
};

struct bus_type.conflict {
    char * name;
    char * dev_name;
    struct device.conflict * dev_root;
    struct attribute_group * * bus_groups;
    struct attribute_group * * dev_groups;
    struct attribute_group * * drv_groups;
    int (* match)(struct device.conflict *, struct device_driver *);
    int (* uevent)(struct device.conflict *, struct kobj_uevent_env *);
    int (* probe)(struct device.conflict *);
    void (* sync_state)(struct device.conflict *);
    int (* remove)(struct device.conflict *);
    void (* shutdown)(struct device.conflict *);
    int (* online)(struct device.conflict *);
    int (* offline)(struct device.conflict *);
    int (* suspend)(struct device.conflict *, pm_message_t);
    int (* resume)(struct device.conflict *);
    int (* num_vf)(struct device.conflict *);
    int (* dma_configure)(struct device.conflict *);
    struct dev_pm_ops.conflict * pm;
    struct iommu_ops * iommu_ops;
    struct subsys_private * p;
    struct lock_class_key lock_key;
    bool need_parent_lock;
    undefined field23_0xa9;
    undefined field24_0xaa;
    undefined field25_0xab;
    undefined field26_0xac;
    undefined field27_0xad;
    undefined field28_0xae;
    undefined field29_0xaf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct anon_struct.conflict52e9 {
    ulong _compound_pad_1;
    ulong _compound_pad_2;
    struct list_head deferred_list;
};

struct core_thread {
    struct task_struct * task;
    struct core_thread * next;
};

struct completion {
    uint done;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t wait;
};

struct core_state {
    struct atomic_t nr_threads;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct core_thread dumper;
    struct completion startup;
};

struct iattr {
    uint ia_valid;
    umode_t ia_mode;
    undefined field2_0x6;
    undefined field3_0x7;
    struct kuid_t ia_uid;
    struct kgid_t ia_gid;
    loff_t ia_size;
    struct timespec64 ia_atime;
    struct timespec64 ia_mtime;
    struct timespec64 ia_ctime;
    struct file * ia_file;
};

struct qc_type_state {
    uint flags;
    uint spc_timelimit;
    uint ino_timelimit;
    uint rt_spc_timelimit;
    uint spc_warnlimit;
    uint ino_warnlimit;
    uint rt_spc_warnlimit;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    ulonglong ino;
    blkcnt_t blocks;
    blkcnt_t nextents;
};

struct qc_state {
    uint s_incoredqs;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct qc_type_state s_state[3];
};

struct signal_struct {
};

struct kprojid_t {
    projid_t val;
};

union anon_union.conflict6b1d_for_field_0 {
    struct kuid_t uid;
    struct kgid_t gid;
    struct kprojid_t projid;
};

struct compat_timespec {
    compat_time_t tv_sec;
    s32 tv_nsec;
};

struct list_lru_one {
    struct list_head list;
    long nr_items;
};

struct list_lru_node {
    spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_lru_one lru;
    struct list_lru_memcg * memcg_lrus;
    long nr_items;
    undefined field8_0x30;
    undefined field9_0x31;
    undefined field10_0x32;
    undefined field11_0x33;
    undefined field12_0x34;
    undefined field13_0x35;
    undefined field14_0x36;
    undefined field15_0x37;
    undefined field16_0x38;
    undefined field17_0x39;
    undefined field18_0x3a;
    undefined field19_0x3b;
    undefined field20_0x3c;
    undefined field21_0x3d;
    undefined field22_0x3e;
    undefined field23_0x3f;
};

struct timespec {
    __kernel_time_t tv_sec;
    long tv_nsec;
};

struct attribute_group {
    char * name;
    umode_t (* is_visible)(struct kobject *, struct attribute *, int);
    umode_t (* is_bin_visible)(struct kobject *, struct bin_attribute *, int);
    struct attribute * * attrs;
    struct bin_attribute * * bin_attrs;
};

struct fsnotify_mark_connector {
};

struct anon_struct.conflict4f39 {
    struct callback_head dup_xol_work;
    ulong dup_xol_addr;
};

struct anon_struct.conflict4f18 {
    struct arch_uprobe_task autask;
    ulong vaddr;
};

union anon_union.conflict4f5a_for_field_1 {
    struct anon_struct.conflict4f18 field_0;
    struct anon_struct.conflict4f39 field_1;
};

struct irq_domain_ops.conflict {
    int (* match)(struct irq_domain.conflict *, struct device_node *, enum irq_domain_bus_token);
    int (* select)(struct irq_domain.conflict *, struct irq_fwspec *, enum irq_domain_bus_token);
    int (* map)(struct irq_domain.conflict *, uint, irq_hw_number_t);
    void (* unmap)(struct irq_domain.conflict *, uint);
    int (* xlate)(struct irq_domain.conflict *, struct device_node *, u32 *, uint, ulong *, uint *);
    int (* alloc)(struct irq_domain.conflict *, uint, uint, void *);
    void (* free)(struct irq_domain.conflict *, uint, uint);
    int (* activate)(struct irq_domain.conflict *, struct irq_data *, bool);
    void (* deactivate)(struct irq_domain.conflict *, struct irq_data *);
    int (* translate)(struct irq_domain.conflict *, struct irq_fwspec *, ulong *, uint *);
};

struct shrinker {
    ulong (* count_objects)(struct shrinker *, struct shrink_control *);
    ulong (* scan_objects)(struct shrinker *, struct shrink_control *);
    long batch;
    int seeks;
    uint flags;
    struct list_head list;
    int id;
    undefined field7_0x34;
    undefined field8_0x35;
    undefined field9_0x36;
    undefined field10_0x37;
    atomic_long_t * nr_deferred;
};

struct class.conflict {
    char * name;
    struct module * owner;
    struct attribute_group * * class_groups;
    struct attribute_group * * dev_groups;
    struct kobject * dev_kobj;
    int (* dev_uevent)(struct device.conflict *, struct kobj_uevent_env *);
    char * (* devnode)(struct device.conflict *, umode_t *);
    void (* class_release)(struct class.conflict *);
    void (* dev_release)(struct device.conflict *);
    int (* shutdown_pre)(struct device.conflict *);
    struct kobj_ns_type_operations * ns_type;
    void * (* namespace)(struct device.conflict *);
    void (* get_ownership)(struct device.conflict *, struct kuid_t *, struct kgid_t *);
    struct dev_pm_ops.conflict * pm;
    struct subsys_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct core_thread.conflict {
    struct task_struct.conflict * task;
    struct core_thread.conflict * next;
};

struct core_state.conflict {
    struct atomic_t nr_threads;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct core_thread.conflict dumper;
    struct completion.conflict startup;
};

union anon_union.conflict45e6 {
};

struct anon_struct.conflict45cf {
    u64 android_kabi_reserved1;
};

union anon_union.conflict2152_for_field_13 {
    void (* d_canonical_path)(struct path *, struct path *);
    struct anon_struct.conflict45cf field_1;
    union anon_union.conflict45e6 field_2;
};

struct util_est {
    uint enqueued;
    uint ewma;
};

struct file_operations {
    struct module * owner;
    loff_t (* llseek)(struct file *, loff_t, int);
    ssize_t (* read)(struct file *, char *, size_t, loff_t *);
    ssize_t (* write)(struct file *, char *, size_t, loff_t *);
    ssize_t (* read_iter)(struct kiocb *, struct iov_iter *);
    ssize_t (* write_iter)(struct kiocb *, struct iov_iter *);
    int (* iterate)(struct file *, struct dir_context *);
    int (* iterate_shared)(struct file *, struct dir_context *);
    __poll_t (* poll)(struct file *, struct poll_table_struct *);
    long (* unlocked_ioctl)(struct file *, uint, ulong);
    long (* compat_ioctl)(struct file *, uint, ulong);
    int (* mmap)(struct file *, struct vm_area_struct *);
    ulong mmap_supported_flags;
    int (* open)(struct inode *, struct file *);
    int (* flush)(struct file *, fl_owner_t);
    int (* release)(struct inode *, struct file *);
    int (* fsync)(struct file *, loff_t, loff_t, int);
    int (* fasync)(int, struct file *, int);
    int (* lock)(struct file *, int, struct file_lock *);
    ssize_t (* sendpage)(struct file *, struct page *, int, size_t, loff_t *, int);
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    int (* check_flags)(int);
    int (* flock)(struct file *, int, struct file_lock *);
    ssize_t (* splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, uint);
    ssize_t (* splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, uint);
    int (* setlease)(struct file *, long, struct file_lock * *, void * *);
    long (* fallocate)(struct file *, int, loff_t, loff_t);
    void (* show_fdinfo)(struct seq_file *, struct file *);
    ssize_t (* copy_file_range)(struct file *, loff_t, struct file *, loff_t, size_t, uint);
    int (* clone_file_range)(struct file *, loff_t, struct file *, loff_t, u64);
    int (* dedupe_file_range)(struct file *, loff_t, struct file *, loff_t, u64);
    int (* fadvise)(struct file *, loff_t, loff_t, int);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

union anon_union.conflict45eb_for_field_183 {
    uint frozen:1;
    struct anon_struct.conflict45cf field_1;
    union anon_union.conflict45e6 field_2;
};

struct pgd_t {
    pgdval_t pgd;
};

struct kernfs_elem_attr {
    struct kernfs_ops * ops;
    struct kernfs_open_node * open;
    loff_t size;
    struct kernfs_node * notify_next;
};

struct sigset_t {
    ulong sig[1];
};

struct sigpending {
    struct list_head list;
    struct sigset_t signal;
};

struct dquot_operations {
    int (* write_dquot)(struct dquot *);
    dquot * (* alloc_dquot)(struct super_block *, int);
    void (* destroy_dquot)(struct dquot *);
    int (* acquire_dquot)(struct dquot *);
    int (* release_dquot)(struct dquot *);
    int (* mark_dirty)(struct dquot *);
    int (* write_info)(struct super_block *, int);
    qsize_t * (* get_reserved_space)(struct inode *);
    int (* get_projid)(struct inode *, struct kprojid_t *);
    int (* get_inode_usage)(struct inode *, qsize_t *);
    int (* get_next_id)(struct super_block *, struct kqid *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct files_struct {
};

struct device_type.conflict {
    char * name;
    struct attribute_group * * groups;
    int (* uevent)(struct device.conflict *, struct kobj_uevent_env *);
    char * (* devnode)(struct device.conflict *, umode_t *, struct kuid_t *, struct kgid_t *);
    void (* release)(struct device.conflict *);
    struct dev_pm_ops.conflict * pm;
};

union anon_union.conflict5e4b_for_field_3 {
    struct hlist_node ioc_node;
    struct callback_head __rcu_head;
};

struct reclaim_state {
    ulong reclaimed_slab;
};

struct hd_struct {
};

struct list_lru.conflict {
    struct list_lru_node.conflict * node;
};

struct key_user {
};

struct poll_table_struct {
};

struct fscrypt_operations {
};

struct load_weight {
    ulong weight;
    u32 inv_weight;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct sched_statistics {
    u64 wait_start;
    u64 wait_max;
    u64 wait_count;
    u64 wait_sum;
    u64 iowait_count;
    u64 iowait_sum;
    u64 sleep_start;
    u64 sleep_max;
    s64 sum_sleep_runtime;
    u64 block_start;
    u64 block_max;
    u64 exec_max;
    u64 slice_max;
    u64 nr_migrations_cold;
    u64 nr_failed_migrations_affine;
    u64 nr_failed_migrations_running;
    u64 nr_failed_migrations_hot;
    u64 nr_forced_migrations;
    u64 nr_wakeups;
    u64 nr_wakeups_sync;
    u64 nr_wakeups_migrate;
    u64 nr_wakeups_local;
    u64 nr_wakeups_remote;
    u64 nr_wakeups_affine;
    u64 nr_wakeups_affine_attempts;
    u64 nr_wakeups_passive;
    u64 nr_wakeups_idle;
};

struct sched_avg {
    u64 last_update_time;
    u64 load_sum;
    u64 runnable_load_sum;
    u32 util_sum;
    u32 period_contrib;
    ulong load_avg;
    ulong runnable_load_avg;
    ulong util_avg;
    struct util_est util_est;
};

struct sched_entity {
    struct load_weight load;
    ulong runnable_weight;
    struct rb_node run_node;
    struct list_head group_node;
    uint on_rq;
    undefined field5_0x44;
    undefined field6_0x45;
    undefined field7_0x46;
    undefined field8_0x47;
    u64 exec_start;
    u64 sum_exec_runtime;
    u64 vruntime;
    u64 prev_sum_exec_runtime;
    u64 nr_migrations;
    struct sched_statistics statistics;
    int depth;
    undefined field16_0x14c;
    undefined field17_0x14d;
    undefined field18_0x14e;
    undefined field19_0x14f;
    struct sched_entity * parent;
    struct cfs_rq * cfs_rq;
    struct cfs_rq * my_q;
    undefined field23_0x168;
    undefined field24_0x169;
    undefined field25_0x16a;
    undefined field26_0x16b;
    undefined field27_0x16c;
    undefined field28_0x16d;
    undefined field29_0x16e;
    undefined field30_0x16f;
    undefined field31_0x170;
    undefined field32_0x171;
    undefined field33_0x172;
    undefined field34_0x173;
    undefined field35_0x174;
    undefined field36_0x175;
    undefined field37_0x176;
    undefined field38_0x177;
    undefined field39_0x178;
    undefined field40_0x179;
    undefined field41_0x17a;
    undefined field42_0x17b;
    undefined field43_0x17c;
    undefined field44_0x17d;
    undefined field45_0x17e;
    undefined field46_0x17f;
    struct sched_avg avg;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field52_0x1e0;
    undefined field53_0x1e1;
    undefined field54_0x1e2;
    undefined field55_0x1e3;
    undefined field56_0x1e4;
    undefined field57_0x1e5;
    undefined field58_0x1e6;
    undefined field59_0x1e7;
    undefined field60_0x1e8;
    undefined field61_0x1e9;
    undefined field62_0x1ea;
    undefined field63_0x1eb;
    undefined field64_0x1ec;
    undefined field65_0x1ed;
    undefined field66_0x1ee;
    undefined field67_0x1ef;
    undefined field68_0x1f0;
    undefined field69_0x1f1;
    undefined field70_0x1f2;
    undefined field71_0x1f3;
    undefined field72_0x1f4;
    undefined field73_0x1f5;
    undefined field74_0x1f6;
    undefined field75_0x1f7;
    undefined field76_0x1f8;
    undefined field77_0x1f9;
    undefined field78_0x1fa;
    undefined field79_0x1fb;
    undefined field80_0x1fc;
    undefined field81_0x1fd;
    undefined field82_0x1fe;
    undefined field83_0x1ff;
};

struct hlist_bl_node {
    struct hlist_bl_node * next;
    struct hlist_bl_node * * pprev;
};

union anon_union.conflict1887_for_d_u {
    struct hlist_node d_alias;
    struct hlist_bl_node d_in_lookup_hash;
    struct callback_head d_rcu;
};

union anon_union.conflict96ab_for_field_24 {
    int non_rcu;
    struct callback_head rcu;
};

struct anon_struct.conflict460e {
    u64 android_kabi_reserved2;
};

struct fprop_local_percpu {
    struct percpu_counter.conflict events;
    uint period;
    undefined field2_0x3c;
    undefined field3_0x3d;
    undefined field4_0x3e;
    undefined field5_0x3f;
    raw_spinlock_t lock;
    undefined field7_0x44;
    undefined field8_0x45;
    undefined field9_0x46;
    undefined field10_0x47;
    undefined field11_0x48;
    undefined field12_0x49;
    undefined field13_0x4a;
    undefined field14_0x4b;
    undefined field15_0x4c;
    undefined field16_0x4d;
    undefined field17_0x4e;
    undefined field18_0x4f;
    undefined field19_0x50;
    undefined field20_0x51;
    undefined field21_0x52;
    undefined field22_0x53;
    undefined field23_0x54;
    undefined field24_0x55;
    undefined field25_0x56;
    undefined field26_0x57;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct anon_struct.conflict39e2 {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    sigval_t _sigval;
};

struct anon_struct.conflict3a0f {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    int _status;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    __kernel_clock_t _utime;
    __kernel_clock_t _stime;
};

struct anon_struct.conflict3b18 {
    void * _call_addr;
    int _syscall;
    uint _arch;
};

struct anon_struct.conflict177f2 {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
};

struct anon_struct.conflict18715 {
    struct page.conflict * next;
    int pages;
    int pobjects;
};

union anon_union.conflict179d5_for__sifields {
    int _pad[28];
    struct anon_struct.conflict177f2 _kill;
    struct anon_struct.conflict18715 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict18715 _sigfault;
    struct anon_struct.conflict18715 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union anon_union.conflict179d5_for__sifields _sifields;
};

struct workqueue_struct {
};

struct unicode_map {
};

struct request_queue {
};

struct rcu_node {
};

union anon_union.conflict5e2c_for_field_2 {
    struct list_head q_node;
    struct kmem_cache * __rcu_icq_cache;
};

struct pipe_inode_info {
};

struct rcuwait.conflict {
    struct task_struct.conflict1 * task;
};

struct rw_semaphore.conflict1 {
    atomic_long_t count;
    struct list_head wait_list;
    raw_spinlock_t.conflict wait_lock;
    struct optimistic_spin_queue osq;
    undefined field4_0x34;
    undefined field5_0x35;
    undefined field6_0x36;
    undefined field7_0x37;
    struct task_struct.conflict1 * owner;
    long m_count;
};

struct rcu_sync.conflict {
    int gp_state;
    int gp_count;
    wait_queue_head_t.conflict gp_wait;
    int cb_state;
    undefined field4_0x34;
    undefined field5_0x35;
    undefined field6_0x36;
    undefined field7_0x37;
    struct callback_head cb_head;
    enum rcu_sync_type gp_type;
    undefined field10_0x4c;
    undefined field11_0x4d;
    undefined field12_0x4e;
    undefined field13_0x4f;
};

struct percpu_rw_semaphore.conflict {
    struct rcu_sync.conflict rss;
    uint * read_count;
    struct rw_semaphore.conflict1 rw_sem;
    struct rcuwait.conflict writer;
    int readers_block;
    undefined field5_0xac;
    undefined field6_0xad;
    undefined field7_0xae;
    undefined field8_0xaf;
};

struct nfs4_lock_state {
};

struct anon_struct.conflict188d8 {
    struct dev_pagemap * pgmap;
    ulong hmm_data;
    ulong _zd_pad_1;
};

struct timer_list {
    struct hlist_node entry;
    ulong expires;
    void (* function)(struct timer_list *);
    u32 flags;
    undefined field4_0x24;
    undefined field5_0x25;
    undefined field6_0x26;
    undefined field7_0x27;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct wakeup_source.conflict {
    char * name;
    int id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head entry;
    spinlock_t lock;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
    undefined field12_0x28;
    undefined field13_0x29;
    undefined field14_0x2a;
    undefined field15_0x2b;
    undefined field16_0x2c;
    undefined field17_0x2d;
    undefined field18_0x2e;
    undefined field19_0x2f;
    undefined field20_0x30;
    undefined field21_0x31;
    undefined field22_0x32;
    undefined field23_0x33;
    undefined field24_0x34;
    undefined field25_0x35;
    undefined field26_0x36;
    undefined field27_0x37;
    struct wake_irq * wakeirq;
    struct timer_list timer;
    ulong timer_expires;
    ktime_t total_time;
    ktime_t max_time;
    ktime_t last_time;
    ktime_t start_prevent_time;
    ktime_t prevent_sleep_time;
    ulong event_count;
    ulong active_count;
    ulong relax_count;
    ulong expire_count;
    ulong wakeup_count;
    struct device.conflict * dev;
    bool active:1;
    bool autosleep_enabled:1;
    undefined field44_0xd9;
    undefined field45_0xda;
    undefined field46_0xdb;
    undefined field47_0xdc;
    undefined field48_0xdd;
    undefined field49_0xde;
    undefined field50_0xdf;
};

struct list_lru {
    struct list_lru_node * node;
    struct list_head list;
    int shrinker_id;
    bool memcg_aware;
    undefined field4_0x1d;
    undefined field5_0x1e;
    undefined field6_0x1f;
};

union anon_union.conflict1886c_for_field_3 {
    struct mm_struct.conflict * pt_mm;
    struct atomic_t pt_frag_refcount;
};

struct anon_struct.conflict1888e {
    ulong _pt_pad_1;
    pgtable_t.conflict pmd_huge_pte;
    ulong _pt_pad_2;
    union anon_union.conflict1886c_for_field_3 field_3;
    spinlock_t.conflict * ptl;
};

struct anon_struct.conflict521e {
    uint inuse:16;
    uint objects:15;
    uint frozen:1;
};

union anon_union.conflict1879b_for_field_3 {
    void * s_mem;
    ulong counters;
    struct anon_struct.conflict521e field_2;
};

union anon_union.conflict18746_for_field_0 {
    struct list_head slab_list;
    struct anon_struct.conflict18715 field_1;
};

struct anon_struct.conflict187c2 {
    union anon_union.conflict18746_for_field_0 field_0;
    struct kmem_cache * slab_cache;
    void * freelist;
    union anon_union.conflict1879b_for_field_3 field_3;
};

struct anon_struct.conflict52b0 {
    ulong compound_head;
    uchar compound_dtor;
    uchar compound_order;
    undefined field3_0xa;
    undefined field4_0xb;
    struct atomic_t compound_mapcount;
};

struct anon_struct.conflict5094 {
    struct list_head lru;
    struct address_space * mapping;
    ulong index;
    ulong private;
};

union anon_union.conflict18914_for_field_1 {
    struct anon_struct.conflict5094 field_0;
    struct anon_struct.conflict187c2 field_1;
    struct anon_struct.conflict52b0 field_2;
    struct anon_struct.conflict52e9 field_3;
    struct anon_struct.conflict1888e field_4;
    struct anon_struct.conflict188d8 field_5;
    struct callback_head callback_head;
};

struct module_sect_attrs {
};

struct file_lock_operations.conflict {
    void (* fl_copy_lock)(struct file_lock.conflict *, struct file_lock.conflict *);
    void (* fl_release_private)(struct file_lock.conflict *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct cgroup_namespace {
    refcount_t count;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct ns_common ns;
    struct user_namespace * user_ns;
    struct ucounts * ucounts;
    struct css_set * root_cset;
};

struct upid {
    int nr;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct pid_namespace * ns;
};

struct perf_event {
};

struct mem_cgroup {
};

struct lock_manager_operations.conflict {
    int (* lm_compare_owner)(struct file_lock.conflict *, struct file_lock.conflict *);
    ulong (* lm_owner_key)(struct file_lock.conflict *);
    fl_owner_t (* lm_get_owner)(fl_owner_t);
    void (* lm_put_owner)(fl_owner_t);
    void (* lm_notify)(struct file_lock.conflict *);
    int (* lm_grant)(struct file_lock.conflict *, int);
    bool (* lm_break)(struct file_lock.conflict *);
    int (* lm_change)(struct file_lock.conflict *, int, struct list_head *);
    void (* lm_setup)(struct file_lock.conflict *, void * *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct key_type {
};

struct resource {
    resource_size_t start;
    resource_size_t end;
    char * name;
    ulong flags;
    ulong desc;
    struct resource * parent;
    struct resource * sibling;
    struct resource * child;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct vmem_altmap {
    ulong base_pfn;
    ulong reserve;
    ulong free;
    ulong align;
    ulong alloc;
};

struct dev_pagemap {
    int (* page_fault)(struct vm_area_struct *, ulong, struct page *, uint, struct pmd_t *);
    void (* page_free)(struct page *, void *);
    struct vmem_altmap altmap;
    bool altmap_valid;
    undefined field4_0x39;
    undefined field5_0x3a;
    undefined field6_0x3b;
    undefined field7_0x3c;
    undefined field8_0x3d;
    undefined field9_0x3e;
    undefined field10_0x3f;
    struct resource res;
    struct percpu_ref * ref;
    void (* kill)(struct percpu_ref *);
    struct device * dev;
    void * data;
    enum memory_type type;
    undefined field17_0xc4;
    undefined field18_0xc5;
    undefined field19_0xc6;
    undefined field20_0xc7;
};

struct dir_context {
    int (* actor)(struct dir_context *, char *, int, loff_t, u64, uint);
    loff_t pos;
};

struct swap_cluster_info {
    spinlock_t.conflict lock;
    uint data:24;
    uint flags:8;
    undefined field3_0x1c;
    undefined field4_0x1d;
    undefined field5_0x1e;
    undefined field6_0x1f;
};

struct file_system_type { // Missing member i_lock_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member i_mutex_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member i_mutex_dir_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member android_kabi_reserved1 : u64 at offset 0x48 [conflict with s_writers_key]
    char * name;
    int fs_flags;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    dentry * (* mount)(struct file_system_type *, int, char *, void *);
    dentry * (* mount2)(struct vfsmount *, struct file_system_type *, int, char *, void *);
    void * (* alloc_mnt_data)(void);
    void (* kill_sb)(struct super_block *);
    struct module * owner;
    struct file_system_type * next;
    struct hlist_head fs_supers;
    struct lock_class_key s_vfs_rename_key;
    struct lock_class_key s_umount_key;
    struct lock_class_key s_lock_key;
    struct lock_class_key s_writers_key[3];
    undefined field17_0x4b;
    undefined field18_0x4c;
    undefined field19_0x4d;
    undefined field20_0x4e;
    undefined field21_0x4f;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct nfs4_lock_info {
    struct nfs4_lock_state * owner;
};

struct mm_rss_stat {
    atomic_long_t count[5];
};

struct uprobes_state {
    struct xol_area * xol_area;
};

struct mm_context_t {
    struct atomic64_t id;
    void * vdso;
    ulong flags;
};

struct anon_struct.conflict5770_for_field_0 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    spinlock_t page_table_lock;
    struct rw_semaphore mmap_sem;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t arg_lock;
    undefined field26_0xec;
    undefined field27_0xed;
    undefined field28_0xee;
    undefined field29_0xef;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state * core_state;
    struct atomic_t membarrier_state;
    spinlock_t ioctx_lock;
    struct kioctx_table * ioctx_table;
    struct task_struct * owner;
    struct user_namespace * user_ns;
    struct file * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field54_0x33c;
    undefined field55_0x33d;
    undefined field56_0x33e;
    undefined field57_0x33f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

struct swap_cluster_list {
    struct swap_cluster_info head;
    struct swap_cluster_info tail;
};

struct kqid {
    union anon_union.conflict6b1d_for_field_0 field_0;
    enum quota_type type;
};

struct dquot {
    struct hlist_node dq_hash;
    struct list_head dq_inuse;
    struct list_head dq_free;
    struct list_head dq_dirty;
    struct mutex dq_lock;
    spinlock_t dq_dqb_lock;
    struct atomic_t dq_count;
    struct super_block * dq_sb;
    struct kqid dq_id;
    loff_t dq_off;
    ulong dq_flags;
    struct mem_dqblk dq_dqb;
};

struct anon_struct.conflict3af7 {
    long _band;
    int _fd;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct anon_struct.conflict39a9 {
    __kernel_timer_t _tid;
    int _overrun;
    sigval_t _sigval;
    int _sys_private;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
};

struct anon_struct.conflict3a91 {
    char _dummy_pkey[8];
    __u32 _pkey;
};

struct anon_struct.conflict3a54 {
    char _dummy_bnd[8];
    void * _lower;
    void * _upper;
};

union anon_union.conflict3ab2_for_field_1 {
    short _addr_lsb;
    struct anon_struct.conflict3a54 _addr_bnd;
    struct anon_struct.conflict3a91 _addr_pkey;
};

struct anon_struct.conflict3adc {
    void * _addr;
    union anon_union.conflict3ab2_for_field_1 field_1;
};

union anon_union.conflict1bb71_for__sifields {
    int _pad[28];
    struct anon_struct.conflict177f2 _kill;
    struct anon_struct.conflict39a9 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict3adc _sigfault;
    struct anon_struct.conflict3af7 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

struct class {
    char * name;
    struct module * owner;
    struct attribute_group * * class_groups;
    struct attribute_group * * dev_groups;
    struct kobject * dev_kobj;
    int (* dev_uevent)(struct device *, struct kobj_uevent_env *);
    char * (* devnode)(struct device *, umode_t *);
    void (* class_release)(struct class *);
    void (* dev_release)(struct device *);
    int (* shutdown_pre)(struct device *);
    struct kobj_ns_type_operations * ns_type;
    void * (* namespace)(struct device *);
    void (* get_ownership)(struct device *, struct kuid_t *, struct kgid_t *);
    struct dev_pm_ops * pm;
    struct subsys_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kernfs_elem_dir {
    ulong subdirs;
    struct rb_root children;
    struct kernfs_root * root;
};

struct cftype {
    char name[64];
    ulong private;
    size_t max_write_len;
    uint flags;
    uint file_offset;
    struct cgroup_subsys * ss;
    struct list_head node;
    struct kernfs_ops * kf_ops;
    int (* open)(struct kernfs_open_file *);
    void (* release)(struct kernfs_open_file *);
    u64 (* read_u64)(struct cgroup_subsys_state *, struct cftype *);
    s64 (* read_s64)(struct cgroup_subsys_state *, struct cftype *);
    int (* seq_show)(struct seq_file *, void *);
    void * (* seq_start)(struct seq_file *, loff_t *);
    void * (* seq_next)(struct seq_file *, void *, loff_t *);
    void (* seq_stop)(struct seq_file *, void *);
    int (* write_u64)(struct cgroup_subsys_state *, struct cftype *, u64);
    int (* write_s64)(struct cgroup_subsys_state *, struct cftype *, s64);
    ssize_t (* write)(struct kernfs_open_file *, char *, size_t, loff_t);
    __poll_t (* poll)(struct kernfs_open_file *, struct poll_table_struct *);
};

struct sched_info {
    ulong pcount;
    ulonglong run_delay;
    ulonglong last_arrival;
    ulonglong last_queued;
};

struct kiocb {
    struct file * ki_filp;
    loff_t ki_pos;
    void (* ki_complete)(struct kiocb *, long, long);
    void * private;
    int ki_flags;
    u16 ki_hint;
    u16 ki_ioprio;
};

struct kernfs_elem_symlink {
    struct kernfs_node * target_kn;
};

union anon_union.conflict9b6f_for_field_7 {
    struct kernfs_elem_dir dir;
    struct kernfs_elem_symlink symlink;
    struct kernfs_elem_attr attr;
};

struct file_lock_context {
    spinlock_t flc_lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_head flc_flock;
    struct list_head flc_posix;
    struct list_head flc_lease;
};

struct key_restriction {
    int (* check)(struct key *, struct key_type *, union key_payload *, struct key *);
    struct key * key;
    struct key_type * keytype;
};

struct dev_pm_ops {
    int (* prepare)(struct device *);
    void (* complete)(struct device *);
    int (* suspend)(struct device *);
    int (* resume)(struct device *);
    int (* freeze)(struct device *);
    int (* thaw)(struct device *);
    int (* poweroff)(struct device *);
    int (* restore)(struct device *);
    int (* suspend_late)(struct device *);
    int (* resume_early)(struct device *);
    int (* freeze_late)(struct device *);
    int (* thaw_early)(struct device *);
    int (* poweroff_late)(struct device *);
    int (* restore_early)(struct device *);
    int (* suspend_noirq)(struct device *);
    int (* resume_noirq)(struct device *);
    int (* freeze_noirq)(struct device *);
    int (* thaw_noirq)(struct device *);
    int (* poweroff_noirq)(struct device *);
    int (* restore_noirq)(struct device *);
    int (* runtime_suspend)(struct device *);
    int (* runtime_resume)(struct device *);
    int (* runtime_idle)(struct device *);
};

struct pm_domain_data {
};

struct vm_struct {
    struct vm_struct * next;
    void * addr;
    ulong size;
    ulong flags;
    struct page.conflict * * pages;
    uint nr_pages;
    undefined field6_0x2c;
    undefined field7_0x2d;
    undefined field8_0x2e;
    undefined field9_0x2f;
    phys_addr_t phys_addr;
    void * caller;
};

struct iommu_group {
};

struct inode_operations.conflict {
    dentry.conflict * (* lookup)(struct inode.conflict *, struct dentry.conflict *, uint);
    char * (* get_link)(struct dentry.conflict *, struct inode.conflict *, struct delayed_call *);
    int (* permission)(struct inode.conflict *, int);
    int (* permission2)(struct vfsmount *, struct inode.conflict *, int);
    posix_acl * (* get_acl)(struct inode.conflict *, int);
    int (* readlink)(struct dentry.conflict *, char *, int);
    int (* create)(struct inode.conflict *, struct dentry.conflict *, umode_t, bool);
    int (* link)(struct dentry.conflict *, struct inode.conflict *, struct dentry.conflict *);
    int (* unlink)(struct inode.conflict *, struct dentry.conflict *);
    int (* symlink)(struct inode.conflict *, struct dentry.conflict *, char *);
    int (* mkdir)(struct inode.conflict *, struct dentry.conflict *, umode_t);
    int (* rmdir)(struct inode.conflict *, struct dentry.conflict *);
    int (* mknod)(struct inode.conflict *, struct dentry.conflict *, umode_t, dev_t);
    int (* rename)(struct inode.conflict *, struct dentry.conflict *, struct inode.conflict *, struct dentry.conflict *, uint);
    int (* setattr)(struct dentry.conflict *, struct iattr.conflict *);
    int (* setattr2)(struct vfsmount *, struct dentry.conflict *, struct iattr.conflict *);
    int (* getattr)(struct path.conflict *, struct kstat *, u32, uint);
    ssize_t (* listxattr)(struct dentry.conflict *, char *, size_t);
    int (* fiemap)(struct inode.conflict *, struct fiemap_extent_info *, u64, u64);
    int (* update_time)(struct inode.conflict *, struct timespec64 *, int);
    int (* atomic_open)(struct inode.conflict *, struct dentry.conflict *, struct file.conflict *, uint, umode_t);
    int (* tmpfile)(struct inode.conflict *, struct dentry.conflict *, umode_t);
    int (* set_acl)(struct inode.conflict *, struct posix_acl *, int);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field27_0xd8;
    undefined field28_0xd9;
    undefined field29_0xda;
    undefined field30_0xdb;
    undefined field31_0xdc;
    undefined field32_0xdd;
    undefined field33_0xde;
    undefined field34_0xdf;
    undefined field35_0xe0;
    undefined field36_0xe1;
    undefined field37_0xe2;
    undefined field38_0xe3;
    undefined field39_0xe4;
    undefined field40_0xe5;
    undefined field41_0xe6;
    undefined field42_0xe7;
    undefined field43_0xe8;
    undefined field44_0xe9;
    undefined field45_0xea;
    undefined field46_0xeb;
    undefined field47_0xec;
    undefined field48_0xed;
    undefined field49_0xee;
    undefined field50_0xef;
    undefined field51_0xf0;
    undefined field52_0xf1;
    undefined field53_0xf2;
    undefined field54_0xf3;
    undefined field55_0xf4;
    undefined field56_0xf5;
    undefined field57_0xf6;
    undefined field58_0xf7;
    undefined field59_0xf8;
    undefined field60_0xf9;
    undefined field61_0xfa;
    undefined field62_0xfb;
    undefined field63_0xfc;
    undefined field64_0xfd;
    undefined field65_0xfe;
    undefined field66_0xff;
};

struct file_ra_state {
    ulong start;
    uint size;
    uint async_size;
    uint ra_pages;
    uint mmap_miss;
    loff_t prev_pos;
};

struct blk_plug {
};

struct pte_t {
    pteval_t pte;
};

struct timerqueue_node {
    struct rb_node node;
    ktime_t expires;
};

struct hrtimer {
    struct timerqueue_node node;
    ktime_t _softexpires;
    hrtimer_restart (* function)(struct hrtimer *);
    struct hrtimer_clock_base * base;
    u8 state;
    u8 is_rel;
    u8 is_soft;
    undefined field7_0x3b;
    undefined field8_0x3c;
    undefined field9_0x3d;
    undefined field10_0x3e;
    undefined field11_0x3f;
    u64 android_kabi_reserved1;
};

struct sched_dl_entity {
    struct rb_node rb_node;
    u64 dl_runtime;
    u64 dl_deadline;
    u64 dl_period;
    u64 dl_bw;
    u64 dl_density;
    s64 runtime;
    u64 deadline;
    uint flags;
    uint dl_throttled:1;
    uint dl_boosted:1;
    uint dl_yielded:1;
    uint dl_non_contending:1;
    uint dl_overrun:1;
    undefined field14_0x55;
    undefined field15_0x56;
    undefined field16_0x57;
    struct hrtimer dl_timer;
    struct hrtimer inactive_timer;
};

struct msi_msg {
};

struct cdev {
    struct kobject kobj;
    struct module * owner;
    struct file_operations.conflict * ops;
    struct list_head list;
    dev_t dev;
    uint count;
};

struct anon_struct.conflict1e0f0 {
    spinlock_t.conflict lock;
    int count;
    undefined field2_0x1c;
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
};

union anon_union.conflict1e114_for_field_0 {
    struct anon_struct.conflict1e0f0 field_0;
};

struct lockref.conflict {
    union anon_union.conflict1e114_for_field_0 field_0;
};

struct proc_dir_entry {
};

struct kset.conflict {
    struct list_head list;
    spinlock_t.conflict list_lock;
    struct kobject kobj;
    struct kset_uevent_ops.conflict * uevent_ops;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kparam_string {
    uint maxlen;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * string;
};

struct page_frag {
    struct page.conflict * page;
    __u32 offset;
    __u32 size;
};

struct sighand_struct {
};

struct shrink_control {
    gfp_t gfp_mask;
    int nid;
    ulong nr_to_scan;
    ulong nr_scanned;
    struct mem_cgroup * memcg;
};

struct pm_message {
    int event;
};

struct dev_pm_info {
    pm_message_t power_state;
    uint can_wakeup:1;
    uint async_suspend:1;
    bool in_dpm_list:1;
    bool is_prepared:1;
    bool is_suspended:1;
    bool is_noirq_suspended:1;
    bool is_late_suspended:1;
    bool no_pm:1;
    bool early_init:1;
    bool direct_complete:1;
    undefined field11_0x6;
    undefined field12_0x7;
    u32 driver_flags;
    spinlock_t lock;
    struct list_head entry;
    struct completion completion;
    struct wakeup_source * wakeup;
    bool wakeup_path:1;
    bool syscore:1;
    bool no_pm_callbacks:1;
    uint must_resume:1;
    uint may_skip_resume:1;
    undefined field23_0x49;
    undefined field24_0x4a;
    undefined field25_0x4b;
    undefined field26_0x4c;
    undefined field27_0x4d;
    undefined field28_0x4e;
    undefined field29_0x4f;
    struct timer_list suspend_timer;
    ulong timer_expires;
    struct work_struct work;
    wait_queue_head_t wait_queue;
    struct wake_irq * wakeirq;
    struct atomic_t usage_count;
    struct atomic_t child_count;
    uint disable_depth:3;
    uint idle_notification:1;
    uint request_pending:1;
    uint deferred_resume:1;
    uint runtime_auto:1;
    bool ignore_children:1;
    uint no_callbacks:1;
    uint irq_safe:1;
    uint use_autosuspend:1;
    uint timer_autosuspends:1;
    uint memalloc_noio:1;
    undefined field48_0xea;
    undefined field49_0xeb;
    uint links_count;
    enum rpm_request request;
    enum rpm_status runtime_status;
    int runtime_error;
    int autosuspend_delay;
    ulong last_busy;
    ulong active_jiffies;
    ulong suspended_jiffies;
    ulong accounting_timestamp;
    struct pm_subsys_data * subsys_data;
    void (* set_latency_tolerance)(struct device *, s32);
    struct dev_pm_qos * qos;
};

struct seq_operations {
    void * (* start)(struct seq_file *, loff_t *);
    void (* stop)(struct seq_file *, void *);
    void * (* next)(struct seq_file *, void *, loff_t *);
    int (* show)(struct seq_file *, void *);
};

struct attribute {
    char * name;
    umode_t mode;
    undefined field2_0xa;
    undefined field3_0xb;
    undefined field4_0xc;
    undefined field5_0xd;
    undefined field6_0xe;
    undefined field7_0xf;
};

struct bin_attribute {
    struct attribute attr;
    size_t size;
    void * private;
    ssize_t (* read)(struct file *, struct kobject *, struct bin_attribute *, char *, loff_t, size_t);
    ssize_t (* write)(struct file *, struct kobject *, struct bin_attribute *, char *, loff_t, size_t);
    int (* mmap)(struct file *, struct kobject *, struct bin_attribute *, struct vm_area_struct *);
};

struct property {
    char * name;
    int length;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    void * value;
    struct property * next;
    struct bin_attribute attr;
};

struct irq_domain {
    struct list_head link;
    char * name;
    struct irq_domain_ops * ops;
    void * host_data;
    uint flags;
    uint mapcount;
    struct fwnode_handle * fwnode;
    enum irq_domain_bus_token bus_token;
    undefined field8_0x3c;
    undefined field9_0x3d;
    undefined field10_0x3e;
    undefined field11_0x3f;
    struct irq_domain_chip_generic * gc;
    struct irq_domain * parent;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    irq_hw_number_t hwirq_max;
    uint revmap_direct_max_irq;
    uint revmap_size;
    struct radix_tree_root revmap_tree;
    struct mutex revmap_tree_mutex;
    uint linear_revmap[0];
};

struct prev_cputime {
    u64 utime;
    u64 stime;
    raw_spinlock_t lock;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

struct percpu_cluster {
    struct swap_cluster_info index;
    uint next;
    undefined field2_0x24;
    undefined field3_0x25;
    undefined field4_0x26;
    undefined field5_0x27;
};

struct quota_format_ops {
    int (* check_quota_file)(struct super_block *, int);
    int (* read_file_info)(struct super_block *, int);
    int (* write_file_info)(struct super_block *, int);
    int (* free_file_info)(struct super_block *, int);
    int (* read_dqblk)(struct dquot *);
    int (* commit_dqblk)(struct dquot *);
    int (* release_dqblk)(struct dquot *);
    int (* get_next_id)(struct super_block *, struct kqid *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct vm_fault {
    struct vm_area_struct * vma;
    uint flags;
    gfp_t gfp_mask;
    ulong pgoff;
    ulong address;
    struct pmd_t * pmd;
    struct pud_t * pud;
    struct pte_t orig_pte;
    struct page * cow_page;
    struct mem_cgroup * memcg;
    struct page * page;
    struct pte_t * pte;
    spinlock_t * ptl;
    pgtable_t prealloc_pte;
};

struct xol_area {
};

struct vm_userfaultfd_ctx {
};

struct prev_cputime.conflict {
    u64 utime;
    u64 stime;
    raw_spinlock_t.conflict lock;
};

struct anon_struct.conflict82d2 {
    struct list_head link;
    int state;
    undefined field2_0x14;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
};

struct cgroup_freezer_state {
    bool freeze;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int e_freeze;
    int nr_frozen_descendants;
    int nr_frozen_tasks;
};

struct cgroup_bpf {
};

struct task_cputime {
    u64 utime;
    u64 stime;
    ulonglong sum_exec_runtime;
};

struct cgroup_base_stat {
    struct task_cputime cputime;
};

struct psi_group {
};

struct cgroup_file {
    struct kernfs_node * kn;
    ulong notified_at;
    struct timer_list notify_timer;
};

struct percpu_ref {
    atomic_long_t count;
    ulong percpu_count_ptr;
    void (* release)(struct percpu_ref *);
    void (* confirm_switch)(struct percpu_ref *);
    bool force_atomic:1;
    undefined field5_0x21;
    undefined field6_0x22;
    undefined field7_0x23;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
    struct callback_head rcu;
};

struct rcu_work {
    struct work_struct work;
    struct callback_head rcu;
    struct workqueue_struct * wq;
};

struct cgroup_subsys_state {
    struct cgroup * cgroup;
    struct cgroup_subsys * ss;
    struct percpu_ref refcnt;
    struct list_head sibling;
    struct list_head children;
    struct list_head rstat_css_node;
    int id;
    uint flags;
    u64 serial_nr;
    struct atomic_t online_cnt;
    undefined field10_0x8c;
    undefined field11_0x8d;
    undefined field12_0x8e;
    undefined field13_0x8f;
    struct work_struct destroy_work;
    struct rcu_work destroy_rwork;
    struct cgroup_subsys_state * parent;
};

struct cgroup {
    struct cgroup_subsys_state self;
    ulong flags;
    int id;
    int level;
    int max_depth;
    int nr_descendants;
    int nr_dying_descendants;
    int max_descendants;
    int nr_populated_csets;
    int nr_populated_domain_children;
    int nr_populated_threaded_children;
    int nr_threaded_children;
    struct kernfs_node * kn;
    struct cgroup_file procs_file;
    struct cgroup_file events_file;
    u16 subtree_control;
    u16 subtree_ss_mask;
    u16 old_subtree_control;
    u16 old_subtree_ss_mask;
    struct cgroup_subsys_state * subsys[5];
    struct cgroup_root * root;
    struct list_head cset_links;
    struct list_head e_csets[5];
    struct cgroup * dom_cgrp;
    struct cgroup * old_dom_cgrp;
    struct cgroup_rstat_cpu * rstat_cpu;
    struct list_head rstat_css_list;
    struct cgroup_base_stat pending_bstat;
    struct cgroup_base_stat bstat;
    struct prev_cputime.conflict prev_cputime;
    struct list_head pidlists;
    struct mutex pidlist_mutex;
    undefined field32_0x320;
    undefined field33_0x321;
    undefined field34_0x322;
    undefined field35_0x323;
    undefined field36_0x324;
    undefined field37_0x325;
    undefined field38_0x326;
    undefined field39_0x327;
    undefined field40_0x328;
    undefined field41_0x329;
    undefined field42_0x32a;
    undefined field43_0x32b;
    undefined field44_0x32c;
    undefined field45_0x32d;
    undefined field46_0x32e;
    undefined field47_0x32f;
    undefined field48_0x330;
    undefined field49_0x331;
    undefined field50_0x332;
    undefined field51_0x333;
    undefined field52_0x334;
    undefined field53_0x335;
    undefined field54_0x336;
    undefined field55_0x337;
    wait_queue_head_t.conflict offline_waitq;
    struct work_struct release_agent_work;
    struct cgroup_bpf bpf;
    struct psi_group psi;
    struct atomic_t congestion_count;
    struct cgroup_freezer_state freezer;
    undefined field62_0x3a4;
    undefined field63_0x3a5;
    undefined field64_0x3a6;
    undefined field65_0x3a7;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    int ancestor_ids[0];
};

struct lock_manager_operations {
    int (* lm_compare_owner)(struct file_lock *, struct file_lock *);
    ulong (* lm_owner_key)(struct file_lock *);
    fl_owner_t (* lm_get_owner)(fl_owner_t);
    void (* lm_put_owner)(fl_owner_t);
    void (* lm_notify)(struct file_lock *);
    int (* lm_grant)(struct file_lock *, int);
    bool (* lm_break)(struct file_lock *);
    int (* lm_change)(struct file_lock *, int, struct list_head *);
    void (* lm_setup)(struct file_lock *, void * *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct sched_rt_entity {
    struct list_head run_list;
    ulong timeout;
    ulong watchdog_stamp;
    uint time_slice;
    ushort on_rq;
    ushort on_list;
    struct sched_rt_entity * back;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct cma {
};

struct module_kobject.conflict {
    struct kobject kobj;
    struct module.conflict * mod;
    struct kobject * drivers_dir;
    struct module_param_attrs * mp;
    struct completion.conflict * kobj_completion;
};

struct mutex.conflict {
    atomic_long_t owner;
    spinlock_t.conflict wait_lock;
    struct optimistic_spin_queue osq;
    undefined field3_0x24;
    undefined field4_0x25;
    undefined field5_0x26;
    undefined field6_0x27;
    struct list_head wait_list;
};

struct mod_plt_sec {
    struct elf64_shdr * plt;
    int plt_num_entries;
    int plt_max_entries;
};

struct mod_arch_specific {
    struct mod_plt_sec core;
    struct mod_plt_sec init;
    struct plt_entry * ftrace_trampoline;
};

struct mod_kallsyms {
    Elf64_Sym * symtab;
    uint num_symtab;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    char * strtab;
};

struct latch_tree_node {
    struct rb_node node[2];
};

struct mod_tree_node {
    struct module * mod;
    struct latch_tree_node node;
};

struct module_layout {
    void * base;
    uint size;
    uint text_size;
    uint ro_size;
    uint ro_after_init_size;
    struct mod_tree_node mtn;
};

struct module.conflict {
    enum module_state state;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_head list;
    char name[56];
    struct module_kobject.conflict mkobj;
    struct module_attribute * modinfo_attrs;
    char * version;
    char * srcversion;
    struct kobject * holders_dir;
    struct kernel_symbol * syms;
    s32 * crcs;
    uint num_syms;
    undefined field15_0x104;
    undefined field16_0x105;
    undefined field17_0x106;
    undefined field18_0x107;
    struct mutex.conflict param_lock;
    struct kernel_param.conflict * kp;
    uint num_kp;
    uint num_gpl_syms;
    struct kernel_symbol * gpl_syms;
    s32 * gpl_crcs;
    bool sig_ok;
    bool async_probe_requested;
    undefined field27_0x162;
    undefined field28_0x163;
    undefined field29_0x164;
    undefined field30_0x165;
    undefined field31_0x166;
    undefined field32_0x167;
    struct kernel_symbol * gpl_future_syms;
    s32 * gpl_future_crcs;
    uint num_gpl_future_syms;
    uint num_exentries;
    struct exception_table_entry * extable;
    int (* init)(void);
    undefined field39_0x190;
    undefined field40_0x191;
    undefined field41_0x192;
    undefined field42_0x193;
    undefined field43_0x194;
    undefined field44_0x195;
    undefined field45_0x196;
    undefined field46_0x197;
    undefined field47_0x198;
    undefined field48_0x199;
    undefined field49_0x19a;
    undefined field50_0x19b;
    undefined field51_0x19c;
    undefined field52_0x19d;
    undefined field53_0x19e;
    undefined field54_0x19f;
    undefined field55_0x1a0;
    undefined field56_0x1a1;
    undefined field57_0x1a2;
    undefined field58_0x1a3;
    undefined field59_0x1a4;
    undefined field60_0x1a5;
    undefined field61_0x1a6;
    undefined field62_0x1a7;
    undefined field63_0x1a8;
    undefined field64_0x1a9;
    undefined field65_0x1aa;
    undefined field66_0x1ab;
    undefined field67_0x1ac;
    undefined field68_0x1ad;
    undefined field69_0x1ae;
    undefined field70_0x1af;
    undefined field71_0x1b0;
    undefined field72_0x1b1;
    undefined field73_0x1b2;
    undefined field74_0x1b3;
    undefined field75_0x1b4;
    undefined field76_0x1b5;
    undefined field77_0x1b6;
    undefined field78_0x1b7;
    undefined field79_0x1b8;
    undefined field80_0x1b9;
    undefined field81_0x1ba;
    undefined field82_0x1bb;
    undefined field83_0x1bc;
    undefined field84_0x1bd;
    undefined field85_0x1be;
    undefined field86_0x1bf;
    struct module_layout core_layout;
    struct module_layout init_layout;
    struct mod_arch_specific arch;
    ulong taints;
    uint num_bugs;
    undefined field92_0x294;
    undefined field93_0x295;
    undefined field94_0x296;
    undefined field95_0x297;
    struct list_head bug_list;
    struct bug_entry * bug_table;
    struct mod_kallsyms * kallsyms;
    struct mod_kallsyms core_kallsyms;
    struct module_sect_attrs * sect_attrs;
    struct module_notes_attrs * notes_attrs;
    char * args;
    void * percpu;
    uint percpu_size;
    uint num_tracepoints;
    tracepoint_ptr_t * tracepoints_ptrs;
    uint num_trace_bprintk_fmt;
    undefined field108_0x304;
    undefined field109_0x305;
    undefined field110_0x306;
    undefined field111_0x307;
    char * * trace_bprintk_fmt_start;
    struct trace_event_call * * trace_events;
    uint num_trace_events;
    undefined field115_0x31c;
    undefined field116_0x31d;
    undefined field117_0x31e;
    undefined field118_0x31f;
    struct trace_eval_map * * trace_evals;
    uint num_trace_evals;
    uint num_ftrace_callsites;
    ulong * ftrace_callsites;
    struct list_head source_list;
    struct list_head target_list;
    void (* exit)(void);
    struct atomic_t refcnt;
    undefined field127_0x364;
    undefined field128_0x365;
    undefined field129_0x366;
    undefined field130_0x367;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field135_0x388;
    undefined field136_0x389;
    undefined field137_0x38a;
    undefined field138_0x38b;
    undefined field139_0x38c;
    undefined field140_0x38d;
    undefined field141_0x38e;
    undefined field142_0x38f;
    undefined field143_0x390;
    undefined field144_0x391;
    undefined field145_0x392;
    undefined field146_0x393;
    undefined field147_0x394;
    undefined field148_0x395;
    undefined field149_0x396;
    undefined field150_0x397;
    undefined field151_0x398;
    undefined field152_0x399;
    undefined field153_0x39a;
    undefined field154_0x39b;
    undefined field155_0x39c;
    undefined field156_0x39d;
    undefined field157_0x39e;
    undefined field158_0x39f;
    undefined field159_0x3a0;
    undefined field160_0x3a1;
    undefined field161_0x3a2;
    undefined field162_0x3a3;
    undefined field163_0x3a4;
    undefined field164_0x3a5;
    undefined field165_0x3a6;
    undefined field166_0x3a7;
    undefined field167_0x3a8;
    undefined field168_0x3a9;
    undefined field169_0x3aa;
    undefined field170_0x3ab;
    undefined field171_0x3ac;
    undefined field172_0x3ad;
    undefined field173_0x3ae;
    undefined field174_0x3af;
    undefined field175_0x3b0;
    undefined field176_0x3b1;
    undefined field177_0x3b2;
    undefined field178_0x3b3;
    undefined field179_0x3b4;
    undefined field180_0x3b5;
    undefined field181_0x3b6;
    undefined field182_0x3b7;
    undefined field183_0x3b8;
    undefined field184_0x3b9;
    undefined field185_0x3ba;
    undefined field186_0x3bb;
    undefined field187_0x3bc;
    undefined field188_0x3bd;
    undefined field189_0x3be;
    undefined field190_0x3bf;
};

struct shrinker.conflict {
    ulong (* count_objects)(struct shrinker.conflict *, struct shrink_control *);
    ulong (* scan_objects)(struct shrinker.conflict *, struct shrink_control *);
    long batch;
    int seeks;
    uint flags;
    struct list_head list;
    atomic_long_t * nr_deferred;
};

struct posix_acl {
};

struct pid.conflict {
    struct atomic_t count;
    uint level;
    struct hlist_head tasks[4];
    wait_queue_head_t.conflict wait_pidfd;
    struct callback_head rcu;
    struct upid numbers[1];
};

struct dev_pm_info.conflict {
    pm_message_t power_state;
    uint can_wakeup:1;
    uint async_suspend:1;
    bool in_dpm_list:1;
    bool is_prepared:1;
    bool is_suspended:1;
    bool is_noirq_suspended:1;
    bool is_late_suspended:1;
    bool no_pm:1;
    bool early_init:1;
    bool direct_complete:1;
    undefined field11_0x6;
    undefined field12_0x7;
    u32 driver_flags;
    undefined field14_0xc;
    undefined field15_0xd;
    undefined field16_0xe;
    undefined field17_0xf;
    spinlock_t lock;
    undefined field19_0x14;
    undefined field20_0x15;
    undefined field21_0x16;
    undefined field22_0x17;
    undefined field23_0x18;
    undefined field24_0x19;
    undefined field25_0x1a;
    undefined field26_0x1b;
    undefined field27_0x1c;
    undefined field28_0x1d;
    undefined field29_0x1e;
    undefined field30_0x1f;
    undefined field31_0x20;
    undefined field32_0x21;
    undefined field33_0x22;
    undefined field34_0x23;
    undefined field35_0x24;
    undefined field36_0x25;
    undefined field37_0x26;
    undefined field38_0x27;
    struct list_head entry;
    struct completion.conflict completion;
    struct wakeup_source.conflict * wakeup;
    bool wakeup_path:1;
    bool syscore:1;
    bool no_pm_callbacks:1;
    uint must_resume:1;
    uint may_skip_resume:1;
    undefined field47_0x71;
    undefined field48_0x72;
    undefined field49_0x73;
    undefined field50_0x74;
    undefined field51_0x75;
    undefined field52_0x76;
    undefined field53_0x77;
    struct timer_list suspend_timer;
    ulong timer_expires;
    struct work_struct work;
    wait_queue_head_t.conflict wait_queue;
    struct wake_irq * wakeirq;
    struct atomic_t usage_count;
    struct atomic_t child_count;
    uint disable_depth:3;
    uint idle_notification:1;
    uint request_pending:1;
    uint deferred_resume:1;
    uint runtime_auto:1;
    bool ignore_children:1;
    uint no_callbacks:1;
    uint irq_safe:1;
    uint use_autosuspend:1;
    uint timer_autosuspends:1;
    uint memalloc_noio:1;
    undefined field72_0x122;
    undefined field73_0x123;
    uint links_count;
    enum rpm_request request;
    enum rpm_status runtime_status;
    int runtime_error;
    int autosuspend_delay;
    ulong last_busy;
    ulong active_jiffies;
    ulong suspended_jiffies;
    ulong accounting_timestamp;
    struct pm_subsys_data.conflict * subsys_data;
    void (* set_latency_tolerance)(struct device.conflict *, s32);
    struct dev_pm_qos * qos;
};

struct dma_coherent_mem {
};

struct anon_struct.conflict454e {
    u8 blocked;
    u8 need_qs;
    u8 exp_need_qs;
    u8 pad;
};

struct u64_stats_sync {
};

struct klist_node {
    void * n_klist;
    struct list_head n_node;
    struct kref n_ref;
    undefined field3_0x1c;
    undefined field4_0x1d;
    undefined field5_0x1e;
    undefined field6_0x1f;
};

struct kparam_array {
    uint max;
    uint elemsize;
    uint * num;
    struct kernel_param_ops * ops;
    void * elem;
};

struct kstatfs {
};

struct qc_info {
    int i_fieldmask;
    uint i_flags;
    uint i_spc_timelimit;
    uint i_ino_timelimit;
    uint i_rt_spc_timelimit;
    uint i_spc_warnlimit;
    uint i_ino_warnlimit;
    uint i_rt_spc_warnlimit;
};

struct elf64_shdr {
    Elf64_Word sh_name;
    Elf64_Word sh_type;
    Elf64_Xword sh_flags;
    Elf64_Addr sh_addr;
    Elf64_Off sh_offset;
    Elf64_Xword sh_size;
    Elf64_Word sh_link;
    Elf64_Word sh_info;
    Elf64_Xword sh_addralign;
    Elf64_Xword sh_entsize;
};

struct debug_info {
    int suspended_step;
    int bps_disabled;
    int wps_disabled;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    struct perf_event * hbp_break[16];
    struct perf_event * hbp_watch[16];
};

union anon_union.conflict7f49_for_f_u {
    struct llist_node fu_llist;
    struct callback_head fu_rcuhead;
};

struct anon_struct.conflictd87 {
    u8 wlocked;
    u8 __lstate[3];
};

union anon_union.conflictdb8_for_field_0 {
    struct atomic_t cnts;
    struct anon_struct.conflictd87 field_1;
};

struct qrwlock {
    union anon_union.conflictdb8_for_field_0 field_0;
    arch_spinlock_t wait_lock;
};

struct rwlock_t {
    arch_rwlock_t raw_lock;
};

struct fown_struct {
    struct rwlock_t lock;
    struct pid * pid;
    enum pid_type pid_type;
    struct kuid_t uid;
    struct kuid_t euid;
    int signum;
};

struct file {
    union anon_union.conflict7f49_for_f_u f_u;
    struct path f_path;
    struct inode * f_inode;
    struct file_operations * f_op;
    spinlock_t f_lock;
    enum rw_hint f_write_hint;
    atomic_long_t f_count;
    uint f_flags;
    fmode_t f_mode;
    struct mutex f_pos_lock;
    loff_t f_pos;
    struct fown_struct f_owner;
    struct cred * f_cred;
    struct file_ra_state f_ra;
    u64 f_version;
    void * f_security;
    void * private_data;
    struct list_head f_ep_links;
    struct list_head f_tfile_llink;
    struct address_space * f_mapping;
    errseq_t f_wb_err;
    undefined field21_0xfc;
    undefined field22_0xfd;
    undefined field23_0xfe;
    undefined field24_0xff;
};

struct pud_t {
    struct pgd_t pgd;
};

struct sem_undo_list {
};

struct sg_table {
    struct scatterlist * sgl;
    uint nents;
    uint orig_nents;
};

struct uprobe_task {
    enum uprobe_task_state state;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    union anon_union.conflict4f5a_for_field_1 field_1;
    struct uprobe * active_uprobe;
    ulong xol_vaddr;
    struct return_instance * return_instances;
    uint depth;
    undefined field10_0x3c;
    undefined field11_0x3d;
    undefined field12_0x3e;
    undefined field13_0x3f;
};

struct mem_dqinfo {
    struct quota_format_type.conflict * dqi_format;
    int dqi_fmt_id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head dqi_dirty_list;
    ulong dqi_flags;
    uint dqi_bgrace;
    uint dqi_igrace;
    qsize_t dqi_max_spc_limit;
    qsize_t dqi_max_ino_limit;
    void * dqi_priv;
};

struct quota_info.conflict {
    uint flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct rw_semaphore.conflict1 dqio_sem;
    struct inode.conflict * files[3];
    struct mem_dqinfo info[3];
    struct quota_format_ops.conflict * ops[3];
};

struct kernel_cap_struct {
    __u32 cap[2];
};

struct cred {
    struct atomic_t usage;
    struct kuid_t uid;
    struct kgid_t gid;
    struct kuid_t suid;
    struct kgid_t sgid;
    struct kuid_t euid;
    struct kgid_t egid;
    struct kuid_t fsuid;
    struct kgid_t fsgid;
    uint securebits;
    kernel_cap_t cap_inheritable;
    kernel_cap_t cap_permitted;
    kernel_cap_t cap_effective;
    kernel_cap_t cap_bset;
    kernel_cap_t cap_ambient;
    uchar jit_keyring;
    undefined field16_0x51;
    undefined field17_0x52;
    undefined field18_0x53;
    undefined field19_0x54;
    undefined field20_0x55;
    undefined field21_0x56;
    undefined field22_0x57;
    struct key * session_keyring;
    struct key * process_keyring;
    struct key * thread_keyring;
    struct key * request_key_auth;
    void * security;
    struct user_struct * user;
    struct user_namespace * user_ns;
    struct group_info * group_info;
    union anon_union.conflict96ab_for_field_24 field_24;
};

struct dquot_operations.conflict {
    int (* write_dquot)(struct dquot.conflict *);
    dquot.conflict * (* alloc_dquot)(struct super_block.conflict *, int);
    void (* destroy_dquot)(struct dquot.conflict *);
    int (* acquire_dquot)(struct dquot.conflict *);
    int (* release_dquot)(struct dquot.conflict *);
    int (* mark_dirty)(struct dquot.conflict *);
    int (* write_info)(struct super_block.conflict *, int);
    qsize_t * (* get_reserved_space)(struct inode.conflict *);
    int (* get_projid)(struct inode.conflict *, struct kprojid_t *);
    int (* get_inode_usage)(struct inode.conflict *, qsize_t *);
    int (* get_next_id)(struct super_block.conflict *, struct kqid *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct trace_eval_map {
};

struct return_instance {
    struct uprobe * uprobe;
    ulong func;
    ulong stack;
    ulong orig_ret_vaddr;
    bool chained;
    undefined field5_0x21;
    undefined field6_0x22;
    undefined field7_0x23;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
    struct return_instance * next;
};

struct block_device.conflict {
    dev_t bd_dev;
    int bd_openers;
    struct inode.conflict * bd_inode;
    struct super_block.conflict * bd_super;
    struct mutex.conflict bd_mutex;
    void * bd_claiming;
    void * bd_holder;
    int bd_holders;
    bool bd_write_holder;
    undefined field9_0x65;
    undefined field10_0x66;
    undefined field11_0x67;
    struct list_head bd_holder_disks;
    struct block_device.conflict * bd_contains;
    uint bd_block_size;
    u8 bd_partno;
    undefined field16_0x85;
    undefined field17_0x86;
    undefined field18_0x87;
    struct hd_struct * bd_part;
    uint bd_part_count;
    int bd_invalidated;
    struct gendisk * bd_disk;
    struct request_queue * bd_queue;
    struct backing_dev_info * bd_bdi;
    struct list_head bd_list;
    ulong bd_private;
    int bd_fsfreeze_count;
    undefined field28_0xcc;
    undefined field29_0xcd;
    undefined field30_0xce;
    undefined field31_0xcf;
    struct mutex.conflict bd_fsfreeze_mutex;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct dev_archdata {
    void * iommu;
    bool dma_coherent;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
};

struct sysfs_ops {
    ssize_t (* show)(struct kobject *, struct attribute *, char *);
    ssize_t (* store)(struct kobject *, struct attribute *, char *, size_t);
};

struct siginfo.conflict {
    int si_signo;
    int si_errno;
    int si_code;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union anon_union.conflict1bb71_for__sifields _sifields;
};

struct rwlock_t.conflict {
    arch_rwlock_t raw_lock;
    uint magic;
    uint owner_cpu;
    void * owner;
};

struct fasync_struct.conflict {
    struct rwlock_t.conflict fa_lock;
    int magic;
    int fa_fd;
    struct fasync_struct.conflict * fa_next;
    struct file.conflict * fa_file;
    struct callback_head fa_rcu;
};

struct file_lock_operations {
    void (* fl_copy_lock)(struct file_lock *, struct file_lock *);
    void (* fl_release_private)(struct file_lock *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct writeback_control {
    long nr_to_write;
    long pages_skipped;
    loff_t range_start;
    loff_t range_end;
    enum writeback_sync_modes sync_mode;
    uint for_kupdate:1;
    uint for_background:1;
    uint tagged_writepages:1;
    uint for_reclaim:1;
    uint range_cyclic:1;
    uint for_sync:1;
    undefined field11_0x25;
    undefined field12_0x26;
    undefined field13_0x27;
};

struct address_space_operations.conflict {
    int (* writepage)(struct page.conflict *, struct writeback_control *);
    int (* readpage)(struct file.conflict *, struct page.conflict *);
    int (* writepages)(struct address_space.conflict *, struct writeback_control *);
    int (* set_page_dirty)(struct page.conflict *);
    int (* readpages)(struct file.conflict *, struct address_space.conflict *, struct list_head *, uint);
    int (* write_begin)(struct file.conflict *, struct address_space.conflict *, loff_t, uint, uint, struct page.conflict * *, void * *);
    int (* write_end)(struct file.conflict *, struct address_space.conflict *, loff_t, uint, uint, struct page.conflict *, void *);
    sector_t (* bmap)(struct address_space.conflict *, sector_t);
    void (* invalidatepage)(struct page.conflict *, uint, uint);
    int (* releasepage)(struct page.conflict *, gfp_t);
    void (* freepage)(struct page.conflict *);
    ssize_t (* direct_IO)(struct kiocb.conflict *, struct iov_iter *);
    int (* migratepage)(struct address_space.conflict *, struct page.conflict *, struct page.conflict *, enum migrate_mode);
    bool (* isolate_page)(struct page.conflict *, isolate_mode_t);
    void (* putback_page)(struct page.conflict *);
    int (* launder_page)(struct page.conflict *);
    int (* is_partially_uptodate)(struct page.conflict *, ulong, ulong);
    void (* is_dirty_writeback)(struct page.conflict *, bool *, bool *);
    int (* error_remove_page)(struct address_space.conflict *, struct page.conflict *);
    int (* swap_activate)(struct swap_info_struct *, struct file.conflict *, sector_t *);
    void (* swap_deactivate)(struct file.conflict *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

union anon_union.conflictac6_for_field_2 {
    struct timespec * rmtp;
    struct compat_timespec * compat_rmtp;
};

struct module_kobject {
    struct kobject kobj;
    struct module * mod;
    struct kobject * drivers_dir;
    struct module_param_attrs * mp;
    struct completion * kobj_completion;
};

struct removed_region {
};

struct fwnode_handle {
    struct fwnode_handle * secondary;
    struct fwnode_operations * ops;
    struct device * dev;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

union rcu_special {
    struct anon_struct.conflict454e b;
    u32 s;
};

struct radix_tree_root.conflict {
    spinlock_t.conflict xa_lock;
    gfp_t gfp_mask;
    undefined field2_0x1c;
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
    struct radix_tree_node * rnode;
};

struct io_context.conflict {
    atomic_long_t refcount;
    struct atomic_t active_ref;
    struct atomic_t nr_tasks;
    spinlock_t.conflict lock;
    ushort ioprio;
    undefined field5_0x2a;
    undefined field6_0x2b;
    int nr_batch_requests;
    ulong last_waited;
    struct radix_tree_root.conflict icq_tree;
    struct io_cq.conflict * icq_hint;
    struct hlist_head icq_list;
    struct work_struct release_work;
};

struct sched_class {
};

struct module_param_attrs {
};

struct pid {
    struct atomic_t count;
    uint level;
    struct hlist_head tasks[4];
    wait_queue_head_t wait_pidfd;
    struct callback_head rcu;
    struct upid numbers[1];
};

struct kobj_uevent_env {
    char * argv[3];
    char * envp[64];
    int envp_idx;
    char buf[4096];
    int buflen;
};

struct swap_extent {
    struct list_head list;
    ulong start_page;
    ulong nr_pages;
    sector_t start_block;
};

struct plist_node {
    int prio;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_head prio_list;
    struct list_head node_list;
};

struct swap_info_struct {
    ulong flags;
    short prio;
    undefined field2_0xa;
    undefined field3_0xb;
    undefined field4_0xc;
    undefined field5_0xd;
    undefined field6_0xe;
    undefined field7_0xf;
    struct plist_node list;
    char type;
    undefined field10_0x39;
    undefined field11_0x3a;
    undefined field12_0x3b;
    uint max;
    uchar * swap_map;
    struct swap_cluster_info * cluster_info;
    struct swap_cluster_list free_clusters;
    uint lowest_bit;
    uint highest_bit;
    uint pages;
    uint inuse_pages;
    uint cluster_next;
    uint cluster_nr;
    struct percpu_cluster * percpu_cluster;
    struct swap_extent * curr_swap_extent;
    struct swap_extent first_swap_extent;
    struct block_device.conflict1 * bdev;
    struct file * swap_file;
    uint old_block_size;
    undefined field29_0xf4;
    undefined field30_0xf5;
    undefined field31_0xf6;
    undefined field32_0xf7;
    spinlock_t.conflict lock;
    spinlock_t.conflict cont_lock;
    struct work_struct discard_work;
    struct swap_cluster_list discard_clusters;
    uint write_pending;
    uint max_writes;
    struct plist_node avail_lists[0];
};

union anon_union.conflictd091_for_field_6 {
    void * arg;
    struct kparam_string * str;
    struct kparam_array * arr;
};

struct kernel_param.conflict {
    char * name;
    struct module.conflict * mod;
    struct kernel_param_ops * ops;
    u16 perm;
    s8 level;
    u8 flags;
    undefined field6_0x1c;
    undefined field7_0x1d;
    undefined field8_0x1e;
    undefined field9_0x1f;
    union anon_union.conflictd091_for_field_6 field_6;
};

struct net {
};

struct kset_uevent_ops.conflict {
    int (* filter)(struct kset.conflict *, struct kobject *);
    char * (* name)(struct kset.conflict *, struct kobject *);
    int (* uevent)(struct kset.conflict *, struct kobject *, struct kobj_uevent_env *);
};

struct path.conflict {
    struct vfsmount * mnt;
    struct dentry.conflict * dentry;
};

struct anon_vma_for_anon_vma {
};

struct file_system_type.conflict { // Missing member i_lock_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member i_mutex_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member i_mutex_dir_key : lock_class_key at offset 0x48 [conflicting member at same offset]
Missing member android_kabi_reserved1 : u64 at offset 0x48 [conflict with s_writers_key]
    char * name;
    int fs_flags;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    dentry.conflict * (* mount)(struct file_system_type.conflict *, int, char *, void *);
    dentry.conflict * (* mount2)(struct vfsmount *, struct file_system_type.conflict *, int, char *, void *);
    void * (* alloc_mnt_data)(void);
    void (* kill_sb)(struct super_block.conflict *);
    struct module * owner;
    struct file_system_type.conflict * next;
    struct hlist_head fs_supers;
    struct lock_class_key s_vfs_rename_key;
    struct lock_class_key s_umount_key;
    struct lock_class_key s_lock_key;
    struct lock_class_key s_writers_key[3];
    undefined field17_0x4b;
    undefined field18_0x4c;
    undefined field19_0x4d;
    undefined field20_0x4e;
    undefined field21_0x4f;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct dev_pm_domain {
    struct dev_pm_ops ops;
    void (* detach)(struct device *, bool);
    int (* activate)(struct device *);
    void (* sync)(struct device *);
    void (* dismiss)(struct device *);
};

struct fown_struct.conflict {
    struct rwlock_t.conflict lock;
    struct pid.conflict * pid;
    enum pid_type pid_type;
    struct kuid_t uid;
    struct kuid_t euid;
    int signum;
};

struct vfsmount {
};

struct iommu_fwspec {
};

struct tlbflush_unmap_batch {
};

struct vmacache {
    u64 seqnum;
    struct vm_area_struct * vmas[4];
};

struct sysv_sem {
    struct sem_undo_list * undo_list;
};

struct seqcount {
    uint sequence;
};

struct cpu_context {
    ulong x19;
    ulong x20;
    ulong x21;
    ulong x22;
    ulong x23;
    ulong x24;
    ulong x25;
    ulong x26;
    ulong x27;
    ulong x28;
    ulong fp;
    ulong sp;
    ulong pc;
};

struct thread_struct {
    struct cpu_context cpu_context;
    undefined field1_0x68;
    undefined field2_0x69;
    undefined field3_0x6a;
    undefined field4_0x6b;
    undefined field5_0x6c;
    undefined field6_0x6d;
    undefined field7_0x6e;
    undefined field8_0x6f;
    struct anon_struct.conflict144d_for_uw uw;
    uint fpsimd_cpu;
    undefined field11_0x294;
    undefined field12_0x295;
    undefined field13_0x296;
    undefined field14_0x297;
    void * sve_state;
    uint sve_vl;
    uint sve_vl_onexec;
    ulong fault_address;
    ulong fault_code;
    struct debug_info debug;
    undefined field21_0x3c8;
    undefined field22_0x3c9;
    undefined field23_0x3ca;
    undefined field24_0x3cb;
    undefined field25_0x3cc;
    undefined field26_0x3cd;
    undefined field27_0x3ce;
    undefined field28_0x3cf;
};

struct sysv_shm {
    struct list_head shm_clist;
};

struct thread_info.conflict {
    ulong flags;
    mm_segment_t addr_limit;
    int preempt_count;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

struct task_rss_stat {
    int events;
    int count[5];
};

struct task_io_accounting.conflict {
};

struct anon_struct.conflicta6f {
    u32 * uaddr;
    u32 val;
    u32 flags;
    u32 bitset;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
    u64 time;
    u32 * uaddr2;
};

struct anon_struct.conflictb49 {
    struct pollfd * ufds;
    int nfds;
    int has_timeout;
    ulong tv_sec;
    ulong tv_nsec;
};

struct anon_struct.conflictb16 {
    clockid_t clockid;
    enum timespec_type type;
    union anon_union.conflictac6_for_field_2 field_2;
    u64 expires;
};

union anon_union.conflictb99_for_field_1 {
    struct anon_struct.conflicta6f futex;
    struct anon_struct.conflictb16 nanosleep;
    struct anon_struct.conflictb49 poll;
};

struct restart_block {
    long (* fn)(struct restart_block *);
    union anon_union.conflictb99_for_field_1 field_1;
};

struct nodemask_t {
    ulong bits[1];
};

struct seccomp {
    int mode;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct seccomp_filter * filter;
};

struct wake_q_node {
    struct wake_q_node * next;
};

union anon_union.conflict462a_for_field_184 {
    uint futex_state;
    struct anon_struct.conflict460e field_1;
    union anon_union.conflict45e6 field_2;
};

struct task_struct.conflict1 {
    struct thread_info.conflict thread_info;
    long state;
    void * stack;
    struct atomic_t usage;
    uint flags;
    uint ptrace;
    undefined field6_0x34;
    undefined field7_0x35;
    undefined field8_0x36;
    undefined field9_0x37;
    struct llist_node wake_entry;
    int on_cpu;
    uint cpu;
    uint wakee_flips;
    undefined field14_0x4c;
    undefined field15_0x4d;
    undefined field16_0x4e;
    undefined field17_0x4f;
    ulong wakee_flip_decay_ts;
    struct task_struct.conflict1 * last_wakee;
    int recent_used_cpu;
    int wake_cpu;
    int on_rq;
    int prio;
    int static_prio;
    int normal_prio;
    uint rt_priority;
    undefined field27_0x7c;
    undefined field28_0x7d;
    undefined field29_0x7e;
    undefined field30_0x7f;
    struct sched_class * sched_class;
    undefined field32_0x88;
    undefined field33_0x89;
    undefined field34_0x8a;
    undefined field35_0x8b;
    undefined field36_0x8c;
    undefined field37_0x8d;
    undefined field38_0x8e;
    undefined field39_0x8f;
    undefined field40_0x90;
    undefined field41_0x91;
    undefined field42_0x92;
    undefined field43_0x93;
    undefined field44_0x94;
    undefined field45_0x95;
    undefined field46_0x96;
    undefined field47_0x97;
    undefined field48_0x98;
    undefined field49_0x99;
    undefined field50_0x9a;
    undefined field51_0x9b;
    undefined field52_0x9c;
    undefined field53_0x9d;
    undefined field54_0x9e;
    undefined field55_0x9f;
    undefined field56_0xa0;
    undefined field57_0xa1;
    undefined field58_0xa2;
    undefined field59_0xa3;
    undefined field60_0xa4;
    undefined field61_0xa5;
    undefined field62_0xa6;
    undefined field63_0xa7;
    undefined field64_0xa8;
    undefined field65_0xa9;
    undefined field66_0xaa;
    undefined field67_0xab;
    undefined field68_0xac;
    undefined field69_0xad;
    undefined field70_0xae;
    undefined field71_0xaf;
    undefined field72_0xb0;
    undefined field73_0xb1;
    undefined field74_0xb2;
    undefined field75_0xb3;
    undefined field76_0xb4;
    undefined field77_0xb5;
    undefined field78_0xb6;
    undefined field79_0xb7;
    undefined field80_0xb8;
    undefined field81_0xb9;
    undefined field82_0xba;
    undefined field83_0xbb;
    undefined field84_0xbc;
    undefined field85_0xbd;
    undefined field86_0xbe;
    undefined field87_0xbf;
    struct sched_entity se;
    struct sched_rt_entity rt;
    u64 last_sleep_ts;
    int boost;
    undefined field92_0x31c;
    undefined field93_0x31d;
    undefined field94_0x31e;
    undefined field95_0x31f;
    u64 boost_period;
    u64 boost_expires;
    struct task_group * sched_task_group;
    struct sched_dl_entity dl;
    uint btrace_seq;
    uint policy;
    int nr_cpus_allowed;
    undefined field103_0x42c;
    undefined field104_0x42d;
    undefined field105_0x42e;
    undefined field106_0x42f;
    cpumask_t cpus_allowed;
    cpumask_t cpus_requested;
    struct sched_info sched_info;
    struct list_head tasks;
    struct plist_node pushable_tasks;
    struct rb_node pushable_dl_tasks;
    struct mm_struct.conflict * mm;
    struct mm_struct.conflict * active_mm;
    struct vmacache vmacache;
    struct task_rss_stat rss_stat;
    int exit_state;
    int exit_code;
    int exit_signal;
    int pdeath_signal;
    ulong jobctl;
    uint personality;
    uint sched_reset_on_fork:1;
    uint sched_contributes_to_load:1;
    uint sched_migrated:1;
    uint sched_remote_wakeup:1;
    undefined field127_0x51d;
    undefined field128_0x51e;
    undefined field129_0x51f;
    uint in_execve:1;
    uint in_iowait:1;
    uint no_cgroup_migration:1;
    undefined field133_0x521;
    undefined field134_0x522;
    undefined field135_0x523;
    undefined field136_0x524;
    undefined field137_0x525;
    undefined field138_0x526;
    undefined field139_0x527;
    ulong atomic_flags;
    struct restart_block restart_block;
    pid_t pid;
    pid_t tgid;
    ulong stack_canary;
    struct task_struct.conflict1 * real_parent;
    struct task_struct.conflict1 * parent;
    struct list_head children;
    struct list_head sibling;
    struct task_struct.conflict1 * group_leader;
    struct list_head ptraced;
    struct list_head ptrace_entry;
    struct pid.conflict * thread_pid;
    struct hlist_node pid_links[4];
    struct list_head thread_group;
    struct list_head thread_node;
    struct completion.conflict * vfork_done;
    int * set_child_tid;
    int * clear_child_tid;
    u64 utime;
    u64 stime;
    u64 gtime;
    struct prev_cputime.conflict prev_cputime;
    ulong nvcsw;
    ulong nivcsw;
    u64 start_time;
    u64 real_start_time;
    ulong min_flt;
    ulong maj_flt;
    struct task_cputime cputime_expires;
    struct list_head cpu_timers[3];
    struct cred * ptracer_cred;
    struct cred * real_cred;
    struct cred * cred;
    char comm[16];
    struct nameidata * nameidata;
    struct sysv_sem sysvsem;
    struct sysv_shm sysvshm;
    struct fs_struct * fs;
    struct files_struct * files;
    struct nsproxy * nsproxy;
    struct signal_struct * signal;
    struct sighand_struct * sighand;
    struct sigset_t blocked;
    struct sigset_t real_blocked;
    struct sigset_t saved_sigmask;
    struct sigpending pending;
    ulong sas_ss_sp;
    size_t sas_ss_size;
    uint sas_ss_flags;
    undefined field190_0x7b4;
    undefined field191_0x7b5;
    undefined field192_0x7b6;
    undefined field193_0x7b7;
    struct callback_head * task_works;
    struct audit_context * audit_context;
    struct seccomp seccomp;
    u64 parent_exec_id;
    u64 self_exec_id;
    spinlock_t.conflict alloc_lock;
    raw_spinlock_t.conflict pi_lock;
    struct wake_q_node wake_q;
    struct rb_root_cached pi_waiters;
    struct task_struct.conflict1 * pi_top_task;
    struct rt_mutex_waiter * pi_blocked_on;
    void * journal_info;
    struct bio_list * bio_list;
    struct blk_plug * plug;
    struct reclaim_state * reclaim_state;
    struct backing_dev_info * backing_dev_info;
    struct io_context.conflict * io_context;
    ulong ptrace_message;
    siginfo_t.conflict * last_siginfo;
    struct task_io_accounting.conflict ioac;
    struct nodemask_t mems_allowed;
    seqcount_t mems_allowed_seq;
    int cpuset_mem_spread_rotor;
    int cpuset_slab_spread_rotor;
    undefined field218_0x894;
    undefined field219_0x895;
    undefined field220_0x896;
    undefined field221_0x897;
    struct css_set * cgroups;
    struct list_head cg_list;
    struct robust_list_head * robust_list;
    struct compat_robust_list_head * compat_robust_list;
    struct list_head pi_state_list;
    struct futex_pi_state * pi_state_cache;
    struct perf_event_context * perf_event_ctxp[2];
    struct mutex.conflict perf_event_mutex;
    struct list_head perf_event_list;
    struct rseq * rseq;
    u32 rseq_len;
    u32 rseq_sig;
    ulong rseq_event_mask;
    struct tlbflush_unmap_batch tlb_ubc;
    struct callback_head rcu;
    struct pipe_inode_info * splice_pipe;
    struct page_frag task_frag;
    int nr_dirtied;
    int nr_dirtied_pause;
    ulong dirty_paused_when;
    u64 timer_slack_ns;
    u64 default_timer_slack_ns;
    int curr_ret_stack;
    int curr_ret_depth;
    struct ftrace_ret_stack * ret_stack;
    ulonglong ftrace_timestamp;
    struct atomic_t trace_overrun;
    struct atomic_t tracing_graph_pause;
    ulong trace;
    ulong trace_recursion;
    struct uprobe_task * utask;
    int pagefault_disabled;
    undefined field254_0x9cc;
    undefined field255_0x9cd;
    undefined field256_0x9ce;
    undefined field257_0x9cf;
    struct task_struct.conflict1 * oom_reaper_list;
    struct vm_struct * stack_vm_area;
    struct atomic_t stack_refcount;
    undefined field261_0x9e4;
    undefined field262_0x9e5;
    undefined field263_0x9e6;
    undefined field264_0x9e7;
    union anon_union.conflict45eb_for_field_183 field_163;
    union anon_union.conflict462a_for_field_184 field_164;
    struct mutex.conflict futex_exit_mutex;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
    struct thread_struct thread;
    undefined field271_0xe10;
    undefined field272_0xe11;
    undefined field273_0xe12;
    undefined field274_0xe13;
    undefined field275_0xe14;
    undefined field276_0xe15;
    undefined field277_0xe16;
    undefined field278_0xe17;
    undefined field279_0xe18;
    undefined field280_0xe19;
    undefined field281_0xe1a;
    undefined field282_0xe1b;
    undefined field283_0xe1c;
    undefined field284_0xe1d;
    undefined field285_0xe1e;
    undefined field286_0xe1f;
    undefined field287_0xe20;
    undefined field288_0xe21;
    undefined field289_0xe22;
    undefined field290_0xe23;
    undefined field291_0xe24;
    undefined field292_0xe25;
    undefined field293_0xe26;
    undefined field294_0xe27;
    undefined field295_0xe28;
    undefined field296_0xe29;
    undefined field297_0xe2a;
    undefined field298_0xe2b;
    undefined field299_0xe2c;
    undefined field300_0xe2d;
    undefined field301_0xe2e;
    undefined field302_0xe2f;
    undefined field303_0xe30;
    undefined field304_0xe31;
    undefined field305_0xe32;
    undefined field306_0xe33;
    undefined field307_0xe34;
    undefined field308_0xe35;
    undefined field309_0xe36;
    undefined field310_0xe37;
    undefined field311_0xe38;
    undefined field312_0xe39;
    undefined field313_0xe3a;
    undefined field314_0xe3b;
    undefined field315_0xe3c;
    undefined field316_0xe3d;
    undefined field317_0xe3e;
    undefined field318_0xe3f;
};

struct ratelimit_state {
    raw_spinlock_t lock;
    int interval;
    int burst;
    int printed;
    int missed;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    ulong begin;
    ulong flags;
};

struct user_struct {
    refcount_t __count;
    struct atomic_t processes;
    struct atomic_t sigpending;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    atomic_long_t epoll_watches;
    ulong locked_shm;
    ulong unix_inflight;
    atomic_long_t pipe_bufs;
    struct key * uid_keyring;
    struct key * session_keyring;
    struct hlist_node uidhash_node;
    struct kuid_t uid;
    undefined field15_0x54;
    undefined field16_0x55;
    undefined field17_0x56;
    undefined field18_0x57;
    atomic_long_t locked_vm;
    struct ratelimit_state ratelimit;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct rcuwait {
    struct task_struct * task;
};

struct irq_chip {
    struct device * parent_device;
    char * name;
    uint (* irq_startup)(struct irq_data *);
    void (* irq_shutdown)(struct irq_data *);
    void (* irq_enable)(struct irq_data *);
    void (* irq_disable)(struct irq_data *);
    void (* irq_ack)(struct irq_data *);
    void (* irq_mask)(struct irq_data *);
    void (* irq_mask_ack)(struct irq_data *);
    void (* irq_unmask)(struct irq_data *);
    void (* irq_eoi)(struct irq_data *);
    int (* irq_set_affinity)(struct irq_data *, struct cpumask *, bool);
    int (* irq_retrigger)(struct irq_data *);
    int (* irq_set_type)(struct irq_data *, uint);
    int (* irq_set_wake)(struct irq_data *, uint);
    void (* irq_bus_lock)(struct irq_data *);
    void (* irq_bus_sync_unlock)(struct irq_data *);
    void (* irq_cpu_online)(struct irq_data *);
    void (* irq_cpu_offline)(struct irq_data *);
    void (* irq_suspend)(struct irq_data *);
    void (* irq_resume)(struct irq_data *);
    void (* irq_pm_shutdown)(struct irq_data *);
    void (* irq_calc_mask)(struct irq_data *);
    void (* irq_print_chip)(struct irq_data *, struct seq_file *);
    int (* irq_request_resources)(struct irq_data *);
    void (* irq_release_resources)(struct irq_data *);
    void (* irq_compose_msi_msg)(struct irq_data *, struct msi_msg *);
    void (* irq_write_msi_msg)(struct irq_data *, struct msi_msg *);
    int (* irq_get_irqchip_state)(struct irq_data *, enum irqchip_irq_state, bool *);
    int (* irq_set_irqchip_state)(struct irq_data *, enum irqchip_irq_state, bool);
    int (* irq_set_vcpu_affinity)(struct irq_data *, void *);
    void (* ipi_send_single)(struct irq_data *, uint);
    void (* ipi_send_mask)(struct irq_data *, struct cpumask *);
    ulong flags;
};

struct irq_chip_regs {
    ulong enable;
    ulong disable;
    ulong mask;
    ulong ack;
    ulong eoi;
    ulong type;
    ulong polarity;
};

struct irq_chip_type {
    struct irq_chip chip;
    struct irq_chip_regs regs;
    void (* handler)(struct irq_desc *);
    u32 type;
    u32 mask_cache_priv;
    u32 * mask_cache;
};

struct pollfd {
};

struct pgprot_t {
    pteval_t pgprot;
};

struct anon_struct.conflict55c7 {
    struct rb_node rb;
    ulong rb_subtree_last;
};

union anon_union.conflict55ea_for_field_9 {
    struct anon_struct.conflict55c7 shared;
    char * anon_name;
};

struct vm_area_struct {
    ulong vm_start;
    ulong vm_end;
    struct vm_area_struct * vm_next;
    struct vm_area_struct * vm_prev;
    struct rb_node vm_rb;
    ulong rb_subtree_gap;
    struct mm_struct.conflict * vm_mm;
    struct pgprot_t vm_page_prot;
    ulong vm_flags;
    union anon_union.conflict55ea_for_field_9 field_9;
    struct list_head anon_vma_chain;
    struct anon_vma_for_anon_vma * anon_vma;
    struct vm_operations_struct * vm_ops;
    ulong vm_pgoff;
    struct file * vm_file;
    void * vm_private_data;
    atomic_long_t swap_readahead_info;
    struct vm_userfaultfd_ctx vm_userfaultfd_ctx;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct cgroup_rstat_cpu {
    struct u64_stats_sync bsync;
    struct cgroup_base_stat bstat;
    struct cgroup_base_stat last_bstat;
    struct cgroup * updated_children;
    struct cgroup * updated_next;
};

union anon_union.conflict9539_for_field_6 {
    time64_t expiry;
    time64_t revoked_at;
};

struct rcu_sync {
    int gp_state;
    int gp_count;
    wait_queue_head_t gp_wait;
    int cb_state;
    undefined field4_0x24;
    undefined field5_0x25;
    undefined field6_0x26;
    undefined field7_0x27;
    struct callback_head cb_head;
    enum rcu_sync_type gp_type;
    undefined field10_0x3c;
    undefined field11_0x3d;
    undefined field12_0x3e;
    undefined field13_0x3f;
};

struct dev_links_info {
    struct list_head suppliers;
    struct list_head consumers;
    struct list_head needs_suppliers;
    struct list_head defer_hook;
    bool need_for_probe;
    undefined field5_0x41;
    undefined field6_0x42;
    undefined field7_0x43;
    enum dl_dev_state status;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct device.conflict {
    struct device.conflict * parent;
    struct device_private * p;
    struct kobject kobj;
    char * init_name;
    struct device_type.conflict * type;
    struct mutex.conflict mutex;
    struct bus_type.conflict * bus;
    struct device_driver * driver;
    void * platform_data;
    void * driver_data;
    struct dev_links_info links;
    struct dev_pm_info.conflict power;
    struct dev_pm_domain * pm_domain;
    struct irq_domain * msi_domain;
    struct dev_pin_info * pins;
    struct list_head msi_list;
    struct dma_map_ops * dma_ops;
    u64 * dma_mask;
    u64 coherent_dma_mask;
    u64 bus_dma_mask;
    ulong dma_pfn_offset;
    struct device_dma_parameters * dma_parms;
    struct list_head dma_pools;
    struct dma_coherent_mem * dma_mem;
    struct cma * cma_area;
    struct removed_region * removed_mem;
    struct dev_archdata archdata;
    struct device_node * of_node;
    struct fwnode_handle * fwnode;
    dev_t devt;
    u32 id;
    spinlock_t devres_lock;
    undefined field32_0x35c;
    undefined field33_0x35d;
    undefined field34_0x35e;
    undefined field35_0x35f;
    undefined field36_0x360;
    undefined field37_0x361;
    undefined field38_0x362;
    undefined field39_0x363;
    undefined field40_0x364;
    undefined field41_0x365;
    undefined field42_0x366;
    undefined field43_0x367;
    undefined field44_0x368;
    undefined field45_0x369;
    undefined field46_0x36a;
    undefined field47_0x36b;
    undefined field48_0x36c;
    undefined field49_0x36d;
    undefined field50_0x36e;
    undefined field51_0x36f;
    struct list_head devres_head;
    struct klist_node knode_class;
    struct class.conflict * class;
    struct attribute_group * * groups;
    void (* release)(struct device.conflict *);
    struct iommu_group * iommu_group;
    struct iommu_fwspec * iommu_fwspec;
    bool offline_disabled:1;
    bool offline:1;
    bool of_node_reused:1;
    bool state_synced:1;
    undefined field63_0x3c9;
    undefined field64_0x3ca;
    undefined field65_0x3cb;
    undefined field66_0x3cc;
    undefined field67_0x3cd;
    undefined field68_0x3ce;
    undefined field69_0x3cf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    u64 android_kabi_reserved5;
    u64 android_kabi_reserved6;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
};

struct super_operations {
    inode * (* alloc_inode)(struct super_block *);
    void (* destroy_inode)(struct inode *);
    void (* dirty_inode)(struct inode *, int);
    int (* write_inode)(struct inode *, struct writeback_control *);
    int (* drop_inode)(struct inode *);
    void (* evict_inode)(struct inode *);
    void (* put_super)(struct super_block *);
    int (* sync_fs)(struct super_block *, int);
    int (* freeze_super)(struct super_block *);
    int (* freeze_fs)(struct super_block *);
    int (* thaw_super)(struct super_block *);
    int (* unfreeze_fs)(struct super_block *);
    int (* statfs)(struct dentry *, struct kstatfs *);
    int (* remount_fs)(struct super_block *, int *, char *);
    int (* remount_fs2)(struct vfsmount *, struct super_block *, int *, char *);
    void * (* clone_mnt_data)(void *);
    void (* copy_mnt_data)(void *, void *);
    void (* umount_begin)(struct super_block *);
    void (* umount_end)(struct super_block *, int);
    int (* show_options)(struct seq_file *, struct dentry *);
    int (* show_options2)(struct vfsmount *, struct seq_file *, struct dentry *);
    int (* show_devname)(struct seq_file *, struct dentry *);
    int (* show_path)(struct seq_file *, struct dentry *);
    int (* show_stats)(struct seq_file *, struct dentry *);
    ssize_t (* quota_read)(struct super_block *, int, char *, size_t, loff_t);
    ssize_t (* quota_write)(struct super_block *, int, char *, size_t, loff_t);
    dquot * * (* get_dquots)(struct inode *);
    int (* bdev_try_to_free_page)(struct super_block *, struct page *, gfp_t);
    long (* nr_cached_objects)(struct super_block *, struct shrink_control *);
    long (* free_cached_objects)(struct super_block *, struct shrink_control *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct dma_map_ops {
    void * (* alloc)(struct device *, size_t, dma_addr_t *, gfp_t, ulong);
    void (* free)(struct device *, size_t, void *, dma_addr_t, ulong);
    int (* mmap)(struct device *, struct vm_area_struct *, void *, dma_addr_t, size_t, ulong);
    int (* get_sgtable)(struct device *, struct sg_table *, void *, dma_addr_t, size_t, ulong);
    dma_addr_t (* map_page)(struct device *, struct page.conflict *, ulong, size_t, enum dma_data_direction, ulong);
    void (* unmap_page)(struct device *, dma_addr_t, size_t, enum dma_data_direction, ulong);
    int (* map_sg)(struct device *, struct scatterlist *, int, enum dma_data_direction, ulong);
    void (* unmap_sg)(struct device *, struct scatterlist *, int, enum dma_data_direction, ulong);
    dma_addr_t (* map_resource)(struct device *, phys_addr_t, size_t, enum dma_data_direction, ulong);
    void (* unmap_resource)(struct device *, dma_addr_t, size_t, enum dma_data_direction, ulong);
    void (* sync_single_for_cpu)(struct device *, dma_addr_t, size_t, enum dma_data_direction);
    void (* sync_single_for_device)(struct device *, dma_addr_t, size_t, enum dma_data_direction);
    void (* sync_sg_for_cpu)(struct device *, struct scatterlist *, int, enum dma_data_direction);
    void (* sync_sg_for_device)(struct device *, struct scatterlist *, int, enum dma_data_direction);
    void (* cache_sync)(struct device *, void *, size_t, enum dma_data_direction);
    int (* mapping_error)(struct device *, dma_addr_t);
    int (* dma_supported)(struct device *, u64);
    int (* set_dma_mask)(struct device *, u64);
    void * (* remap)(struct device *, void *, dma_addr_t, size_t, ulong);
    void (* unremap)(struct device *, void *, size_t);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kioctx_table {
};

struct nameidata {
};

struct kmem_cache {
};

struct group_info {
    struct atomic_t usage;
    int ngroups;
    struct kgid_t gid[0];
};

struct keyring_index_key {
    struct key_type * type;
    char * description;
    size_t desc_len;
};

struct address_space_operations {
    int (* writepage)(struct page *, struct writeback_control *);
    int (* readpage)(struct file *, struct page *);
    int (* writepages)(struct address_space *, struct writeback_control *);
    int (* set_page_dirty)(struct page *);
    int (* readpages)(struct file *, struct address_space *, struct list_head *, uint);
    int (* write_begin)(struct file *, struct address_space *, loff_t, uint, uint, struct page * *, void * *);
    int (* write_end)(struct file *, struct address_space *, loff_t, uint, uint, struct page *, void *);
    sector_t (* bmap)(struct address_space *, sector_t);
    void (* invalidatepage)(struct page *, uint, uint);
    int (* releasepage)(struct page *, gfp_t);
    void (* freepage)(struct page *);
    ssize_t (* direct_IO)(struct kiocb *, struct iov_iter *);
    int (* migratepage)(struct address_space *, struct page *, struct page *, enum migrate_mode);
    bool (* isolate_page)(struct page *, isolate_mode_t);
    void (* putback_page)(struct page *);
    int (* launder_page)(struct page *);
    int (* is_partially_uptodate)(struct page *, ulong, ulong);
    void (* is_dirty_writeback)(struct page *, bool *, bool *);
    int (* error_remove_page)(struct address_space *, struct page *);
    int (* swap_activate)(struct swap_info_struct *, struct file *, sector_t *);
    void (* swap_deactivate)(struct file *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct qc_dqblk {
    int d_fieldmask;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    u64 d_spc_hardlimit;
    u64 d_spc_softlimit;
    u64 d_ino_hardlimit;
    u64 d_ino_softlimit;
    u64 d_space;
    u64 d_ino_count;
    s64 d_ino_timer;
    s64 d_spc_timer;
    int d_ino_warns;
    int d_spc_warns;
    u64 d_rt_spc_hardlimit;
    u64 d_rt_spc_softlimit;
    u64 d_rt_space;
    s64 d_rt_spc_timer;
    int d_rt_spc_warns;
    undefined field20_0x74;
    undefined field21_0x75;
    undefined field22_0x76;
    undefined field23_0x77;
};

union anon_union.conflict545e_for_field_2 {
    struct atomic_t _mapcount;
    uint page_type;
    uint active;
    int units;
};

struct page.conflict {
    ulong flags;
    union anon_union.conflict18914_for_field_1 field_1;
    union anon_union.conflict545e_for_field_2 field_2;
    struct atomic_t _refcount;
    undefined field4_0x38;
    undefined field5_0x39;
    undefined field6_0x3a;
    undefined field7_0x3b;
    undefined field8_0x3c;
    undefined field9_0x3d;
    undefined field10_0x3e;
    undefined field11_0x3f;
};

struct fwnode_operations {
    fwnode_handle * (* get)(struct fwnode_handle *);
    void (* put)(struct fwnode_handle *);
    bool (* device_is_available)(struct fwnode_handle *);
    void * (* device_get_match_data)(struct fwnode_handle *, struct device *);
    bool (* property_present)(struct fwnode_handle *, char *);
    int (* property_read_int_array)(struct fwnode_handle *, char *, uint, void *, size_t);
    int (* property_read_string_array)(struct fwnode_handle *, char *, char * *, size_t);
    fwnode_handle * (* get_parent)(struct fwnode_handle *);
    fwnode_handle * (* get_next_child_node)(struct fwnode_handle *, struct fwnode_handle *);
    fwnode_handle * (* get_named_child_node)(struct fwnode_handle *, char *);
    int (* get_reference_args)(struct fwnode_handle *, char *, char *, uint, uint, struct fwnode_reference_args *);
    fwnode_handle * (* graph_get_next_endpoint)(struct fwnode_handle *, struct fwnode_handle *);
    fwnode_handle * (* graph_get_remote_endpoint)(struct fwnode_handle *);
    fwnode_handle * (* graph_get_port_parent)(struct fwnode_handle *);
    int (* graph_parse_endpoint)(struct fwnode_handle *, struct fwnode_endpoint *);
    int (* add_links)(struct fwnode_handle *, struct device *);
};

struct device_dma_parameters {
    uint max_segment_size;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    ulong segment_boundary_mask;
};

struct kernfs_syscall_ops {
    int (* remount_fs)(struct kernfs_root *, int *, char *);
    int (* show_options)(struct seq_file *, struct kernfs_root *);
    int (* mkdir)(struct kernfs_node *, char *, umode_t);
    int (* rmdir)(struct kernfs_node *);
    int (* rename)(struct kernfs_node *, struct kernfs_node *, char *);
    int (* show_path)(struct seq_file *, struct kernfs_node *, struct kernfs_root *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct quotactl_ops.conflict {
    int (* quota_on)(struct super_block.conflict *, int, int, struct path.conflict *);
    int (* quota_off)(struct super_block.conflict *, int);
    int (* quota_enable)(struct super_block.conflict *, uint);
    int (* quota_disable)(struct super_block.conflict *, uint);
    int (* quota_sync)(struct super_block.conflict *, int);
    int (* set_info)(struct super_block.conflict *, int, struct qc_info *);
    int (* get_dqblk)(struct super_block.conflict *, struct kqid, struct qc_dqblk *);
    int (* get_nextdqblk)(struct super_block.conflict *, struct kqid *, struct qc_dqblk *);
    int (* set_dqblk)(struct super_block.conflict *, struct kqid, struct qc_dqblk *);
    int (* get_state)(struct super_block.conflict *, struct qc_state *);
    int (* rm_xquota)(struct super_block.conflict *, uint);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct kernel_symbol {
    int value_offset;
    int name_offset;
};

struct perf_event_context {
};

struct hlist_bl_head {
    struct hlist_bl_node * first;
};

struct nfs_lock_info {
    u32 state;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct nlm_lockowner * owner;
    struct list_head list;
};

struct fsverity_info {
};

struct dentry_operations {
    int (* d_revalidate)(struct dentry *, uint);
    int (* d_weak_revalidate)(struct dentry *, uint);
    int (* d_hash)(struct dentry *, struct qstr *);
    int (* d_compare)(struct dentry *, uint, char *, struct qstr *);
    int (* d_delete)(struct dentry *);
    int (* d_init)(struct dentry *);
    void (* d_release)(struct dentry *);
    void (* d_prune)(struct dentry *);
    void (* d_iput)(struct dentry *, struct inode *);
    char * (* d_dname)(struct dentry *, char *, int);
    vfsmount * (* d_automount)(struct path *);
    int (* d_manage)(struct path *, bool);
    dentry * (* d_real)(struct dentry *, struct inode *);
    union anon_union.conflict2152_for_field_13 field_13;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field17_0x88;
    undefined field18_0x89;
    undefined field19_0x8a;
    undefined field20_0x8b;
    undefined field21_0x8c;
    undefined field22_0x8d;
    undefined field23_0x8e;
    undefined field24_0x8f;
    undefined field25_0x90;
    undefined field26_0x91;
    undefined field27_0x92;
    undefined field28_0x93;
    undefined field29_0x94;
    undefined field30_0x95;
    undefined field31_0x96;
    undefined field32_0x97;
    undefined field33_0x98;
    undefined field34_0x99;
    undefined field35_0x9a;
    undefined field36_0x9b;
    undefined field37_0x9c;
    undefined field38_0x9d;
    undefined field39_0x9e;
    undefined field40_0x9f;
    undefined field41_0xa0;
    undefined field42_0xa1;
    undefined field43_0xa2;
    undefined field44_0xa3;
    undefined field45_0xa4;
    undefined field46_0xa5;
    undefined field47_0xa6;
    undefined field48_0xa7;
    undefined field49_0xa8;
    undefined field50_0xa9;
    undefined field51_0xaa;
    undefined field52_0xab;
    undefined field53_0xac;
    undefined field54_0xad;
    undefined field55_0xae;
    undefined field56_0xaf;
    undefined field57_0xb0;
    undefined field58_0xb1;
    undefined field59_0xb2;
    undefined field60_0xb3;
    undefined field61_0xb4;
    undefined field62_0xb5;
    undefined field63_0xb6;
    undefined field64_0xb7;
    undefined field65_0xb8;
    undefined field66_0xb9;
    undefined field67_0xba;
    undefined field68_0xbb;
    undefined field69_0xbc;
    undefined field70_0xbd;
    undefined field71_0xbe;
    undefined field72_0xbf;
};

union anon_union.conflict209b3_for_field_41 {
    struct pipe_inode_info * i_pipe;
    struct block_device.conflict * i_bdev;
    struct cdev * i_cdev;
    char * i_link;
    uint i_dir_seq;
};

struct address_space.conflict {
    struct inode.conflict * host;
    struct radix_tree_root.conflict i_pages;
    struct atomic_t i_mmap_writable;
    undefined field3_0x34;
    undefined field4_0x35;
    undefined field5_0x36;
    undefined field6_0x37;
    struct rb_root_cached i_mmap;
    struct rw_semaphore.conflict1 i_mmap_rwsem;
    ulong nrpages;
    ulong nrexceptional;
    ulong writeback_index;
    struct address_space_operations.conflict * a_ops;
    ulong flags;
    spinlock_t.conflict private_lock;
    gfp_t gfp_mask;
    undefined field16_0xd4;
    undefined field17_0xd5;
    undefined field18_0xd6;
    undefined field19_0xd7;
    struct list_head private_list;
    void * private_data;
    errseq_t wb_err;
    undefined field23_0xf4;
    undefined field24_0xf5;
    undefined field25_0xf6;
    undefined field26_0xf7;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct inode.conflict {
    umode_t i_mode;
    ushort i_opflags;
    struct kuid_t i_uid;
    struct kgid_t i_gid;
    uint i_flags;
    struct posix_acl * i_acl;
    struct posix_acl * i_default_acl;
    struct inode_operations.conflict * i_op;
    struct super_block.conflict * i_sb;
    struct address_space.conflict * i_mapping;
    ulong i_ino;
    union anon_union.conflict7bfe_for_field_12 field_11;
    dev_t i_rdev;
    loff_t i_size;
    struct timespec64 i_atime;
    struct timespec64 i_mtime;
    struct timespec64 i_ctime;
    spinlock_t.conflict i_lock;
    ushort i_bytes;
    u8 i_blkbits;
    u8 i_write_hint;
    undefined field21_0x9c;
    undefined field22_0x9d;
    undefined field23_0x9e;
    undefined field24_0x9f;
    blkcnt_t i_blocks;
    ulong i_state;
    struct rw_semaphore.conflict1 i_rwsem;
    ulong dirtied_when;
    ulong dirtied_time_when;
    struct hlist_node i_hash;
    struct list_head i_io_list;
    struct list_head i_lru;
    struct list_head i_sb_list;
    struct list_head i_wb_list;
    union anon_union.conflict7c20_for_field_36 field_31;
    struct atomic64_t i_version;
    struct atomic64_t i_sequence;
    struct atomic_t i_count;
    struct atomic_t i_dio_count;
    struct atomic_t i_writecount;
    undefined field41_0x184;
    undefined field42_0x185;
    undefined field43_0x186;
    undefined field44_0x187;
    struct file_operations.conflict * i_fop;
    struct file_lock_context.conflict * i_flctx;
    struct address_space.conflict i_data;
    struct list_head i_devices;
    union anon_union.conflict209b3_for_field_41 field_41;
    __u32 i_generation;
    __u32 i_fsnotify_mask;
    struct fsnotify_mark_connector * i_fsnotify_marks;
    void * i_private;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct module {
    enum module_state state;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct list_head list;
    char name[56];
    struct module_kobject mkobj;
    struct module_attribute * modinfo_attrs;
    char * version;
    char * srcversion;
    struct kobject * holders_dir;
    struct kernel_symbol * syms;
    s32 * crcs;
    uint num_syms;
    undefined field15_0x104;
    undefined field16_0x105;
    undefined field17_0x106;
    undefined field18_0x107;
    struct mutex param_lock;
    struct kernel_param * kp;
    uint num_kp;
    uint num_gpl_syms;
    struct kernel_symbol * gpl_syms;
    s32 * gpl_crcs;
    bool sig_ok;
    bool async_probe_requested;
    undefined field27_0x14a;
    undefined field28_0x14b;
    undefined field29_0x14c;
    undefined field30_0x14d;
    undefined field31_0x14e;
    undefined field32_0x14f;
    struct kernel_symbol * gpl_future_syms;
    s32 * gpl_future_crcs;
    uint num_gpl_future_syms;
    uint num_exentries;
    struct exception_table_entry * extable;
    int (* init)(void);
    undefined field39_0x178;
    undefined field40_0x179;
    undefined field41_0x17a;
    undefined field42_0x17b;
    undefined field43_0x17c;
    undefined field44_0x17d;
    undefined field45_0x17e;
    undefined field46_0x17f;
    struct module_layout core_layout;
    struct module_layout init_layout;
    struct mod_arch_specific arch;
    ulong taints;
    uint num_bugs;
    undefined field52_0x254;
    undefined field53_0x255;
    undefined field54_0x256;
    undefined field55_0x257;
    struct list_head bug_list;
    struct bug_entry * bug_table;
    struct mod_kallsyms * kallsyms;
    struct mod_kallsyms core_kallsyms;
    struct module_sect_attrs * sect_attrs;
    struct module_notes_attrs * notes_attrs;
    char * args;
    void * percpu;
    uint percpu_size;
    uint num_tracepoints;
    tracepoint_ptr_t * tracepoints_ptrs;
    struct jump_entry * jump_entries;
    uint num_jump_entries;
    uint num_trace_bprintk_fmt;
    char * * trace_bprintk_fmt_start;
    struct trace_event_call * * trace_events;
    uint num_trace_events;
    undefined field73_0x2e4;
    undefined field74_0x2e5;
    undefined field75_0x2e6;
    undefined field76_0x2e7;
    struct trace_eval_map * * trace_evals;
    uint num_trace_evals;
    undefined field79_0x2f4;
    undefined field80_0x2f5;
    undefined field81_0x2f6;
    undefined field82_0x2f7;
    struct list_head source_list;
    struct list_head target_list;
    void (* exit)(void);
    struct atomic_t refcnt;
    undefined field87_0x324;
    undefined field88_0x325;
    undefined field89_0x326;
    undefined field90_0x327;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field95_0x348;
    undefined field96_0x349;
    undefined field97_0x34a;
    undefined field98_0x34b;
    undefined field99_0x34c;
    undefined field100_0x34d;
    undefined field101_0x34e;
    undefined field102_0x34f;
    undefined field103_0x350;
    undefined field104_0x351;
    undefined field105_0x352;
    undefined field106_0x353;
    undefined field107_0x354;
    undefined field108_0x355;
    undefined field109_0x356;
    undefined field110_0x357;
    undefined field111_0x358;
    undefined field112_0x359;
    undefined field113_0x35a;
    undefined field114_0x35b;
    undefined field115_0x35c;
    undefined field116_0x35d;
    undefined field117_0x35e;
    undefined field118_0x35f;
    undefined field119_0x360;
    undefined field120_0x361;
    undefined field121_0x362;
    undefined field122_0x363;
    undefined field123_0x364;
    undefined field124_0x365;
    undefined field125_0x366;
    undefined field126_0x367;
    undefined field127_0x368;
    undefined field128_0x369;
    undefined field129_0x36a;
    undefined field130_0x36b;
    undefined field131_0x36c;
    undefined field132_0x36d;
    undefined field133_0x36e;
    undefined field134_0x36f;
    undefined field135_0x370;
    undefined field136_0x371;
    undefined field137_0x372;
    undefined field138_0x373;
    undefined field139_0x374;
    undefined field140_0x375;
    undefined field141_0x376;
    undefined field142_0x377;
    undefined field143_0x378;
    undefined field144_0x379;
    undefined field145_0x37a;
    undefined field146_0x37b;
    undefined field147_0x37c;
    undefined field148_0x37d;
    undefined field149_0x37e;
    undefined field150_0x37f;
};

struct fiemap_extent_info {
    uint fi_flags;
    uint fi_extents_mapped;
    uint fi_extents_max;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    struct fiemap_extent * fi_extents_start;
};

struct fsverity_operations {
};

struct fs_struct {
};

struct device {
    struct device * parent;
    struct device_private * p;
    struct kobject kobj;
    char * init_name;
    struct device_type * type;
    struct mutex mutex;
    struct bus_type * bus;
    struct device_driver * driver;
    void * platform_data;
    void * driver_data;
    struct dev_links_info links;
    struct dev_pm_info power;
    struct dev_pm_domain * pm_domain;
    struct irq_domain * msi_domain;
    struct dev_pin_info * pins;
    struct list_head msi_list;
    struct dma_map_ops * dma_ops;
    u64 * dma_mask;
    u64 coherent_dma_mask;
    u64 bus_dma_mask;
    ulong dma_pfn_offset;
    struct device_dma_parameters * dma_parms;
    struct list_head dma_pools;
    struct dma_coherent_mem * dma_mem;
    struct cma * cma_area;
    struct removed_region * removed_mem;
    struct dev_archdata archdata;
    struct device_node * of_node;
    struct fwnode_handle * fwnode;
    dev_t devt;
    u32 id;
    spinlock_t devres_lock;
    undefined field32_0x30c;
    undefined field33_0x30d;
    undefined field34_0x30e;
    undefined field35_0x30f;
    struct list_head devres_head;
    struct klist_node knode_class;
    struct class * class;
    struct attribute_group * * groups;
    void (* release)(struct device *);
    struct iommu_group * iommu_group;
    struct iommu_fwspec * iommu_fwspec;
    bool offline_disabled:1;
    bool offline:1;
    bool of_node_reused:1;
    bool state_synced:1;
    undefined field47_0x369;
    undefined field48_0x36a;
    undefined field49_0x36b;
    undefined field50_0x36c;
    undefined field51_0x36d;
    undefined field52_0x36e;
    undefined field53_0x36f;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    u64 android_kabi_reserved5;
    u64 android_kabi_reserved6;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
};

struct nsproxy {
    struct atomic_t count;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct uts_namespace * uts_ns;
    struct ipc_namespace * ipc_ns;
    struct mnt_namespace * mnt_ns;
    struct pid_namespace * pid_ns_for_children;
    struct net * net_ns;
    struct cgroup_namespace * cgroup_ns;
};

struct timerqueue_head {
    struct rb_root head;
    struct timerqueue_node * next;
};

struct hrtimer_clock_base {
    struct hrtimer_cpu_base * cpu_base;
    uint index;
    clockid_t clockid;
    seqcount_t seq;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
    struct hrtimer * running;
    struct timerqueue_head active;
    ktime_t (* get_time)(void);
    ktime_t offset;
};

struct hrtimer_cpu_base {
    raw_spinlock_t lock;
    uint cpu;
    uint active_bases;
    uint clock_was_set_seq;
    uint hres_active:1;
    uint in_hrtirq:1;
    uint hang_detected:1;
    uint softirq_activated:1;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    uint nr_events;
    ushort nr_retries;
    ushort nr_hangs;
    uint max_hang_time;
    ktime_t expires_next;
    struct hrtimer * next_timer;
    ktime_t softirq_expires_next;
    struct hrtimer * softirq_next_timer;
    struct hrtimer_clock_base clock_base[8];
};

struct plt_entry {
    __le32 mov0;
    __le32 mov1;
    __le32 mov2;
    __le32 br;
};

struct device_node {
    char * name;
    char * type;
    phandle phandle;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    char * full_name;
    struct fwnode_handle fwnode;
    struct property * properties;
    struct property * deadprops;
    struct device_node * parent;
    struct device_node * child;
    struct device_node * sibling;
    struct kobject kobj;
    ulong _flags;
    void * data;
};

struct percpu_rw_semaphore {
    struct rcu_sync rss;
    uint * read_count;
    struct rw_semaphore rw_sem;
    struct rcuwait writer;
    int readers_block;
    undefined field5_0x84;
    undefined field6_0x85;
    undefined field7_0x86;
    undefined field8_0x87;
};

struct futex_pi_state {
};

struct thread_info {
    ulong flags;
    mm_segment_t addr_limit;
    u64 ttbr0;
    int preempt_count;
    undefined field4_0x1c;
    undefined field5_0x1d;
    undefined field6_0x1e;
    undefined field7_0x1f;
};

struct task_io_accounting {
    u64 rchar;
    u64 wchar;
    u64 syscr;
    u64 syscw;
    u64 syscfs;
    u64 read_bytes;
    u64 write_bytes;
    u64 cancelled_write_bytes;
};

struct task_struct {
    struct thread_info thread_info;
    long state;
    void * stack;
    struct atomic_t usage;
    uint flags;
    uint ptrace;
    undefined field6_0x3c;
    undefined field7_0x3d;
    undefined field8_0x3e;
    undefined field9_0x3f;
    struct llist_node wake_entry;
    int on_cpu;
    uint cpu;
    uint wakee_flips;
    undefined field14_0x54;
    undefined field15_0x55;
    undefined field16_0x56;
    undefined field17_0x57;
    ulong wakee_flip_decay_ts;
    struct task_struct * last_wakee;
    int recent_used_cpu;
    int wake_cpu;
    int on_rq;
    int prio;
    int static_prio;
    int normal_prio;
    uint rt_priority;
    undefined field27_0x84;
    undefined field28_0x85;
    undefined field29_0x86;
    undefined field30_0x87;
    struct sched_class * sched_class;
    undefined field32_0x90;
    undefined field33_0x91;
    undefined field34_0x92;
    undefined field35_0x93;
    undefined field36_0x94;
    undefined field37_0x95;
    undefined field38_0x96;
    undefined field39_0x97;
    undefined field40_0x98;
    undefined field41_0x99;
    undefined field42_0x9a;
    undefined field43_0x9b;
    undefined field44_0x9c;
    undefined field45_0x9d;
    undefined field46_0x9e;
    undefined field47_0x9f;
    undefined field48_0xa0;
    undefined field49_0xa1;
    undefined field50_0xa2;
    undefined field51_0xa3;
    undefined field52_0xa4;
    undefined field53_0xa5;
    undefined field54_0xa6;
    undefined field55_0xa7;
    undefined field56_0xa8;
    undefined field57_0xa9;
    undefined field58_0xaa;
    undefined field59_0xab;
    undefined field60_0xac;
    undefined field61_0xad;
    undefined field62_0xae;
    undefined field63_0xaf;
    undefined field64_0xb0;
    undefined field65_0xb1;
    undefined field66_0xb2;
    undefined field67_0xb3;
    undefined field68_0xb4;
    undefined field69_0xb5;
    undefined field70_0xb6;
    undefined field71_0xb7;
    undefined field72_0xb8;
    undefined field73_0xb9;
    undefined field74_0xba;
    undefined field75_0xbb;
    undefined field76_0xbc;
    undefined field77_0xbd;
    undefined field78_0xbe;
    undefined field79_0xbf;
    struct sched_entity se;
    struct sched_rt_entity rt;
    u64 last_sleep_ts;
    int boost;
    undefined field84_0x31c;
    undefined field85_0x31d;
    undefined field86_0x31e;
    undefined field87_0x31f;
    u64 boost_period;
    u64 boost_expires;
    struct task_group * sched_task_group;
    struct sched_dl_entity dl;
    uint policy;
    int nr_cpus_allowed;
    cpumask_t cpus_allowed;
    cpumask_t cpus_requested;
    int rcu_read_lock_nesting;
    union rcu_special rcu_read_unlock_special;
    struct list_head rcu_node_entry;
    struct rcu_node * rcu_blocked_node;
    ulong rcu_tasks_nvcsw;
    u8 rcu_tasks_holdout;
    u8 rcu_tasks_idx;
    undefined field103_0x462;
    undefined field104_0x463;
    int rcu_tasks_idle_cpu;
    struct list_head rcu_tasks_holdout_list;
    struct sched_info sched_info;
    struct list_head tasks;
    struct plist_node pushable_tasks;
    struct rb_node pushable_dl_tasks;
    struct mm_struct * mm;
    struct mm_struct * active_mm;
    struct vmacache vmacache;
    struct task_rss_stat rss_stat;
    int exit_state;
    int exit_code;
    int exit_signal;
    int pdeath_signal;
    ulong jobctl;
    uint personality;
    uint sched_reset_on_fork:1;
    uint sched_contributes_to_load:1;
    uint sched_migrated:1;
    uint sched_remote_wakeup:1;
    uint sched_psi_wake_requeue:1;
    undefined field126_0x555;
    undefined field127_0x556;
    undefined field128_0x557;
    uint in_execve:1;
    uint in_iowait:1;
    uint in_user_fault:1;
    uint memcg_kmem_skip_account:1;
    uint no_cgroup_migration:1;
    uint use_memdelay:1;
    undefined field135_0x559;
    undefined field136_0x55a;
    undefined field137_0x55b;
    undefined field138_0x55c;
    undefined field139_0x55d;
    undefined field140_0x55e;
    undefined field141_0x55f;
    ulong atomic_flags;
    struct restart_block restart_block;
    pid_t pid;
    pid_t tgid;
    ulong stack_canary;
    struct task_struct * real_parent;
    struct task_struct * parent;
    struct list_head children;
    struct list_head sibling;
    struct task_struct * group_leader;
    struct list_head ptraced;
    struct list_head ptrace_entry;
    struct pid * thread_pid;
    struct hlist_node pid_links[4];
    struct list_head thread_group;
    struct list_head thread_node;
    struct completion * vfork_done;
    int * set_child_tid;
    int * clear_child_tid;
    u64 utime;
    u64 stime;
    u64 gtime;
    u64 * time_in_state;
    uint max_state;
    undefined field166_0x6a4;
    undefined field167_0x6a5;
    undefined field168_0x6a6;
    undefined field169_0x6a7;
    struct prev_cputime prev_cputime;
    ulong nvcsw;
    ulong nivcsw;
    u64 start_time;
    u64 real_start_time;
    ulong min_flt;
    ulong maj_flt;
    struct task_cputime cputime_expires;
    struct list_head cpu_timers[3];
    struct cred * ptracer_cred;
    struct cred * real_cred;
    struct cred * cred;
    char comm[16];
    struct nameidata * nameidata;
    ulong last_switch_count;
    ulong last_switch_time;
    struct fs_struct * fs;
    struct files_struct * files;
    struct nsproxy * nsproxy;
    struct signal_struct * signal;
    struct sighand_struct * sighand;
    struct sigset_t blocked;
    struct sigset_t real_blocked;
    struct sigset_t saved_sigmask;
    struct sigpending pending;
    ulong sas_ss_sp;
    size_t sas_ss_size;
    uint sas_ss_flags;
    undefined field198_0x7e4;
    undefined field199_0x7e5;
    undefined field200_0x7e6;
    undefined field201_0x7e7;
    struct callback_head * task_works;
    struct audit_context * audit_context;
    struct seccomp seccomp;
    u64 parent_exec_id;
    u64 self_exec_id;
    spinlock_t alloc_lock;
    raw_spinlock_t pi_lock;
    struct wake_q_node wake_q;
    struct rb_root_cached pi_waiters;
    struct task_struct * pi_top_task;
    struct rt_mutex_waiter * pi_blocked_on;
    void * journal_info;
    struct bio_list * bio_list;
    struct blk_plug * plug;
    struct reclaim_state * reclaim_state;
    struct backing_dev_info * backing_dev_info;
    struct io_context * io_context;
    ulong ptrace_message;
    siginfo_t.conflict * last_siginfo;
    struct task_io_accounting ioac;
    uint psi_flags;
    undefined field223_0x8cc;
    undefined field224_0x8cd;
    undefined field225_0x8ce;
    undefined field226_0x8cf;
    u64 acct_rss_mem1;
    u64 acct_vm_mem1;
    u64 acct_timexpd;
    struct nodemask_t mems_allowed;
    seqcount_t mems_allowed_seq;
    int cpuset_mem_spread_rotor;
    int cpuset_slab_spread_rotor;
    undefined field234_0x8fc;
    undefined field235_0x8fd;
    undefined field236_0x8fe;
    undefined field237_0x8ff;
    struct css_set * cgroups;
    struct list_head cg_list;
    struct robust_list_head * robust_list;
    struct compat_robust_list_head * compat_robust_list;
    struct list_head pi_state_list;
    struct futex_pi_state * pi_state_cache;
    struct perf_event_context * perf_event_ctxp[2];
    struct mutex perf_event_mutex;
    struct list_head perf_event_list;
    struct rseq * rseq;
    u32 rseq_len;
    u32 rseq_sig;
    ulong rseq_event_mask;
    struct tlbflush_unmap_batch tlb_ubc;
    struct callback_head rcu;
    struct pipe_inode_info * splice_pipe;
    struct page_frag task_frag;
    struct task_delay_info * delays;
    int nr_dirtied;
    int nr_dirtied_pause;
    ulong dirty_paused_when;
    u64 timer_slack_ns;
    u64 default_timer_slack_ns;
    ulong trace;
    ulong trace_recursion;
    struct mem_cgroup * memcg_in_oom;
    gfp_t memcg_oom_gfp_mask;
    int memcg_oom_order;
    uint memcg_nr_pages_over_high;
    undefined field267_0xa0c;
    undefined field268_0xa0d;
    undefined field269_0xa0e;
    undefined field270_0xa0f;
    struct mem_cgroup * active_memcg;
    struct request_queue * throttle_queue;
    struct uprobe_task * utask;
    int pagefault_disabled;
    undefined field275_0xa2c;
    undefined field276_0xa2d;
    undefined field277_0xa2e;
    undefined field278_0xa2f;
    struct task_struct * oom_reaper_list;
    struct vm_struct * stack_vm_area;
    struct atomic_t stack_refcount;
    undefined field282_0xa44;
    undefined field283_0xa45;
    undefined field284_0xa46;
    undefined field285_0xa47;
    void * security;
    union anon_union.conflict45eb_for_field_183 field_183;
    union anon_union.conflict462a_for_field_184 field_184;
    struct mutex futex_exit_mutex;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
    struct thread_struct thread;
    undefined field293_0xe60;
    undefined field294_0xe61;
    undefined field295_0xe62;
    undefined field296_0xe63;
    undefined field297_0xe64;
    undefined field298_0xe65;
    undefined field299_0xe66;
    undefined field300_0xe67;
    undefined field301_0xe68;
    undefined field302_0xe69;
    undefined field303_0xe6a;
    undefined field304_0xe6b;
    undefined field305_0xe6c;
    undefined field306_0xe6d;
    undefined field307_0xe6e;
    undefined field308_0xe6f;
    undefined field309_0xe70;
    undefined field310_0xe71;
    undefined field311_0xe72;
    undefined field312_0xe73;
    undefined field313_0xe74;
    undefined field314_0xe75;
    undefined field315_0xe76;
    undefined field316_0xe77;
    undefined field317_0xe78;
    undefined field318_0xe79;
    undefined field319_0xe7a;
    undefined field320_0xe7b;
    undefined field321_0xe7c;
    undefined field322_0xe7d;
    undefined field323_0xe7e;
    undefined field324_0xe7f;
};

struct uprobe {
};

union anon_union.conflict9579_for_field_15 {
    struct keyring_index_key index_key;
    struct anon_struct.conflict9558 field_1;
};

union anon_union.conflict951a_for_field_2 {
    struct list_head graveyard_link;
    struct rb_node serial_node;
};

struct key {
    refcount_t usage;
    key_serial_t serial;
    union anon_union.conflict951a_for_field_2 field_2;
    struct rw_semaphore sem;
    struct key_user * user;
    void * security;
    union anon_union.conflict9539_for_field_6 field_6;
    time64_t last_used_at;
    struct kuid_t uid;
    struct kgid_t gid;
    key_perm_t perm;
    ushort quotalen;
    ushort datalen;
    short state;
    undefined field14_0x82;
    undefined field15_0x83;
    undefined field16_0x84;
    undefined field17_0x85;
    undefined field18_0x86;
    undefined field19_0x87;
    ulong flags;
    union anon_union.conflict9579_for_field_15 field_15;
    union anon_union.conflict95b3_for_field_16 field_16;
    struct key_restriction * restrict_link;
};

struct pmd_t {
    pmdval_t pmd;
};

struct scatterlist {
    ulong page_link;
    uint offset;
    uint length;
    dma_addr_t dma_address;
    uint dma_length;
    undefined field5_0x1c;
    undefined field6_0x1d;
    undefined field7_0x1e;
    undefined field8_0x1f;
};

struct seq_file {
    char * buf;
    size_t size;
    size_t from;
    size_t count;
    size_t pad_until;
    loff_t index;
    loff_t read_pos;
    u64 version;
    struct mutex lock;
    struct seq_operations * op;
    int poll_event;
    undefined field11_0x6c;
    undefined field12_0x6d;
    undefined field13_0x6e;
    undefined field14_0x6f;
    struct file * file;
    void * private;
};

struct dentry_operations.conflict {
    int (* d_revalidate)(struct dentry.conflict *, uint);
    int (* d_weak_revalidate)(struct dentry.conflict *, uint);
    int (* d_hash)(struct dentry.conflict *, struct qstr *);
    int (* d_compare)(struct dentry.conflict *, uint, char *, struct qstr *);
    int (* d_delete)(struct dentry.conflict *);
    int (* d_init)(struct dentry.conflict *);
    void (* d_release)(struct dentry.conflict *);
    void (* d_prune)(struct dentry.conflict *);
    void (* d_iput)(struct dentry.conflict *, struct inode.conflict *);
    char * (* d_dname)(struct dentry.conflict *, char *, int);
    vfsmount * (* d_automount)(struct path.conflict *);
    int (* d_manage)(struct path.conflict *, bool);
    dentry.conflict * (* d_real)(struct dentry.conflict *, struct inode.conflict *);
    u64 field_13;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field17_0x88;
    undefined field18_0x89;
    undefined field19_0x8a;
    undefined field20_0x8b;
    undefined field21_0x8c;
    undefined field22_0x8d;
    undefined field23_0x8e;
    undefined field24_0x8f;
    undefined field25_0x90;
    undefined field26_0x91;
    undefined field27_0x92;
    undefined field28_0x93;
    undefined field29_0x94;
    undefined field30_0x95;
    undefined field31_0x96;
    undefined field32_0x97;
    undefined field33_0x98;
    undefined field34_0x99;
    undefined field35_0x9a;
    undefined field36_0x9b;
    undefined field37_0x9c;
    undefined field38_0x9d;
    undefined field39_0x9e;
    undefined field40_0x9f;
    undefined field41_0xa0;
    undefined field42_0xa1;
    undefined field43_0xa2;
    undefined field44_0xa3;
    undefined field45_0xa4;
    undefined field46_0xa5;
    undefined field47_0xa6;
    undefined field48_0xa7;
    undefined field49_0xa8;
    undefined field50_0xa9;
    undefined field51_0xaa;
    undefined field52_0xab;
    undefined field53_0xac;
    undefined field54_0xad;
    undefined field55_0xae;
    undefined field56_0xaf;
    undefined field57_0xb0;
    undefined field58_0xb1;
    undefined field59_0xb2;
    undefined field60_0xb3;
    undefined field61_0xb4;
    undefined field62_0xb5;
    undefined field63_0xb6;
    undefined field64_0xb7;
    undefined field65_0xb8;
    undefined field66_0xb9;
    undefined field67_0xba;
    undefined field68_0xbb;
    undefined field69_0xbc;
    undefined field70_0xbd;
    undefined field71_0xbe;
    undefined field72_0xbf;
};

struct module_attribute {
    struct attribute attr;
    ssize_t (* show)(struct module_attribute *, struct module_kobject.conflict *, char *);
    ssize_t (* store)(struct module_attribute *, struct module_kobject.conflict *, char *, size_t);
    void (* setup)(struct module.conflict *, char *);
    int (* test)(struct module.conflict *);
    void (* free)(struct module.conflict *);
};

struct fiemap_extent {
    __u64 fe_logical;
    __u64 fe_physical;
    __u64 fe_length;
    __u64 fe_reserved64[2];
    __u32 fe_flags;
    __u32 fe_reserved[3];
};

struct rw_semaphore.conflict {
    atomic_long_t count;
    struct list_head wait_list;
    raw_spinlock_t.conflict wait_lock;
    struct optimistic_spin_queue osq;
    undefined field4_0x34;
    undefined field5_0x35;
    undefined field6_0x36;
    undefined field7_0x37;
    struct task_struct.conflict * owner;
    long m_count;
};

struct anon_struct.conflict18a52_for_field_0 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    undefined field13_0x5c;
    undefined field14_0x5d;
    undefined field15_0x5e;
    undefined field16_0x5f;
    spinlock_t.conflict page_table_lock;
    struct rw_semaphore.conflict mmap_sem;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t.conflict arg_lock;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state.conflict * core_state;
    struct atomic_t membarrier_state;
    undefined field48_0x354;
    undefined field49_0x355;
    undefined field50_0x356;
    undefined field51_0x357;
    spinlock_t.conflict ioctx_lock;
    struct kioctx_table * ioctx_table;
    struct user_namespace * user_ns;
    struct file * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field57_0x38c;
    undefined field58_0x38d;
    undefined field59_0x38e;
    undefined field60_0x38f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

struct wake_irq {
};

struct bug_entry {
    int bug_addr_disp;
    int file_disp;
    ushort line;
    ushort flags;
};

union anon_union.conflict1e1a2_for_field_12 {
    struct list_head d_lru;
    wait_queue_head_t.conflict * d_wait;
};

struct dentry.conflict {
    uint d_flags;
    seqcount_t d_seq;
    struct hlist_bl_node d_hash;
    struct dentry.conflict * d_parent;
    struct qstr d_name;
    struct inode.conflict * d_inode;
    uchar d_iname[32];
    struct lockref.conflict d_lockref;
    struct dentry_operations.conflict * d_op;
    struct super_block.conflict * d_sb;
    ulong d_time;
    void * d_fsdata;
    union anon_union.conflict1e1a2_for_field_12 field_12;
    struct list_head d_child;
    struct list_head d_subdirs;
    union anon_union.conflict1887_for_d_u d_u;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct sb_writers.conflict {
    int frozen;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t.conflict wait_unfrozen;
    struct percpu_rw_semaphore.conflict rw_sem[3];
};

struct kernfs_open_node {
};

union anon_union.conflict4d9b_for_field_6 {
    struct list_head private_list;
    struct callback_head callback_head;
};

struct bus_type {
    char * name;
    char * dev_name;
    struct device * dev_root;
    struct attribute_group * * bus_groups;
    struct attribute_group * * dev_groups;
    struct attribute_group * * drv_groups;
    int (* match)(struct device *, struct device_driver *);
    int (* uevent)(struct device *, struct kobj_uevent_env *);
    int (* probe)(struct device *);
    void (* sync_state)(struct device *);
    int (* remove)(struct device *);
    void (* shutdown)(struct device *);
    int (* online)(struct device *);
    int (* offline)(struct device *);
    int (* suspend)(struct device *, pm_message_t);
    int (* resume)(struct device *);
    int (* num_vf)(struct device *);
    int (* dma_configure)(struct device *);
    struct dev_pm_ops * pm;
    struct iommu_ops * iommu_ops;
    struct subsys_private * p;
    struct lock_class_key lock_key;
    bool need_parent_lock;
    undefined field23_0xa9;
    undefined field24_0xaa;
    undefined field25_0xab;
    undefined field26_0xac;
    undefined field27_0xad;
    undefined field28_0xae;
    undefined field29_0xaf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct io_context {
    atomic_long_t refcount;
    struct atomic_t active_ref;
    struct atomic_t nr_tasks;
    spinlock_t lock;
    ushort ioprio;
    undefined field5_0x16;
    undefined field6_0x17;
    int nr_batch_requests;
    undefined field8_0x1c;
    undefined field9_0x1d;
    undefined field10_0x1e;
    undefined field11_0x1f;
    ulong last_waited;
    struct radix_tree_root icq_tree;
    struct io_cq * icq_hint;
    struct hlist_head icq_list;
    struct work_struct release_work;
};

struct fscrypt_info {
};

struct quota_info {
    uint flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct rw_semaphore dqio_sem;
    struct inode * files[3];
    struct mem_dqinfo info[3];
    struct quota_format_ops * ops[3];
};

struct sb_writers {
    int frozen;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t wait_unfrozen;
    struct percpu_rw_semaphore rw_sem[3];
};

struct uuid_t {
    __u8 b[16];
};

struct super_block {
    struct list_head s_list;
    dev_t s_dev;
    uchar s_blocksize_bits;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
    ulong s_blocksize;
    loff_t s_maxbytes;
    struct file_system_type * s_type;
    struct super_operations * s_op;
    struct dquot_operations * dq_op;
    struct quotactl_ops * s_qcop;
    struct export_operations * s_export_op;
    ulong s_flags;
    ulong s_iflags;
    ulong s_magic;
    struct dentry * s_root;
    struct rw_semaphore s_umount;
    int s_count;
    struct atomic_t s_active;
    void * s_security;
    struct xattr_handler * * s_xattr;
    struct fscrypt_operations * s_cop;
    struct key * s_master_keys;
    struct fsverity_operations * s_vop;
    struct unicode_map * s_encoding;
    __u16 s_encoding_flags;
    undefined field27_0xda;
    undefined field28_0xdb;
    undefined field29_0xdc;
    undefined field30_0xdd;
    undefined field31_0xde;
    undefined field32_0xdf;
    struct hlist_bl_head s_roots;
    struct list_head s_mounts;
    struct block_device * s_bdev;
    struct backing_dev_info * s_bdi;
    struct mtd_info * s_mtd;
    struct hlist_node s_instances;
    uint s_quota_types;
    undefined field40_0x124;
    undefined field41_0x125;
    undefined field42_0x126;
    undefined field43_0x127;
    struct quota_info s_dquot;
    struct sb_writers s_writers;
    char s_id[32];
    struct uuid_t s_uuid;
    void * s_fs_info;
    uint s_max_links;
    fmode_t s_mode;
    u32 s_time_gran;
    undefined field52_0x464;
    undefined field53_0x465;
    undefined field54_0x466;
    undefined field55_0x467;
    struct mutex s_vfs_rename_mutex;
    char * s_subtype;
    struct dentry_operations * s_d_op;
    int cleancache_poolid;
    undefined field60_0x49c;
    undefined field61_0x49d;
    undefined field62_0x49e;
    undefined field63_0x49f;
    struct shrinker s_shrink;
    atomic_long_t s_remove_count;
    atomic_long_t s_fsnotify_inode_refs;
    int s_readonly_remount;
    undefined field68_0x4f4;
    undefined field69_0x4f5;
    undefined field70_0x4f6;
    undefined field71_0x4f7;
    struct workqueue_struct * s_dio_done_wq;
    struct hlist_head s_pins;
    struct user_namespace * s_user_ns;
    undefined field75_0x510;
    undefined field76_0x511;
    undefined field77_0x512;
    undefined field78_0x513;
    undefined field79_0x514;
    undefined field80_0x515;
    undefined field81_0x516;
    undefined field82_0x517;
    undefined field83_0x518;
    undefined field84_0x519;
    undefined field85_0x51a;
    undefined field86_0x51b;
    undefined field87_0x51c;
    undefined field88_0x51d;
    undefined field89_0x51e;
    undefined field90_0x51f;
    undefined field91_0x520;
    undefined field92_0x521;
    undefined field93_0x522;
    undefined field94_0x523;
    undefined field95_0x524;
    undefined field96_0x525;
    undefined field97_0x526;
    undefined field98_0x527;
    undefined field99_0x528;
    undefined field100_0x529;
    undefined field101_0x52a;
    undefined field102_0x52b;
    undefined field103_0x52c;
    undefined field104_0x52d;
    undefined field105_0x52e;
    undefined field106_0x52f;
    undefined field107_0x530;
    undefined field108_0x531;
    undefined field109_0x532;
    undefined field110_0x533;
    undefined field111_0x534;
    undefined field112_0x535;
    undefined field113_0x536;
    undefined field114_0x537;
    undefined field115_0x538;
    undefined field116_0x539;
    undefined field117_0x53a;
    undefined field118_0x53b;
    undefined field119_0x53c;
    undefined field120_0x53d;
    undefined field121_0x53e;
    undefined field122_0x53f;
    struct list_lru s_dentry_lru;
    undefined field124_0x560;
    undefined field125_0x561;
    undefined field126_0x562;
    undefined field127_0x563;
    undefined field128_0x564;
    undefined field129_0x565;
    undefined field130_0x566;
    undefined field131_0x567;
    undefined field132_0x568;
    undefined field133_0x569;
    undefined field134_0x56a;
    undefined field135_0x56b;
    undefined field136_0x56c;
    undefined field137_0x56d;
    undefined field138_0x56e;
    undefined field139_0x56f;
    undefined field140_0x570;
    undefined field141_0x571;
    undefined field142_0x572;
    undefined field143_0x573;
    undefined field144_0x574;
    undefined field145_0x575;
    undefined field146_0x576;
    undefined field147_0x577;
    undefined field148_0x578;
    undefined field149_0x579;
    undefined field150_0x57a;
    undefined field151_0x57b;
    undefined field152_0x57c;
    undefined field153_0x57d;
    undefined field154_0x57e;
    undefined field155_0x57f;
    struct list_lru s_inode_lru;
    struct callback_head rcu;
    struct work_struct destroy_work;
    struct mutex s_sync_lock;
    int s_stack_depth;
    undefined field161_0x604;
    undefined field162_0x605;
    undefined field163_0x606;
    undefined field164_0x607;
    undefined field165_0x608;
    undefined field166_0x609;
    undefined field167_0x60a;
    undefined field168_0x60b;
    undefined field169_0x60c;
    undefined field170_0x60d;
    undefined field171_0x60e;
    undefined field172_0x60f;
    undefined field173_0x610;
    undefined field174_0x611;
    undefined field175_0x612;
    undefined field176_0x613;
    undefined field177_0x614;
    undefined field178_0x615;
    undefined field179_0x616;
    undefined field180_0x617;
    undefined field181_0x618;
    undefined field182_0x619;
    undefined field183_0x61a;
    undefined field184_0x61b;
    undefined field185_0x61c;
    undefined field186_0x61d;
    undefined field187_0x61e;
    undefined field188_0x61f;
    undefined field189_0x620;
    undefined field190_0x621;
    undefined field191_0x622;
    undefined field192_0x623;
    undefined field193_0x624;
    undefined field194_0x625;
    undefined field195_0x626;
    undefined field196_0x627;
    undefined field197_0x628;
    undefined field198_0x629;
    undefined field199_0x62a;
    undefined field200_0x62b;
    undefined field201_0x62c;
    undefined field202_0x62d;
    undefined field203_0x62e;
    undefined field204_0x62f;
    undefined field205_0x630;
    undefined field206_0x631;
    undefined field207_0x632;
    undefined field208_0x633;
    undefined field209_0x634;
    undefined field210_0x635;
    undefined field211_0x636;
    undefined field212_0x637;
    undefined field213_0x638;
    undefined field214_0x639;
    undefined field215_0x63a;
    undefined field216_0x63b;
    undefined field217_0x63c;
    undefined field218_0x63d;
    undefined field219_0x63e;
    undefined field220_0x63f;
    spinlock_t s_inode_list_lock;
    undefined field222_0x644;
    undefined field223_0x645;
    undefined field224_0x646;
    undefined field225_0x647;
    struct list_head s_inodes;
    spinlock_t s_inode_wblist_lock;
    undefined field228_0x65c;
    undefined field229_0x65d;
    undefined field230_0x65e;
    undefined field231_0x65f;
    struct list_head s_inodes_wb;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field237_0x690;
    undefined field238_0x691;
    undefined field239_0x692;
    undefined field240_0x693;
    undefined field241_0x694;
    undefined field242_0x695;
    undefined field243_0x696;
    undefined field244_0x697;
    undefined field245_0x698;
    undefined field246_0x699;
    undefined field247_0x69a;
    undefined field248_0x69b;
    undefined field249_0x69c;
    undefined field250_0x69d;
    undefined field251_0x69e;
    undefined field252_0x69f;
    undefined field253_0x6a0;
    undefined field254_0x6a1;
    undefined field255_0x6a2;
    undefined field256_0x6a3;
    undefined field257_0x6a4;
    undefined field258_0x6a5;
    undefined field259_0x6a6;
    undefined field260_0x6a7;
    undefined field261_0x6a8;
    undefined field262_0x6a9;
    undefined field263_0x6aa;
    undefined field264_0x6ab;
    undefined field265_0x6ac;
    undefined field266_0x6ad;
    undefined field267_0x6ae;
    undefined field268_0x6af;
    undefined field269_0x6b0;
    undefined field270_0x6b1;
    undefined field271_0x6b2;
    undefined field272_0x6b3;
    undefined field273_0x6b4;
    undefined field274_0x6b5;
    undefined field275_0x6b6;
    undefined field276_0x6b7;
    undefined field277_0x6b8;
    undefined field278_0x6b9;
    undefined field279_0x6ba;
    undefined field280_0x6bb;
    undefined field281_0x6bc;
    undefined field282_0x6bd;
    undefined field283_0x6be;
    undefined field284_0x6bf;
};

struct wakeup_source {
    char * name;
    int id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head entry;
    spinlock_t lock;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
    struct wake_irq * wakeirq;
    struct timer_list timer;
    ulong timer_expires;
    ktime_t total_time;
    ktime_t max_time;
    ktime_t last_time;
    ktime_t start_prevent_time;
    ktime_t prevent_sleep_time;
    ulong event_count;
    ulong active_count;
    ulong relax_count;
    ulong expire_count;
    ulong wakeup_count;
    struct device * dev;
    bool active:1;
    bool autosleep_enabled:1;
    undefined field28_0xc9;
    undefined field29_0xca;
    undefined field30_0xcb;
    undefined field31_0xcc;
    undefined field32_0xcd;
    undefined field33_0xce;
    undefined field34_0xcf;
};

struct file_operations.conflict {
    struct module * owner;
    loff_t (* llseek)(struct file.conflict *, loff_t, int);
    ssize_t (* read)(struct file.conflict *, char *, size_t, loff_t *);
    ssize_t (* write)(struct file.conflict *, char *, size_t, loff_t *);
    ssize_t (* read_iter)(struct kiocb.conflict *, struct iov_iter *);
    ssize_t (* write_iter)(struct kiocb.conflict *, struct iov_iter *);
    int (* iterate)(struct file.conflict *, struct dir_context *);
    int (* iterate_shared)(struct file.conflict *, struct dir_context *);
    __poll_t (* poll)(struct file.conflict *, struct poll_table_struct *);
    long (* unlocked_ioctl)(struct file.conflict *, uint, ulong);
    long (* compat_ioctl)(struct file.conflict *, uint, ulong);
    int (* mmap)(struct file.conflict *, struct vm_area_struct *);
    ulong mmap_supported_flags;
    int (* open)(struct inode.conflict *, struct file.conflict *);
    int (* flush)(struct file.conflict *, fl_owner_t);
    int (* release)(struct inode.conflict *, struct file.conflict *);
    int (* fsync)(struct file.conflict *, loff_t, loff_t, int);
    int (* fasync)(int, struct file.conflict *, int);
    int (* lock)(struct file.conflict *, int, struct file_lock.conflict *);
    ssize_t (* sendpage)(struct file.conflict *, struct page.conflict *, int, size_t, loff_t *, int);
    ulong (* get_unmapped_area)(struct file.conflict *, ulong, ulong, ulong, ulong);
    int (* check_flags)(int);
    int (* flock)(struct file.conflict *, int, struct file_lock.conflict *);
    ssize_t (* splice_write)(struct pipe_inode_info *, struct file.conflict *, loff_t *, size_t, uint);
    ssize_t (* splice_read)(struct file.conflict *, loff_t *, struct pipe_inode_info *, size_t, uint);
    int (* setlease)(struct file.conflict *, long, struct file_lock.conflict * *, void * *);
    long (* fallocate)(struct file.conflict *, int, loff_t, loff_t);
    void (* show_fdinfo)(struct seq_file *, struct file.conflict *);
    ssize_t (* copy_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, size_t, uint);
    int (* clone_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, u64);
    int (* dedupe_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, u64);
    int (* fadvise)(struct file.conflict *, loff_t, loff_t, int);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct super_block.conflict {
    struct list_head s_list;
    dev_t s_dev;
    uchar s_blocksize_bits;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
    ulong s_blocksize;
    loff_t s_maxbytes;
    struct file_system_type.conflict * s_type;
    struct super_operations.conflict * s_op;
    struct dquot_operations.conflict * dq_op;
    struct quotactl_ops.conflict * s_qcop;
    struct export_operations * s_export_op;
    ulong s_flags;
    ulong s_iflags;
    ulong s_magic;
    struct dentry.conflict * s_root;
    struct rw_semaphore.conflict1 s_umount;
    int s_count;
    struct atomic_t s_active;
    struct xattr_handler * * s_xattr;
    struct unicode_map * s_encoding;
    __u16 s_encoding_flags;
    undefined field23_0xd2;
    undefined field24_0xd3;
    undefined field25_0xd4;
    undefined field26_0xd5;
    undefined field27_0xd6;
    undefined field28_0xd7;
    struct hlist_bl_head s_roots;
    struct list_head s_mounts;
    struct block_device.conflict * s_bdev;
    struct backing_dev_info * s_bdi;
    struct mtd_info * s_mtd;
    struct hlist_node s_instances;
    uint s_quota_types;
    undefined field36_0x11c;
    undefined field37_0x11d;
    undefined field38_0x11e;
    undefined field39_0x11f;
    struct quota_info.conflict s_dquot;
    struct sb_writers.conflict s_writers;
    char s_id[32];
    struct uuid_t s_uuid;
    void * s_fs_info;
    uint s_max_links;
    fmode_t s_mode;
    u32 s_time_gran;
    undefined field48_0x4fc;
    undefined field49_0x4fd;
    undefined field50_0x4fe;
    undefined field51_0x4ff;
    struct mutex.conflict s_vfs_rename_mutex;
    char * s_subtype;
    struct dentry_operations.conflict * s_d_op;
    int cleancache_poolid;
    undefined field56_0x54c;
    undefined field57_0x54d;
    undefined field58_0x54e;
    undefined field59_0x54f;
    struct shrinker.conflict s_shrink;
    atomic_long_t s_remove_count;
    atomic_long_t s_fsnotify_inode_refs;
    int s_readonly_remount;
    undefined field64_0x59c;
    undefined field65_0x59d;
    undefined field66_0x59e;
    undefined field67_0x59f;
    struct workqueue_struct * s_dio_done_wq;
    struct hlist_head s_pins;
    struct user_namespace * s_user_ns;
    undefined field71_0x5b8;
    undefined field72_0x5b9;
    undefined field73_0x5ba;
    undefined field74_0x5bb;
    undefined field75_0x5bc;
    undefined field76_0x5bd;
    undefined field77_0x5be;
    undefined field78_0x5bf;
    struct list_lru.conflict s_dentry_lru;
    undefined field80_0x5c8;
    undefined field81_0x5c9;
    undefined field82_0x5ca;
    undefined field83_0x5cb;
    undefined field84_0x5cc;
    undefined field85_0x5cd;
    undefined field86_0x5ce;
    undefined field87_0x5cf;
    undefined field88_0x5d0;
    undefined field89_0x5d1;
    undefined field90_0x5d2;
    undefined field91_0x5d3;
    undefined field92_0x5d4;
    undefined field93_0x5d5;
    undefined field94_0x5d6;
    undefined field95_0x5d7;
    undefined field96_0x5d8;
    undefined field97_0x5d9;
    undefined field98_0x5da;
    undefined field99_0x5db;
    undefined field100_0x5dc;
    undefined field101_0x5dd;
    undefined field102_0x5de;
    undefined field103_0x5df;
    undefined field104_0x5e0;
    undefined field105_0x5e1;
    undefined field106_0x5e2;
    undefined field107_0x5e3;
    undefined field108_0x5e4;
    undefined field109_0x5e5;
    undefined field110_0x5e6;
    undefined field111_0x5e7;
    undefined field112_0x5e8;
    undefined field113_0x5e9;
    undefined field114_0x5ea;
    undefined field115_0x5eb;
    undefined field116_0x5ec;
    undefined field117_0x5ed;
    undefined field118_0x5ee;
    undefined field119_0x5ef;
    undefined field120_0x5f0;
    undefined field121_0x5f1;
    undefined field122_0x5f2;
    undefined field123_0x5f3;
    undefined field124_0x5f4;
    undefined field125_0x5f5;
    undefined field126_0x5f6;
    undefined field127_0x5f7;
    undefined field128_0x5f8;
    undefined field129_0x5f9;
    undefined field130_0x5fa;
    undefined field131_0x5fb;
    undefined field132_0x5fc;
    undefined field133_0x5fd;
    undefined field134_0x5fe;
    undefined field135_0x5ff;
    struct list_lru.conflict s_inode_lru;
    struct callback_head rcu;
    struct work_struct destroy_work;
    struct mutex.conflict s_sync_lock;
    int s_stack_depth;
    undefined field141_0x684;
    undefined field142_0x685;
    undefined field143_0x686;
    undefined field144_0x687;
    undefined field145_0x688;
    undefined field146_0x689;
    undefined field147_0x68a;
    undefined field148_0x68b;
    undefined field149_0x68c;
    undefined field150_0x68d;
    undefined field151_0x68e;
    undefined field152_0x68f;
    undefined field153_0x690;
    undefined field154_0x691;
    undefined field155_0x692;
    undefined field156_0x693;
    undefined field157_0x694;
    undefined field158_0x695;
    undefined field159_0x696;
    undefined field160_0x697;
    undefined field161_0x698;
    undefined field162_0x699;
    undefined field163_0x69a;
    undefined field164_0x69b;
    undefined field165_0x69c;
    undefined field166_0x69d;
    undefined field167_0x69e;
    undefined field168_0x69f;
    undefined field169_0x6a0;
    undefined field170_0x6a1;
    undefined field171_0x6a2;
    undefined field172_0x6a3;
    undefined field173_0x6a4;
    undefined field174_0x6a5;
    undefined field175_0x6a6;
    undefined field176_0x6a7;
    undefined field177_0x6a8;
    undefined field178_0x6a9;
    undefined field179_0x6aa;
    undefined field180_0x6ab;
    undefined field181_0x6ac;
    undefined field182_0x6ad;
    undefined field183_0x6ae;
    undefined field184_0x6af;
    undefined field185_0x6b0;
    undefined field186_0x6b1;
    undefined field187_0x6b2;
    undefined field188_0x6b3;
    undefined field189_0x6b4;
    undefined field190_0x6b5;
    undefined field191_0x6b6;
    undefined field192_0x6b7;
    undefined field193_0x6b8;
    undefined field194_0x6b9;
    undefined field195_0x6ba;
    undefined field196_0x6bb;
    undefined field197_0x6bc;
    undefined field198_0x6bd;
    undefined field199_0x6be;
    undefined field200_0x6bf;
    spinlock_t.conflict s_inode_list_lock;
    struct list_head s_inodes;
    spinlock_t.conflict s_inode_wblist_lock;
    struct list_head s_inodes_wb;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field209_0x730;
    undefined field210_0x731;
    undefined field211_0x732;
    undefined field212_0x733;
    undefined field213_0x734;
    undefined field214_0x735;
    undefined field215_0x736;
    undefined field216_0x737;
    undefined field217_0x738;
    undefined field218_0x739;
    undefined field219_0x73a;
    undefined field220_0x73b;
    undefined field221_0x73c;
    undefined field222_0x73d;
    undefined field223_0x73e;
    undefined field224_0x73f;
};

struct compat_robust_list_head {
};

union anon_union.conflict82f6_for_fl_u {
    struct nfs_lock_info nfs_fl;
    struct nfs4_lock_info nfs4_fl;
    struct anon_struct.conflict82d2 afs;
};

struct delayed_work {
    struct work_struct work;
    struct timer_list timer;
    struct workqueue_struct * wq;
    int cpu;
    undefined field4_0x74;
    undefined field5_0x75;
    undefined field6_0x76;
    undefined field7_0x77;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct bdi_writeback {
    struct backing_dev_info * bdi;
    ulong state;
    ulong last_old_flush;
    struct list_head b_dirty;
    struct list_head b_io;
    struct list_head b_more_io;
    struct list_head b_dirty_time;
    spinlock_t.conflict list_lock;
    struct percpu_counter.conflict stat[4];
    struct bdi_writeback_congested * congested;
    ulong bw_time_stamp;
    ulong dirtied_stamp;
    ulong written_stamp;
    ulong write_bandwidth;
    ulong avg_write_bandwidth;
    ulong dirty_ratelimit;
    ulong balanced_dirty_ratelimit;
    struct fprop_local_percpu completions;
    int dirty_exceeded;
    enum wb_reason start_all_reason;
    spinlock_t.conflict work_lock;
    struct list_head work_list;
    struct delayed_work dwork;
    ulong dirty_sleep;
    struct list_head bdi_node;
};

struct backing_dev_info {
    struct list_head bdi_list;
    ulong ra_pages;
    ulong io_pages;
    int (* congested_fn)(void *, int);
    void * congested_data;
    char * name;
    struct kref refcnt;
    uint capabilities;
    uint min_ratio;
    uint max_ratio;
    uint max_prop_frac;
    undefined field11_0x4c;
    undefined field12_0x4d;
    undefined field13_0x4e;
    undefined field14_0x4f;
    atomic_long_t tot_write_bandwidth;
    struct bdi_writeback wb;
    struct list_head wb_list;
    struct bdi_writeback_congested * wb_congested;
    wait_queue_head_t.conflict wb_waitq;
    struct device * dev;
    struct device * owner;
    struct timer_list laptop_mode_wb_timer;
    struct dentry * debug_dir;
    struct dentry * debug_stats;
};

struct irq_domain_ops {
    int (* match)(struct irq_domain *, struct device_node *, enum irq_domain_bus_token);
    int (* select)(struct irq_domain *, struct irq_fwspec *, enum irq_domain_bus_token);
    int (* map)(struct irq_domain *, uint, irq_hw_number_t);
    void (* unmap)(struct irq_domain *, uint);
    int (* xlate)(struct irq_domain *, struct device_node *, u32 *, uint, ulong *, uint *);
    int (* alloc)(struct irq_domain *, uint, uint, void *);
    void (* free)(struct irq_domain *, uint, uint);
    int (* activate)(struct irq_domain *, struct irq_data *, bool);
    void (* deactivate)(struct irq_domain *, struct irq_data *);
    int (* translate)(struct irq_domain *, struct irq_fwspec *, ulong *, uint *);
};

union anon_union.conflict3f4e_for_rseq_cs {
    __u64 ptr64;
    __u64 ptr;
};

struct rseq {
    __u32 cpu_id_start;
    __u32 cpu_id;
    union anon_union.conflict3f4e_for_rseq_cs rseq_cs;
    __u32 flags;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
    undefined field8_0x18;
    undefined field9_0x19;
    undefined field10_0x1a;
    undefined field11_0x1b;
    undefined field12_0x1c;
    undefined field13_0x1d;
    undefined field14_0x1e;
    undefined field15_0x1f;
};

struct device_driver {
    char * name;
    struct bus_type.conflict * bus;
    struct module * owner;
    char * mod_name;
    bool suppress_bind_attrs;
    undefined field5_0x21;
    undefined field6_0x22;
    undefined field7_0x23;
    enum probe_type probe_type;
    struct of_device_id * of_match_table;
    struct acpi_device_id * acpi_match_table;
    int (* probe)(struct device.conflict *);
    void (* sync_state)(struct device.conflict *);
    int (* remove)(struct device.conflict *);
    void (* shutdown)(struct device.conflict *);
    int (* suspend)(struct device.conflict *, pm_message_t);
    int (* resume)(struct device.conflict *);
    struct attribute_group * * groups;
    struct dev_pm_ops.conflict * pm;
    void (* coredump)(struct device.conflict *);
    struct driver_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct mnt_namespace {
};

struct cfs_rq {
};

struct kiocb.conflict {
    struct file.conflict * ki_filp;
    loff_t ki_pos;
    void (* ki_complete)(struct kiocb.conflict *, long, long);
    void * private;
    int ki_flags;
    u16 ki_hint;
    u16 ki_ioprio;
};

struct mm_struct.conflict {
    struct anon_struct.conflict18a52_for_field_0 field_0;
    ulong cpu_bitmap[0];
};

union anon_union.conflict542c_for_field_1 {
    struct anon_struct.conflict5094 field_0;
    struct anon_struct.conflict5094 field_1;
    struct anon_struct.conflict52b0 field_2;
    struct anon_struct.conflict52e9 field_3;
    struct anon_struct.conflict5094 field_4;
    struct anon_struct.conflict5094 field_5;
    struct callback_head callback_head;
};

struct page {
    ulong flags;
    union anon_union.conflict542c_for_field_1 field_1;
    union anon_union.conflict545e_for_field_2 field_2;
    struct atomic_t _refcount;
    struct mem_cgroup * mem_cgroup;
};

struct irq_affinity_notify {
    uint irq;
    struct kref kref;
    struct work_struct work;
    void (* notify)(struct irq_affinity_notify *, cpumask_t *);
    void (* release)(struct kref *);
};

struct super_operations.conflict {
    inode.conflict * (* alloc_inode)(struct super_block.conflict *);
    void (* destroy_inode)(struct inode.conflict *);
    void (* dirty_inode)(struct inode.conflict *, int);
    int (* write_inode)(struct inode.conflict *, struct writeback_control *);
    int (* drop_inode)(struct inode.conflict *);
    void (* evict_inode)(struct inode.conflict *);
    void (* put_super)(struct super_block.conflict *);
    int (* sync_fs)(struct super_block.conflict *, int);
    int (* freeze_super)(struct super_block.conflict *);
    int (* freeze_fs)(struct super_block.conflict *);
    int (* thaw_super)(struct super_block.conflict *);
    int (* unfreeze_fs)(struct super_block.conflict *);
    int (* statfs)(struct dentry.conflict *, struct kstatfs *);
    int (* remount_fs)(struct super_block.conflict *, int *, char *);
    int (* remount_fs2)(struct vfsmount *, struct super_block.conflict *, int *, char *);
    void * (* clone_mnt_data)(void *);
    void (* copy_mnt_data)(void *, void *);
    void (* umount_begin)(struct super_block.conflict *);
    void (* umount_end)(struct super_block.conflict *, int);
    int (* show_options)(struct seq_file *, struct dentry.conflict *);
    int (* show_options2)(struct vfsmount *, struct seq_file *, struct dentry.conflict *);
    int (* show_devname)(struct seq_file *, struct dentry.conflict *);
    int (* show_path)(struct seq_file *, struct dentry.conflict *);
    int (* show_stats)(struct seq_file *, struct dentry.conflict *);
    int (* bdev_try_to_free_page)(struct super_block.conflict *, struct page.conflict *, gfp_t);
    long (* nr_cached_objects)(struct super_block.conflict *, struct shrink_control *);
    long (* free_cached_objects)(struct super_block.conflict *, struct shrink_control *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct task_group {
};

struct seccomp_filter {
};

struct of_device_id {
    char name[32];
    char type[32];
    char compatible[128];
    void * data;
};

struct cgroup_subsys {
    cgroup_subsys_state * (* css_alloc)(struct cgroup_subsys_state *);
    int (* css_online)(struct cgroup_subsys_state *);
    void (* css_offline)(struct cgroup_subsys_state *);
    void (* css_released)(struct cgroup_subsys_state *);
    void (* css_free)(struct cgroup_subsys_state *);
    void (* css_reset)(struct cgroup_subsys_state *);
    void (* css_rstat_flush)(struct cgroup_subsys_state *, int);
    int (* css_extra_stat_show)(struct seq_file *, struct cgroup_subsys_state *);
    int (* can_attach)(struct cgroup_taskset *);
    void (* cancel_attach)(struct cgroup_taskset *);
    void (* attach)(struct cgroup_taskset *);
    void (* post_attach)(void);
    int (* can_fork)(struct task_struct.conflict *);
    void (* cancel_fork)(struct task_struct.conflict *);
    void (* fork)(struct task_struct.conflict *);
    void (* exit)(struct task_struct.conflict *);
    void (* release)(struct task_struct.conflict *);
    void (* bind)(struct cgroup_subsys_state *);
    bool early_init:1;
    bool implicit_on_dfl:1;
    bool threaded:1;
    bool broken_hierarchy:1;
    bool warned_broken_hierarchy:1;
    undefined field23_0x91;
    undefined field24_0x92;
    undefined field25_0x93;
    int id;
    char * name;
    char * legacy_name;
    struct cgroup_root * root;
    struct idr css_idr;
    undefined field31_0xc8;
    undefined field32_0xc9;
    undefined field33_0xca;
    undefined field34_0xcb;
    undefined field35_0xcc;
    undefined field36_0xcd;
    undefined field37_0xce;
    undefined field38_0xcf;
    undefined field39_0xd0;
    undefined field40_0xd1;
    undefined field41_0xd2;
    undefined field42_0xd3;
    undefined field43_0xd4;
    undefined field44_0xd5;
    undefined field45_0xd6;
    undefined field46_0xd7;
    undefined field47_0xd8;
    undefined field48_0xd9;
    undefined field49_0xda;
    undefined field50_0xdb;
    undefined field51_0xdc;
    undefined field52_0xdd;
    undefined field53_0xde;
    undefined field54_0xdf;
    struct list_head cfts;
    struct cftype * dfl_cftypes;
    struct cftype * legacy_cftypes;
    uint depends_on;
    undefined field59_0x104;
    undefined field60_0x105;
    undefined field61_0x106;
    undefined field62_0x107;
};

struct audit_context {
};

struct lockref {
    u64 field_0;
};

union anon_union.conflict1862_for_field_12 {
    struct list_head d_lru;
    wait_queue_head_t * d_wait;
};

struct dentry {
    uint d_flags;
    seqcount_t d_seq;
    struct hlist_bl_node d_hash;
    struct dentry * d_parent;
    struct qstr d_name;
    struct inode * d_inode;
    uchar d_iname[32];
    struct lockref d_lockref;
    struct dentry_operations * d_op;
    struct super_block * d_sb;
    ulong d_time;
    void * d_fsdata;
    union anon_union.conflict1862_for_field_12 field_12;
    struct list_head d_child;
    struct list_head d_subdirs;
    union anon_union.conflict1887_for_d_u d_u;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct dev_pin_info {
    struct pinctrl * p;
    struct pinctrl_state * default_state;
    struct pinctrl_state * init_state;
    struct pinctrl_state * sleep_state;
    struct pinctrl_state * idle_state;
};

struct kernfs_open_file {
    struct kernfs_node * kn;
    struct file * file;
    struct seq_file * seq_file;
    void * priv;
    struct mutex mutex;
    struct mutex prealloc_mutex;
    int event;
    undefined field7_0x64;
    undefined field8_0x65;
    undefined field9_0x66;
    undefined field10_0x67;
    struct list_head list;
    char * prealloc_buf;
    size_t atomic_write_len;
    bool mmapped:1;
    bool released:1;
    undefined field16_0x89;
    undefined field17_0x8a;
    undefined field18_0x8b;
    undefined field19_0x8c;
    undefined field20_0x8d;
    undefined field21_0x8e;
    undefined field22_0x8f;
    struct vm_operations_struct * vm_ops;
};

struct irq_fwspec {
    struct fwnode_handle * fwnode;
    int param_count;
    u32 param[16];
    undefined field3_0x4c;
    undefined field4_0x4d;
    undefined field5_0x4e;
    undefined field6_0x4f;
};

struct kernel_param {
    char * name;
    struct module * mod;
    struct kernel_param_ops * ops;
    u16 perm;
    s8 level;
    u8 flags;
    undefined field6_0x1c;
    undefined field7_0x1d;
    undefined field8_0x1e;
    undefined field9_0x1f;
    union anon_union.conflictd091_for_field_6 field_6;
};

struct fwnode_reference_args {
    struct fwnode_handle * fwnode;
    uint nargs;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    u64 args[8];
};

struct mm_struct {
    struct anon_struct.conflict5770_for_field_0 field_0;
    ulong cpu_bitmap[0];
};

struct file_lock_context.conflict {
    spinlock_t.conflict flc_lock;
    struct list_head flc_flock;
    struct list_head flc_posix;
    struct list_head flc_lease;
};

struct exception_table_entry {
    int insn;
    int fixup;
};

struct quotactl_ops {
    int (* quota_on)(struct super_block *, int, int, struct path *);
    int (* quota_off)(struct super_block *, int);
    int (* quota_enable)(struct super_block *, uint);
    int (* quota_disable)(struct super_block *, uint);
    int (* quota_sync)(struct super_block *, int);
    int (* set_info)(struct super_block *, int, struct qc_info *);
    int (* get_dqblk)(struct super_block *, struct kqid, struct qc_dqblk *);
    int (* get_nextdqblk)(struct super_block *, struct kqid *, struct qc_dqblk *);
    int (* set_dqblk)(struct super_block *, struct kqid, struct qc_dqblk *);
    int (* get_state)(struct super_block *, struct qc_state *);
    int (* rm_xquota)(struct super_block *, uint);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct bdi_writeback_congested {
    ulong state;
    refcount_t refcnt;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct kstat {
    u32 result_mask;
    umode_t mode;
    undefined field2_0x6;
    undefined field3_0x7;
    uint nlink;
    uint32_t blksize;
    u64 attributes;
    u64 attributes_mask;
    u64 ino;
    dev_t dev;
    dev_t rdev;
    struct kuid_t uid;
    struct kgid_t gid;
    loff_t size;
    struct timespec64 atime;
    struct timespec64 mtime;
    struct timespec64 ctime;
    struct timespec64 btime;
    u64 blocks;
};

struct msi_desc {
};

struct ipc_namespace {
};

struct iommu_ops {
};

struct file.conflict {
    union anon_union.conflict7f49_for_f_u f_u;
    struct path.conflict f_path;
    struct inode.conflict * f_inode;
    struct file_operations.conflict * f_op;
    spinlock_t.conflict f_lock;
    enum rw_hint f_write_hint;
    undefined field6_0x4c;
    undefined field7_0x4d;
    undefined field8_0x4e;
    undefined field9_0x4f;
    atomic_long_t f_count;
    uint f_flags;
    fmode_t f_mode;
    struct mutex.conflict f_pos_lock;
    loff_t f_pos;
    struct fown_struct.conflict f_owner;
    struct cred * f_cred;
    struct file_ra_state f_ra;
    u64 f_version;
    void * private_data;
    struct list_head f_ep_links;
    struct list_head f_tfile_llink;
    struct address_space.conflict * f_mapping;
    errseq_t f_wb_err;
    undefined field24_0x134;
    undefined field25_0x135;
    undefined field26_0x136;
    undefined field27_0x137;
};

struct robust_list_head {
};

struct cgroup_taskset {
};

struct iattr.conflict {
    uint ia_valid;
    umode_t ia_mode;
    undefined field2_0x6;
    undefined field3_0x7;
    struct kuid_t ia_uid;
    struct kgid_t ia_gid;
    loff_t ia_size;
    struct timespec64 ia_atime;
    struct timespec64 ia_mtime;
    struct timespec64 ia_ctime;
    struct file.conflict * ia_file;
};

struct mtd_info {
};

struct fwnode_endpoint {
    uint port;
    uint id;
    struct fwnode_handle * local_fwnode;
};

struct subsys_private {
};

struct kobj_type {
    void (* release)(struct kobject *);
    struct sysfs_ops * sysfs_ops;
    struct attribute * * default_attrs;
    kobj_ns_type_operations * (* child_ns_type)(struct kobject *);
    void * (* namespace)(struct kobject *);
    void (* get_ownership)(struct kobject *, struct kuid_t *, struct kgid_t *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kobj_ns_type_operations {
    enum kobj_ns_type type;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    bool (* current_may_mount)(void);
    void * (* grab_current_ns)(void);
    void * (* netlink_ns)(struct sock *);
    void * (* initial_ns)(void);
    void (* drop_ns)(void *);
};

struct inode_operations {
    dentry * (* lookup)(struct inode *, struct dentry *, uint);
    char * (* get_link)(struct dentry *, struct inode *, struct delayed_call *);
    int (* permission)(struct inode *, int);
    int (* permission2)(struct vfsmount *, struct inode *, int);
    posix_acl * (* get_acl)(struct inode *, int);
    int (* readlink)(struct dentry *, char *, int);
    int (* create)(struct inode *, struct dentry *, umode_t, bool);
    int (* link)(struct dentry *, struct inode *, struct dentry *);
    int (* unlink)(struct inode *, struct dentry *);
    int (* symlink)(struct inode *, struct dentry *, char *);
    int (* mkdir)(struct inode *, struct dentry *, umode_t);
    int (* rmdir)(struct inode *, struct dentry *);
    int (* mknod)(struct inode *, struct dentry *, umode_t, dev_t);
    int (* rename)(struct inode *, struct dentry *, struct inode *, struct dentry *, uint);
    int (* setattr)(struct dentry *, struct iattr *);
    int (* setattr2)(struct vfsmount *, struct dentry *, struct iattr *);
    int (* getattr)(struct path *, struct kstat *, u32, uint);
    ssize_t (* listxattr)(struct dentry *, char *, size_t);
    int (* fiemap)(struct inode *, struct fiemap_extent_info *, u64, u64);
    int (* update_time)(struct inode *, struct timespec64 *, int);
    int (* atomic_open)(struct inode *, struct dentry *, struct file *, uint, umode_t);
    int (* tmpfile)(struct inode *, struct dentry *, umode_t);
    int (* set_acl)(struct inode *, struct posix_acl *, int);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field27_0xd8;
    undefined field28_0xd9;
    undefined field29_0xda;
    undefined field30_0xdb;
    undefined field31_0xdc;
    undefined field32_0xdd;
    undefined field33_0xde;
    undefined field34_0xdf;
    undefined field35_0xe0;
    undefined field36_0xe1;
    undefined field37_0xe2;
    undefined field38_0xe3;
    undefined field39_0xe4;
    undefined field40_0xe5;
    undefined field41_0xe6;
    undefined field42_0xe7;
    undefined field43_0xe8;
    undefined field44_0xe9;
    undefined field45_0xea;
    undefined field46_0xeb;
    undefined field47_0xec;
    undefined field48_0xed;
    undefined field49_0xee;
    undefined field50_0xef;
    undefined field51_0xf0;
    undefined field52_0xf1;
    undefined field53_0xf2;
    undefined field54_0xf3;
    undefined field55_0xf4;
    undefined field56_0xf5;
    undefined field57_0xf6;
    undefined field58_0xf7;
    undefined field59_0xf8;
    undefined field60_0xf9;
    undefined field61_0xfa;
    undefined field62_0xfb;
    undefined field63_0xfc;
    undefined field64_0xfd;
    undefined field65_0xfe;
    undefined field66_0xff;
};

struct anon_struct.conflict9b32 {
    u32 ino;
    u32 generation;
};

union kernfs_node_id {
    struct anon_struct.conflict9b32 field_0;
    u64 id;
};

struct kernfs_node {
    struct atomic_t count;
    struct atomic_t active;
    struct kernfs_node * parent;
    char * name;
    struct rb_node rb;
    void * ns;
    uint hash;
    undefined field7_0x3c;
    undefined field8_0x3d;
    undefined field9_0x3e;
    undefined field10_0x3f;
    union anon_union.conflict9b6f_for_field_7 field_7;
    void * priv;
    union kernfs_node_id id;
    ushort flags;
    umode_t mode;
    undefined field16_0x74;
    undefined field17_0x75;
    undefined field18_0x76;
    undefined field19_0x77;
    struct kernfs_iattrs * iattr;
};

struct quota_format_type.conflict {
    int qf_fmt_id;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct quota_format_ops.conflict * qf_ops;
    struct module * qf_owner;
    struct quota_format_type.conflict * qf_next;
};

struct xattr_handler {
};

struct file_lock {
    struct file_lock * fl_next;
    struct list_head fl_list;
    struct hlist_node fl_link;
    struct list_head fl_block;
    fl_owner_t fl_owner;
    uint fl_flags;
    uchar fl_type;
    undefined field7_0x45;
    undefined field8_0x46;
    undefined field9_0x47;
    uint fl_pid;
    int fl_link_cpu;
    wait_queue_head_t fl_wait;
    struct file * fl_file;
    loff_t fl_start;
    loff_t fl_end;
    struct fasync_struct * fl_fasync;
    ulong fl_break_time;
    ulong fl_downgrade_time;
    struct file_lock_operations * fl_ops;
    struct lock_manager_operations * fl_lmops;
    union anon_union.conflict82f6_for_fl_u fl_u;
    struct list_head android_reserved1;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct task_struct.conflict {
    struct thread_info.conflict thread_info;
    long state;
    void * stack;
    struct atomic_t usage;
    uint flags;
    uint ptrace;
    undefined field6_0x34;
    undefined field7_0x35;
    undefined field8_0x36;
    undefined field9_0x37;
    struct llist_node wake_entry;
    int on_cpu;
    uint cpu;
    uint wakee_flips;
    undefined field14_0x4c;
    undefined field15_0x4d;
    undefined field16_0x4e;
    undefined field17_0x4f;
    ulong wakee_flip_decay_ts;
    struct task_struct.conflict * last_wakee;
    int recent_used_cpu;
    int wake_cpu;
    int on_rq;
    int prio;
    int static_prio;
    int normal_prio;
    uint rt_priority;
    undefined field27_0x7c;
    undefined field28_0x7d;
    undefined field29_0x7e;
    undefined field30_0x7f;
    struct sched_class * sched_class;
    undefined field32_0x88;
    undefined field33_0x89;
    undefined field34_0x8a;
    undefined field35_0x8b;
    undefined field36_0x8c;
    undefined field37_0x8d;
    undefined field38_0x8e;
    undefined field39_0x8f;
    undefined field40_0x90;
    undefined field41_0x91;
    undefined field42_0x92;
    undefined field43_0x93;
    undefined field44_0x94;
    undefined field45_0x95;
    undefined field46_0x96;
    undefined field47_0x97;
    undefined field48_0x98;
    undefined field49_0x99;
    undefined field50_0x9a;
    undefined field51_0x9b;
    undefined field52_0x9c;
    undefined field53_0x9d;
    undefined field54_0x9e;
    undefined field55_0x9f;
    undefined field56_0xa0;
    undefined field57_0xa1;
    undefined field58_0xa2;
    undefined field59_0xa3;
    undefined field60_0xa4;
    undefined field61_0xa5;
    undefined field62_0xa6;
    undefined field63_0xa7;
    undefined field64_0xa8;
    undefined field65_0xa9;
    undefined field66_0xaa;
    undefined field67_0xab;
    undefined field68_0xac;
    undefined field69_0xad;
    undefined field70_0xae;
    undefined field71_0xaf;
    undefined field72_0xb0;
    undefined field73_0xb1;
    undefined field74_0xb2;
    undefined field75_0xb3;
    undefined field76_0xb4;
    undefined field77_0xb5;
    undefined field78_0xb6;
    undefined field79_0xb7;
    undefined field80_0xb8;
    undefined field81_0xb9;
    undefined field82_0xba;
    undefined field83_0xbb;
    undefined field84_0xbc;
    undefined field85_0xbd;
    undefined field86_0xbe;
    undefined field87_0xbf;
    struct sched_entity se;
    struct sched_rt_entity rt;
    u64 last_sleep_ts;
    int boost;
    undefined field92_0x31c;
    undefined field93_0x31d;
    undefined field94_0x31e;
    undefined field95_0x31f;
    u64 boost_period;
    u64 boost_expires;
    struct task_group * sched_task_group;
    struct sched_dl_entity dl;
    uint btrace_seq;
    uint policy;
    int nr_cpus_allowed;
    undefined field103_0x42c;
    undefined field104_0x42d;
    undefined field105_0x42e;
    undefined field106_0x42f;
    cpumask_t cpus_allowed;
    cpumask_t cpus_requested;
    struct sched_info sched_info;
    struct list_head tasks;
    struct plist_node pushable_tasks;
    struct rb_node pushable_dl_tasks;
    struct mm_struct.conflict * mm;
    struct mm_struct.conflict * active_mm;
    struct vmacache vmacache;
    struct task_rss_stat rss_stat;
    int exit_state;
    int exit_code;
    int exit_signal;
    int pdeath_signal;
    ulong jobctl;
    uint personality;
    uint sched_reset_on_fork:1;
    uint sched_contributes_to_load:1;
    uint sched_migrated:1;
    uint sched_remote_wakeup:1;
    undefined field127_0x51d;
    undefined field128_0x51e;
    undefined field129_0x51f;
    uint in_execve:1;
    uint in_iowait:1;
    uint no_cgroup_migration:1;
    undefined field133_0x521;
    undefined field134_0x522;
    undefined field135_0x523;
    undefined field136_0x524;
    undefined field137_0x525;
    undefined field138_0x526;
    undefined field139_0x527;
    ulong atomic_flags;
    struct restart_block restart_block;
    pid_t pid;
    pid_t tgid;
    ulong stack_canary;
    struct task_struct.conflict * real_parent;
    struct task_struct.conflict * parent;
    struct list_head children;
    struct list_head sibling;
    struct task_struct.conflict * group_leader;
    struct list_head ptraced;
    struct list_head ptrace_entry;
    struct pid.conflict * thread_pid;
    struct hlist_node pid_links[4];
    struct list_head thread_group;
    struct list_head thread_node;
    struct completion.conflict * vfork_done;
    int * set_child_tid;
    int * clear_child_tid;
    u64 utime;
    u64 stime;
    u64 gtime;
    struct prev_cputime.conflict prev_cputime;
    ulong nvcsw;
    ulong nivcsw;
    u64 start_time;
    u64 real_start_time;
    ulong min_flt;
    ulong maj_flt;
    struct task_cputime cputime_expires;
    struct list_head cpu_timers[3];
    struct cred * ptracer_cred;
    struct cred * real_cred;
    struct cred * cred;
    char comm[16];
    struct nameidata * nameidata;
    struct sysv_sem sysvsem;
    struct sysv_shm sysvshm;
    struct fs_struct * fs;
    struct files_struct * files;
    struct nsproxy * nsproxy;
    struct signal_struct * signal;
    struct sighand_struct * sighand;
    struct sigset_t blocked;
    struct sigset_t real_blocked;
    struct sigset_t saved_sigmask;
    struct sigpending pending;
    ulong sas_ss_sp;
    size_t sas_ss_size;
    uint sas_ss_flags;
    undefined field190_0x7b4;
    undefined field191_0x7b5;
    undefined field192_0x7b6;
    undefined field193_0x7b7;
    struct callback_head * task_works;
    struct audit_context * audit_context;
    struct seccomp seccomp;
    u64 parent_exec_id;
    u64 self_exec_id;
    spinlock_t.conflict alloc_lock;
    raw_spinlock_t.conflict pi_lock;
    struct wake_q_node wake_q;
    struct rb_root_cached pi_waiters;
    struct task_struct.conflict * pi_top_task;
    struct rt_mutex_waiter * pi_blocked_on;
    void * journal_info;
    struct bio_list * bio_list;
    struct blk_plug * plug;
    struct reclaim_state * reclaim_state;
    struct backing_dev_info * backing_dev_info;
    struct io_context * io_context;
    ulong ptrace_message;
    siginfo_t * last_siginfo;
    struct task_io_accounting.conflict ioac;
    struct nodemask_t mems_allowed;
    seqcount_t mems_allowed_seq;
    int cpuset_mem_spread_rotor;
    int cpuset_slab_spread_rotor;
    undefined field218_0x894;
    undefined field219_0x895;
    undefined field220_0x896;
    undefined field221_0x897;
    struct css_set * cgroups;
    struct list_head cg_list;
    struct robust_list_head * robust_list;
    struct compat_robust_list_head * compat_robust_list;
    struct list_head pi_state_list;
    struct futex_pi_state * pi_state_cache;
    struct perf_event_context * perf_event_ctxp[2];
    struct mutex.conflict perf_event_mutex;
    struct list_head perf_event_list;
    struct rseq * rseq;
    u32 rseq_len;
    u32 rseq_sig;
    ulong rseq_event_mask;
    struct tlbflush_unmap_batch tlb_ubc;
    struct callback_head rcu;
    struct pipe_inode_info * splice_pipe;
    struct page_frag task_frag;
    int nr_dirtied;
    int nr_dirtied_pause;
    ulong dirty_paused_when;
    u64 timer_slack_ns;
    u64 default_timer_slack_ns;
    int curr_ret_stack;
    int curr_ret_depth;
    struct ftrace_ret_stack * ret_stack;
    ulonglong ftrace_timestamp;
    struct atomic_t trace_overrun;
    struct atomic_t tracing_graph_pause;
    ulong trace;
    ulong trace_recursion;
    struct uprobe_task * utask;
    int pagefault_disabled;
    undefined field254_0x9cc;
    undefined field255_0x9cd;
    undefined field256_0x9ce;
    undefined field257_0x9cf;
    struct task_struct.conflict * oom_reaper_list;
    struct vm_struct * stack_vm_area;
    struct atomic_t stack_refcount;
    undefined field261_0x9e4;
    undefined field262_0x9e5;
    undefined field263_0x9e6;
    undefined field264_0x9e7;
    union anon_union.conflict45eb_for_field_183 field_163;
    union anon_union.conflict462a_for_field_184 field_164;
    struct mutex.conflict futex_exit_mutex;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
    struct thread_struct thread;
    undefined field271_0xe10;
    undefined field272_0xe11;
    undefined field273_0xe12;
    undefined field274_0xe13;
    undefined field275_0xe14;
    undefined field276_0xe15;
    undefined field277_0xe16;
    undefined field278_0xe17;
    undefined field279_0xe18;
    undefined field280_0xe19;
    undefined field281_0xe1a;
    undefined field282_0xe1b;
    undefined field283_0xe1c;
    undefined field284_0xe1d;
    undefined field285_0xe1e;
    undefined field286_0xe1f;
    undefined field287_0xe20;
    undefined field288_0xe21;
    undefined field289_0xe22;
    undefined field290_0xe23;
    undefined field291_0xe24;
    undefined field292_0xe25;
    undefined field293_0xe26;
    undefined field294_0xe27;
    undefined field295_0xe28;
    undefined field296_0xe29;
    undefined field297_0xe2a;
    undefined field298_0xe2b;
    undefined field299_0xe2c;
    undefined field300_0xe2d;
    undefined field301_0xe2e;
    undefined field302_0xe2f;
    undefined field303_0xe30;
    undefined field304_0xe31;
    undefined field305_0xe32;
    undefined field306_0xe33;
    undefined field307_0xe34;
    undefined field308_0xe35;
    undefined field309_0xe36;
    undefined field310_0xe37;
    undefined field311_0xe38;
    undefined field312_0xe39;
    undefined field313_0xe3a;
    undefined field314_0xe3b;
    undefined field315_0xe3c;
    undefined field316_0xe3d;
    undefined field317_0xe3e;
    undefined field318_0xe3f;
};

struct device_type {
    char * name;
    struct attribute_group * * groups;
    int (* uevent)(struct device *, struct kobj_uevent_env *);
    char * (* devnode)(struct device *, umode_t *, struct kuid_t *, struct kgid_t *);
    void (* release)(struct device *);
    struct dev_pm_ops * pm;
};

struct block_device {
    dev_t bd_dev;
    int bd_openers;
    struct inode * bd_inode;
    struct super_block * bd_super;
    struct mutex bd_mutex;
    void * bd_claiming;
    void * bd_holder;
    int bd_holders;
    bool bd_write_holder;
    undefined field9_0x4d;
    undefined field10_0x4e;
    undefined field11_0x4f;
    struct list_head bd_holder_disks;
    struct block_device * bd_contains;
    uint bd_block_size;
    u8 bd_partno;
    undefined field16_0x6d;
    undefined field17_0x6e;
    undefined field18_0x6f;
    struct hd_struct * bd_part;
    uint bd_part_count;
    int bd_invalidated;
    struct gendisk * bd_disk;
    struct request_queue * bd_queue;
    struct backing_dev_info * bd_bdi;
    struct list_head bd_list;
    ulong bd_private;
    int bd_fsfreeze_count;
    undefined field28_0xb4;
    undefined field29_0xb5;
    undefined field30_0xb6;
    undefined field31_0xb7;
    struct mutex bd_fsfreeze_mutex;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct list_lru_node.conflict {
    spinlock_t.conflict lock;
    struct list_lru_one lru;
    long nr_items;
    undefined field3_0x38;
    undefined field4_0x39;
    undefined field5_0x3a;
    undefined field6_0x3b;
    undefined field7_0x3c;
    undefined field8_0x3d;
    undefined field9_0x3e;
    undefined field10_0x3f;
};

struct uts_namespace {
};

struct quota_format_ops.conflict {
    int (* check_quota_file)(struct super_block.conflict *, int);
    int (* read_file_info)(struct super_block.conflict *, int);
    int (* write_file_info)(struct super_block.conflict *, int);
    int (* free_file_info)(struct super_block.conflict *, int);
    int (* read_dqblk)(struct dquot.conflict *);
    int (* commit_dqblk)(struct dquot.conflict *);
    int (* release_dqblk)(struct dquot.conflict *);
    int (* get_next_id)(struct super_block.conflict *, struct kqid *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct kernel_param_ops {
    uint flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    int (* set)(char *, struct kernel_param *);
    int (* get)(char *, struct kernel_param *);
    void (* free)(void *);
};

struct device_private {
};

struct pinctrl {
};

struct kernfs_ops {
    int (* open)(struct kernfs_open_file *);
    void (* release)(struct kernfs_open_file *);
    int (* seq_show)(struct seq_file *, void *);
    void * (* seq_start)(struct seq_file *, loff_t *);
    void * (* seq_next)(struct seq_file *, void *, loff_t *);
    void (* seq_stop)(struct seq_file *, void *);
    ssize_t (* read)(struct kernfs_open_file *, char *, size_t, loff_t);
    size_t atomic_write_len;
    bool prealloc;
    undefined field9_0x41;
    undefined field10_0x42;
    undefined field11_0x43;
    undefined field12_0x44;
    undefined field13_0x45;
    undefined field14_0x46;
    undefined field15_0x47;
    ssize_t (* write)(struct kernfs_open_file *, char *, size_t, loff_t);
    __poll_t (* poll)(struct kernfs_open_file *, struct poll_table_struct *);
    int (* mmap)(struct kernfs_open_file *, struct vm_area_struct *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct cgroup_root {
    struct kernfs_root * kf_root;
    uint subsys_mask;
    int hierarchy_id;
    struct cgroup cgrp;
    int cgrp_ancestor_id_storage;
    struct atomic_t nr_cgrps;
    struct list_head root_list;
    uint flags;
    undefined field8_0x3ec;
    undefined field9_0x3ed;
    undefined field10_0x3ee;
    undefined field11_0x3ef;
    struct idr cgroup_idr;
    undefined field13_0x408;
    undefined field14_0x409;
    undefined field15_0x40a;
    undefined field16_0x40b;
    undefined field17_0x40c;
    undefined field18_0x40d;
    undefined field19_0x40e;
    undefined field20_0x40f;
    undefined field21_0x410;
    undefined field22_0x411;
    undefined field23_0x412;
    undefined field24_0x413;
    undefined field25_0x414;
    undefined field26_0x415;
    undefined field27_0x416;
    undefined field28_0x417;
    undefined field29_0x418;
    undefined field30_0x419;
    undefined field31_0x41a;
    undefined field32_0x41b;
    undefined field33_0x41c;
    undefined field34_0x41d;
    undefined field35_0x41e;
    undefined field36_0x41f;
    char release_agent_path[4096];
    char name[64];
};

struct rt_mutex_waiter {
};

struct task_delay_info {
};

struct ftrace_ret_stack {
};

struct radix_tree_node {
    uchar shift;
    uchar offset;
    uchar count;
    uchar exceptional;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct radix_tree_node * parent;
    struct radix_tree_root * root;
    union anon_union.conflict4d9b_for_field_6 field_6;
    void * slots[64];
    ulong tags[3][1];
};

struct list_lru_memcg {
    struct callback_head rcu;
    struct list_lru_one * lru[0];
};

struct vm_operations_struct {
    void (* open)(struct vm_area_struct *);
    void (* close)(struct vm_area_struct *);
    int (* split)(struct vm_area_struct *, ulong);
    int (* mremap)(struct vm_area_struct *);
    vm_fault_t (* fault)(struct vm_fault *);
    vm_fault_t (* huge_fault)(struct vm_fault *, enum page_entry_size);
    void (* map_pages)(struct vm_fault *, ulong, ulong);
    ulong (* pagesize)(struct vm_area_struct *);
    vm_fault_t (* page_mkwrite)(struct vm_fault *);
    vm_fault_t (* pfn_mkwrite)(struct vm_fault *);
    int (* access)(struct vm_area_struct *, ulong, void *, int, int);
    char * (* name)(struct vm_area_struct *);
    page * (* find_special_page)(struct vm_area_struct *, ulong);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct irqaction {
    irqreturn_t (* handler)(int, void *);
    void * dev_id;
    void * percpu_dev_id;
    struct irqaction * next;
    irqreturn_t (* thread_fn)(int, void *);
    struct task_struct.conflict * thread;
    struct irqaction * secondary;
    uint irq;
    uint flags;
    ulong thread_flags;
    ulong thread_mask;
    char * name;
    struct proc_dir_entry * dir;
    undefined field13_0x60;
    undefined field14_0x61;
    undefined field15_0x62;
    undefined field16_0x63;
    undefined field17_0x64;
    undefined field18_0x65;
    undefined field19_0x66;
    undefined field20_0x67;
    undefined field21_0x68;
    undefined field22_0x69;
    undefined field23_0x6a;
    undefined field24_0x6b;
    undefined field25_0x6c;
    undefined field26_0x6d;
    undefined field27_0x6e;
    undefined field28_0x6f;
    undefined field29_0x70;
    undefined field30_0x71;
    undefined field31_0x72;
    undefined field32_0x73;
    undefined field33_0x74;
    undefined field34_0x75;
    undefined field35_0x76;
    undefined field36_0x77;
    undefined field37_0x78;
    undefined field38_0x79;
    undefined field39_0x7a;
    undefined field40_0x7b;
    undefined field41_0x7c;
    undefined field42_0x7d;
    undefined field43_0x7e;
    undefined field44_0x7f;
};

struct delayed_call {
    void (* fn)(void *);
    void * arg;
};

struct elf64_sym {
    Elf64_Word st_name;
    uchar st_info;
    uchar st_other;
    Elf64_Half st_shndx;
    Elf64_Addr st_value;
    Elf64_Xword st_size;
};

struct nlm_lockowner {
};

struct pid_namespace {
};

struct export_operations {
};

struct gendisk {
};

struct irq_chip_generic {
    raw_spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    void * reg_base;
    u32 (* reg_readl)(void *);
    void (* reg_writel)(u32, void *);
    void (* suspend)(struct irq_chip_generic *);
    void (* resume)(struct irq_chip_generic *);
    uint irq_base;
    uint irq_cnt;
    u32 mask_cache;
    u32 type_cache;
    u32 polarity_cache;
    u32 wake_enabled;
    u32 wake_active;
    uint num_ct;
    void * private;
    ulong installed;
    ulong unused;
    struct irq_domain.conflict * domain;
    struct list_head list;
    struct irq_chip_type chip_types[0];
};

struct io_cq {
    struct request_queue * q;
    struct io_context * ioc;
    union anon_union.conflict5e2c_for_field_2 field_2;
    union anon_union.conflict5e4b_for_field_3 field_3;
    uint flags;
    undefined field5_0x34;
    undefined field6_0x35;
    undefined field7_0x36;
    undefined field8_0x37;
};

struct block_device.conflict1 {
    dev_t bd_dev;
    int bd_openers;
    struct inode * bd_inode;
    struct super_block * bd_super;
    struct mutex bd_mutex;
    undefined field5_0x38;
    undefined field6_0x39;
    undefined field7_0x3a;
    undefined field8_0x3b;
    undefined field9_0x3c;
    undefined field10_0x3d;
    undefined field11_0x3e;
    undefined field12_0x3f;
    undefined field13_0x40;
    undefined field14_0x41;
    undefined field15_0x42;
    undefined field16_0x43;
    undefined field17_0x44;
    undefined field18_0x45;
    undefined field19_0x46;
    undefined field20_0x47;
    undefined field21_0x48;
    undefined field22_0x49;
    undefined field23_0x4a;
    undefined field24_0x4b;
    undefined field25_0x4c;
    undefined field26_0x4d;
    undefined field27_0x4e;
    undefined field28_0x4f;
    void * bd_claiming;
    void * bd_holder;
    int bd_holders;
    bool bd_write_holder;
    undefined field33_0x65;
    undefined field34_0x66;
    undefined field35_0x67;
    struct list_head bd_holder_disks;
    struct block_device.conflict1 * bd_contains;
    uint bd_block_size;
    u8 bd_partno;
    undefined field40_0x85;
    undefined field41_0x86;
    undefined field42_0x87;
    struct hd_struct * bd_part;
    uint bd_part_count;
    int bd_invalidated;
    struct gendisk * bd_disk;
    struct request_queue * bd_queue;
    struct backing_dev_info * bd_bdi;
    struct list_head bd_list;
    ulong bd_private;
    int bd_fsfreeze_count;
    undefined field52_0xcc;
    undefined field53_0xcd;
    undefined field54_0xce;
    undefined field55_0xcf;
    struct mutex bd_fsfreeze_mutex;
    undefined field57_0xf0;
    undefined field58_0xf1;
    undefined field59_0xf2;
    undefined field60_0xf3;
    undefined field61_0xf4;
    undefined field62_0xf5;
    undefined field63_0xf6;
    undefined field64_0xf7;
    undefined field65_0xf8;
    undefined field66_0xf9;
    undefined field67_0xfa;
    undefined field68_0xfb;
    undefined field69_0xfc;
    undefined field70_0xfd;
    undefined field71_0xfe;
    undefined field72_0xff;
    undefined field73_0x100;
    undefined field74_0x101;
    undefined field75_0x102;
    undefined field76_0x103;
    undefined field77_0x104;
    undefined field78_0x105;
    undefined field79_0x106;
    undefined field80_0x107;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kernfs_iattrs {
};

struct dquot.conflict {
    struct hlist_node dq_hash;
    struct list_head dq_inuse;
    struct list_head dq_free;
    struct list_head dq_dirty;
    struct mutex.conflict dq_lock;
    spinlock_t.conflict dq_dqb_lock;
    struct atomic_t dq_count;
    undefined field7_0x94;
    undefined field8_0x95;
    undefined field9_0x96;
    undefined field10_0x97;
    struct super_block.conflict * dq_sb;
    struct kqid dq_id;
    loff_t dq_off;
    ulong dq_flags;
    struct mem_dqblk dq_dqb;
};

struct css_set {
    struct cgroup_subsys_state * subsys[5];
    refcount_t refcount;
    undefined field2_0x2c;
    undefined field3_0x2d;
    undefined field4_0x2e;
    undefined field5_0x2f;
    struct css_set * dom_cset;
    struct cgroup * dfl_cgrp;
    int nr_tasks;
    undefined field9_0x44;
    undefined field10_0x45;
    undefined field11_0x46;
    undefined field12_0x47;
    struct list_head tasks;
    struct list_head mg_tasks;
    struct list_head dying_tasks;
    struct list_head task_iters;
    struct list_head e_cset_node[5];
    struct list_head threaded_csets;
    struct list_head threaded_csets_node;
    struct hlist_node hlist;
    struct list_head cgrp_links;
    struct list_head mg_preload_node;
    struct list_head mg_node;
    struct cgroup * mg_src_cgrp;
    struct cgroup * mg_dst_cgrp;
    struct css_set * mg_dst_cset;
    bool dead;
    undefined field28_0x151;
    undefined field29_0x152;
    undefined field30_0x153;
    undefined field31_0x154;
    undefined field32_0x155;
    undefined field33_0x156;
    undefined field34_0x157;
    struct callback_head callback_head;
};

struct irq_domain.conflict {
    struct list_head link;
    char * name;
    struct irq_domain_ops.conflict * ops;
    void * host_data;
    uint flags;
    uint mapcount;
    struct fwnode_handle * fwnode;
    enum irq_domain_bus_token bus_token;
    undefined field8_0x3c;
    undefined field9_0x3d;
    undefined field10_0x3e;
    undefined field11_0x3f;
    struct irq_domain_chip_generic * gc;
    struct irq_domain.conflict * parent;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    irq_hw_number_t hwirq_max;
    uint revmap_direct_max_irq;
    uint revmap_size;
    struct radix_tree_root revmap_tree;
    undefined field22_0x90;
    undefined field23_0x91;
    undefined field24_0x92;
    undefined field25_0x93;
    undefined field26_0x94;
    undefined field27_0x95;
    undefined field28_0x96;
    undefined field29_0x97;
    undefined field30_0x98;
    undefined field31_0x99;
    undefined field32_0x9a;
    undefined field33_0x9b;
    undefined field34_0x9c;
    undefined field35_0x9d;
    undefined field36_0x9e;
    undefined field37_0x9f;
    undefined field38_0xa0;
    undefined field39_0xa1;
    undefined field40_0xa2;
    undefined field41_0xa3;
    undefined field42_0xa4;
    undefined field43_0xa5;
    undefined field44_0xa6;
    undefined field45_0xa7;
    struct mutex revmap_tree_mutex;
    undefined field47_0xc8;
    undefined field48_0xc9;
    undefined field49_0xca;
    undefined field50_0xcb;
    undefined field51_0xcc;
    undefined field52_0xcd;
    undefined field53_0xce;
    undefined field54_0xcf;
    undefined field55_0xd0;
    undefined field56_0xd1;
    undefined field57_0xd2;
    undefined field58_0xd3;
    undefined field59_0xd4;
    undefined field60_0xd5;
    undefined field61_0xd6;
    undefined field62_0xd7;
    undefined field63_0xd8;
    undefined field64_0xd9;
    undefined field65_0xda;
    undefined field66_0xdb;
    undefined field67_0xdc;
    undefined field68_0xdd;
    undefined field69_0xde;
    undefined field70_0xdf;
    uint linear_revmap[0];
};

struct fasync_struct {
    struct rwlock_t fa_lock;
    int magic;
    int fa_fd;
    struct fasync_struct * fa_next;
    struct file * fa_file;
    struct callback_head fa_rcu;
};

struct driver_private {
};

struct file_lock.conflict {
    struct file_lock.conflict * fl_next;
    struct list_head fl_list;
    struct hlist_node fl_link;
    struct list_head fl_block;
    fl_owner_t fl_owner;
    uint fl_flags;
    uchar fl_type;
    undefined field7_0x45;
    undefined field8_0x46;
    undefined field9_0x47;
    uint fl_pid;
    int fl_link_cpu;
    wait_queue_head_t.conflict fl_wait;
    struct file.conflict * fl_file;
    loff_t fl_start;
    loff_t fl_end;
    struct fasync_struct.conflict * fl_fasync;
    ulong fl_break_time;
    ulong fl_downgrade_time;
    struct file_lock_operations.conflict * fl_ops;
    struct lock_manager_operations.conflict * fl_lmops;
    union anon_union.conflict82f6_for_fl_u fl_u;
    struct list_head android_reserved1;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct io_cq.conflict {
    struct request_queue * q;
    struct io_context.conflict * ioc;
    union anon_union.conflict5e2c_for_field_2 field_2;
    union anon_union.conflict5e4b_for_field_3 field_3;
    uint flags;
    undefined field5_0x34;
    undefined field6_0x35;
    undefined field7_0x36;
    undefined field8_0x37;
};

struct sock {
};

struct pinctrl_state {
};

struct pm_subsys_data.conflict {
    spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    uint refcount;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    struct list_head clock_list;
    struct pm_domain_data * domain_data;
};

struct acpi_device_id {
    __u8 id[9];
    undefined field1_0x9;
    undefined field2_0xa;
    undefined field3_0xb;
    undefined field4_0xc;
    undefined field5_0xd;
    undefined field6_0xe;
    undefined field7_0xf;
    kernel_ulong_t driver_data;
    __u32 cls;
    __u32 cls_msk;
};

typedef struct cpumask cpumask_var_t[1];

typedef struct rkf_waveform rkf_waveform, *Prkf_waveform;

struct rkf_waveform {
    int length;
    char format[16];
    char version[16];
    char timeandday[16];
    char panel_name[16];
    char panel_info[16];
    char full_version[64];
    char reset_temp_list[64];
    char gc16_temp_list[64];
    char gl16_temp_list[64];
    char glr16_temp_list[64];
    char gld16_temp_list[64];
    char du_temp_list[64];
    char a2_temp_list[64];
    uint reset_list[64];
    uint gc16_list[64];
    uint gl16_list[64];
    uint glr16_list[64];
    uint gld16_list[64];
    uint du_list[64];
    uint a2_list[64];
};

typedef enum rkf_waveform_type {
    RKF_WF_RESET=0,
    RKF_WF_DU=1,
    RKF_WF_GC16=2,
    RKF_WF_GL16=3,
    RKF_WF_GLR16=4,
    RKF_WF_GLD16=5,
    RKF_WF_A2=6
} rkf_waveform_type;

typedef union anon_union.conflict1e15b anon_union.conflict1e15b, *Panon_union.conflict1e15b;

union anon_union.conflict1e15b {
    struct anon_struct.conflict1e137 field_0;
    u64 hash_len;
};

typedef union anon_union.conflict1862 anon_union.conflict1862, *Panon_union.conflict1862;

union anon_union.conflict1862 {
    struct list_head d_lru;
    wait_queue_head_t * d_wait;
};

typedef union anon_union.conflict2152 anon_union.conflict2152, *Panon_union.conflict2152;

union anon_union.conflict2152 {
    void (* d_canonical_path)(struct path *, struct path *);
    struct anon_struct.conflict45cf field_1;
    union anon_union.conflict45e6 field_2;
};

typedef union anon_union.conflict1887 anon_union.conflict1887, *Panon_union.conflict1887;

union anon_union.conflict1887 {
    struct hlist_node d_alias;
    struct hlist_bl_node d_in_lookup_hash;
    struct callback_head d_rcu;
};

typedef union anon_union.conflict17a5 anon_union.conflict17a5, *Panon_union.conflict17a5;

union anon_union.conflict17a5 {
    undefined1 field_0; // Data type larger than union's declared size: /DWARF/_UNCATEGORIZED_/anon_struct.conflict5094
pack(disabled)
Structure anon_struct.conflict5094 {
   0   list_head   16   lru   ""
   16   address_space *   8   mapping   ""
   24   ulong   8   index   ""
   32   ulong   8   private   ""
}
Size = 40   Actual Alignment = 1

    u64 hash_len;
};

typedef struct dentry_stat_t dentry_stat_t, *Pdentry_stat_t;

struct dentry_stat_t {
    long nr_dentry;
    long nr_unused;
    long age_limit;
    long want_pages;
    long dummy[2];
};

typedef union anon_union.conflict1eaa8 anon_union.conflict1eaa8, *Panon_union.conflict1eaa8;

union anon_union.conflict1eaa8 {
    void (* d_canonical_path)(struct path.conflict *, struct path.conflict *);
    struct anon_struct.conflict45cf field_1;
    undefined1 field_2; // Data type larger than union's declared size: /DWARF/_UNCATEGORIZED_/anon_union.conflict179d5
pack(disabled)
Union anon_union.conflict179d5 {
   0   int[28]   112   _pad   ""
   0   anon_struct.conflict177f2   8   _kill   ""
   0   anon_struct.conflict18715   16   _timer   ""
   0   anon_struct.conflict39e2   16   _rt   ""
   0   anon_struct.conflict3a0f   32   _sigchld   ""
   0   anon_struct.conflict18715   16   _sigfault   ""
   0   anon_struct.conflict18715   16   _sigpoll   ""
   0   anon_struct.conflict3b18   16   _sigsys   ""
}
Size = 112   Actual Alignment = 1

};

typedef union anon_union.conflict1e1a2 anon_union.conflict1e1a2, *Panon_union.conflict1e1a2;

union anon_union.conflict1e1a2 {
    struct list_head d_lru;
    wait_queue_head_t.conflict * d_wait;
};

typedef union anon_union.conflict4f5a anon_union.conflict4f5a, *Panon_union.conflict4f5a;

union anon_union.conflict4f5a {
    struct anon_struct.conflict4f18 field_0;
    struct anon_struct.conflict4f39 field_1;
};

typedef union anon_union.conflictd4b anon_union.conflictd4b, *Panon_union.conflictd4b;

union anon_union.conflictd4b {
    struct atomic_t val;
    struct anon_struct.conflictd09 field_1;
    struct anon_struct.conflictd2a field_2;
};

typedef struct taint_flag taint_flag, *Ptaint_flag;

struct taint_flag {
    char c_true;
    char c_false;
    bool module;
};

typedef enum system_states {
    SYSTEM_BOOTING=0,
    SYSTEM_SCHEDULING=1,
    SYSTEM_RUNNING=2,
    SYSTEM_HALT=3,
    SYSTEM_POWER_OFF=4,
    SYSTEM_RESTART=5,
    SYSTEM_SUSPEND=6
} system_states;

typedef struct atomic_notifier_head atomic_notifier_head, *Patomic_notifier_head;

typedef struct notifier_block notifier_block, *Pnotifier_block;

struct atomic_notifier_head {
    spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct notifier_block * head;
};

struct notifier_block {
    int (* notifier_call)(struct notifier_block *, ulong, void *);
    struct notifier_block * next;
    int priority;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

typedef enum anon_enum_64.conflict324e {
    WORK_STRUCT_WQ_DATA_MASK=-256,
    WORK_STRUCT_FLAG_MASK=-1,
    WORK_STRUCT_PENDING_BIT=0,
    WORK_STRUCT_STATIC=0,
    WORK_BUSY_PENDING=1,
    WORK_OFFQ_FLAG_BITS=1,
    WORK_STRUCT_DELAYED_BIT=1,
    WORK_STRUCT_PENDING=1,
    WORK_BUSY_RUNNING=2,
    WORK_STRUCT_DELAYED=2,
    WORK_STRUCT_PWQ_BIT=2,
    WORK_STRUCT_LINKED_BIT=3,
    WORK_OFFQ_FLAG_BASE=4,
    WORK_STRUCT_COLOR_BITS=4,
    WORK_STRUCT_COLOR_SHIFT=4,
    WORK_STRUCT_PWQ=4,
    __WORK_OFFQ_CANCELING=4,
    WORK_OFFQ_POOL_SHIFT=5,
    WORK_CPU_UNBOUND=8,
    WORK_STRUCT_FLAG_BITS=8,
    WORK_STRUCT_LINKED=8,
    WORK_NO_COLOR=15,
    WORK_NR_COLORS=15,
    WORK_OFFQ_CANCELING=16,
    WORKER_DESC_LEN=24,
    WORK_OFFQ_POOL_BITS=31,
    WORK_OFFQ_LEFT=59,
    WORK_OFFQ_POOL_NONE=2147483647,
    WORK_STRUCT_NO_POOL=68719476704
} anon_enum_64.conflict324e;

typedef union anon_union.conflict3f4e anon_union.conflict3f4e, *Panon_union.conflict3f4e;

union anon_union.conflict3f4e {
    __u64 ptr64;
    __u64 ptr;
};

typedef enum rseq_cs_flags_bit {
    RSEQ_CS_FLAG_NO_RESTART_ON_PREEMPT_BIT=0,
    RSEQ_CS_FLAG_NO_RESTART_ON_SIGNAL_BIT=1,
    RSEQ_CS_FLAG_NO_RESTART_ON_MIGRATE_BIT=2
} rseq_cs_flags_bit;

typedef ulong __kernel_ulong_t;

typedef __kernel_ulong_t __kernel_size_t;

typedef enum hrtimer_base_type {
    HRTIMER_BASE_MONOTONIC=0,
    HRTIMER_BASE_REALTIME=1,
    HRTIMER_BASE_BOOTTIME=2,
    HRTIMER_BASE_TAI=3,
    HRTIMER_BASE_MONOTONIC_SOFT=4,
    HRTIMER_BASE_REALTIME_SOFT=5,
    HRTIMER_BASE_BOOTTIME_SOFT=6,
    HRTIMER_BASE_TAI_SOFT=7,
    HRTIMER_MAX_CLOCK_BASES=8
} hrtimer_base_type;

typedef struct dev_pm_info.conflict2 dev_pm_info.conflict2, *Pdev_pm_info.conflict2;

typedef struct wakeup_source.conflict2 wakeup_source.conflict2, *Pwakeup_source.conflict2;

typedef struct pm_subsys_data.conflict1 pm_subsys_data.conflict1, *Ppm_subsys_data.conflict1;

struct dev_pm_info.conflict2 {
    pm_message_t power_state;
    uint can_wakeup:1;
    uint async_suspend:1;
    bool in_dpm_list:1;
    bool is_prepared:1;
    bool is_suspended:1;
    bool is_noirq_suspended:1;
    bool is_late_suspended:1;
    bool no_pm:1;
    bool early_init:1;
    bool direct_complete:1;
    undefined field11_0x6;
    undefined field12_0x7;
    u32 driver_flags;
    undefined field14_0xc;
    undefined field15_0xd;
    undefined field16_0xe;
    undefined field17_0xf;
    spinlock_t.conflict lock;
    struct list_head entry;
    struct completion.conflict completion;
    struct wakeup_source.conflict2 * wakeup;
    bool wakeup_path:1;
    bool syscore:1;
    bool no_pm_callbacks:1;
    uint must_resume:1;
    uint may_skip_resume:1;
    undefined field27_0x71;
    undefined field28_0x72;
    undefined field29_0x73;
    undefined field30_0x74;
    undefined field31_0x75;
    undefined field32_0x76;
    undefined field33_0x77;
    struct timer_list suspend_timer;
    ulong timer_expires;
    struct work_struct work;
    wait_queue_head_t.conflict wait_queue;
    struct wake_irq * wakeirq;
    struct atomic_t usage_count;
    struct atomic_t child_count;
    uint disable_depth:3;
    uint idle_notification:1;
    uint request_pending:1;
    uint deferred_resume:1;
    uint runtime_auto:1;
    bool ignore_children:1;
    uint no_callbacks:1;
    uint irq_safe:1;
    uint use_autosuspend:1;
    uint timer_autosuspends:1;
    uint memalloc_noio:1;
    undefined field52_0x122;
    undefined field53_0x123;
    uint links_count;
    enum rpm_request request;
    enum rpm_status runtime_status;
    int runtime_error;
    int autosuspend_delay;
    ulong last_busy;
    ulong active_jiffies;
    ulong suspended_jiffies;
    ulong accounting_timestamp;
    struct pm_subsys_data.conflict1 * subsys_data;
    void (* set_latency_tolerance)(struct device *, s32);
    struct dev_pm_qos * qos;
};

struct wakeup_source.conflict2 {
    char * name;
    int id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head entry;
    spinlock_t.conflict lock;
    struct wake_irq * wakeirq;
    struct timer_list timer;
    ulong timer_expires;
    ktime_t total_time;
    ktime_t max_time;
    ktime_t last_time;
    ktime_t start_prevent_time;
    ktime_t prevent_sleep_time;
    ulong event_count;
    ulong active_count;
    ulong relax_count;
    ulong expire_count;
    ulong wakeup_count;
    struct device * dev;
    bool active:1;
    bool autosleep_enabled:1;
    undefined field24_0xd9;
    undefined field25_0xda;
    undefined field26_0xdb;
    undefined field27_0xdc;
    undefined field28_0xdd;
    undefined field29_0xde;
    undefined field30_0xdf;
};

struct pm_subsys_data.conflict1 {
    spinlock_t.conflict lock;
    uint refcount;
    undefined field2_0x1c;
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
    struct list_head clock_list;
    struct pm_domain_data * domain_data;
};

typedef struct dev_pm_info.conflict1 dev_pm_info.conflict1, *Pdev_pm_info.conflict1;

typedef struct device.conflict1 device.conflict1, *Pdevice.conflict1;

typedef struct wakeup_source.conflict1 wakeup_source.conflict1, *Pwakeup_source.conflict1;

typedef struct bus_type.conflict1 bus_type.conflict1, *Pbus_type.conflict1;

typedef struct class.conflict1 class.conflict1, *Pclass.conflict1;

typedef struct dev_pm_ops.conflict1 dev_pm_ops.conflict1, *Pdev_pm_ops.conflict1;

struct bus_type.conflict1 {
    char * name;
    char * dev_name;
    struct device.conflict1 * dev_root;
    struct attribute_group * * bus_groups;
    struct attribute_group * * dev_groups;
    struct attribute_group * * drv_groups;
    int (* match)(struct device.conflict1 *, struct device_driver *);
    int (* uevent)(struct device.conflict1 *, struct kobj_uevent_env *);
    int (* probe)(struct device.conflict1 *);
    void (* sync_state)(struct device.conflict1 *);
    int (* remove)(struct device.conflict1 *);
    void (* shutdown)(struct device.conflict1 *);
    int (* online)(struct device.conflict1 *);
    int (* offline)(struct device.conflict1 *);
    int (* suspend)(struct device.conflict1 *, pm_message_t);
    int (* resume)(struct device.conflict1 *);
    int (* num_vf)(struct device.conflict1 *);
    int (* dma_configure)(struct device.conflict1 *);
    struct dev_pm_ops.conflict1 * pm;
    struct iommu_ops * iommu_ops;
    struct subsys_private * p;
    struct lock_class_key lock_key;
    bool need_parent_lock;
    undefined field23_0xa9;
    undefined field24_0xaa;
    undefined field25_0xab;
    undefined field26_0xac;
    undefined field27_0xad;
    undefined field28_0xae;
    undefined field29_0xaf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct dev_pm_info.conflict1 {
    pm_message_t power_state;
    uint can_wakeup:1;
    uint async_suspend:1;
    bool in_dpm_list:1;
    bool is_prepared:1;
    bool is_suspended:1;
    bool is_noirq_suspended:1;
    bool is_late_suspended:1;
    bool no_pm:1;
    bool early_init:1;
    bool direct_complete:1;
    undefined field11_0x6;
    undefined field12_0x7;
    u32 driver_flags;
    undefined field14_0xc;
    undefined field15_0xd;
    undefined field16_0xe;
    undefined field17_0xf;
    spinlock_t.conflict lock;
    struct list_head entry;
    struct completion.conflict completion;
    struct wakeup_source.conflict1 * wakeup;
    bool wakeup_path:1;
    bool syscore:1;
    bool no_pm_callbacks:1;
    uint must_resume:1;
    uint may_skip_resume:1;
    undefined field27_0x71;
    undefined field28_0x72;
    undefined field29_0x73;
    undefined field30_0x74;
    undefined field31_0x75;
    undefined field32_0x76;
    undefined field33_0x77;
    struct timer_list suspend_timer;
    ulong timer_expires;
    struct work_struct work;
    wait_queue_head_t.conflict wait_queue;
    struct wake_irq * wakeirq;
    struct atomic_t usage_count;
    struct atomic_t child_count;
    uint disable_depth:3;
    uint idle_notification:1;
    uint request_pending:1;
    uint deferred_resume:1;
    uint runtime_auto:1;
    bool ignore_children:1;
    uint no_callbacks:1;
    uint irq_safe:1;
    uint use_autosuspend:1;
    uint timer_autosuspends:1;
    uint memalloc_noio:1;
    undefined field52_0x122;
    undefined field53_0x123;
    uint links_count;
    enum rpm_request request;
    enum rpm_status runtime_status;
    int runtime_error;
    int autosuspend_delay;
    ulong last_busy;
    ulong active_jiffies;
    ulong suspended_jiffies;
    ulong accounting_timestamp;
    struct pm_subsys_data.conflict1 * subsys_data;
    void (* set_latency_tolerance)(struct device.conflict1 *, s32);
    struct dev_pm_qos * qos;
};

struct device.conflict1 {
    struct device.conflict1 * parent;
    struct device_private * p;
    struct kobject kobj;
    char * init_name;
    struct device_type.conflict * type;
    struct mutex.conflict mutex;
    struct bus_type.conflict1 * bus;
    struct device_driver * driver;
    void * platform_data;
    void * driver_data;
    struct dev_links_info links;
    struct dev_pm_info.conflict1 power;
    struct dev_pm_domain * pm_domain;
    struct irq_domain * msi_domain;
    struct dev_pin_info * pins;
    struct list_head msi_list;
    struct dma_map_ops * dma_ops;
    u64 * dma_mask;
    u64 coherent_dma_mask;
    u64 bus_dma_mask;
    ulong dma_pfn_offset;
    struct device_dma_parameters * dma_parms;
    struct list_head dma_pools;
    struct dma_coherent_mem * dma_mem;
    struct cma * cma_area;
    struct removed_region * removed_mem;
    struct dev_archdata archdata;
    struct device_node * of_node;
    struct fwnode_handle * fwnode;
    dev_t devt;
    u32 id;
    spinlock_t.conflict devres_lock;
    struct list_head devres_head;
    struct klist_node knode_class;
    struct class.conflict1 * class;
    struct attribute_group * * groups;
    void (* release)(struct device.conflict1 *);
    struct iommu_group * iommu_group;
    struct iommu_fwspec * iommu_fwspec;
    bool offline_disabled:1;
    bool offline:1;
    bool of_node_reused:1;
    bool state_synced:1;
    undefined field43_0x3c9;
    undefined field44_0x3ca;
    undefined field45_0x3cb;
    undefined field46_0x3cc;
    undefined field47_0x3cd;
    undefined field48_0x3ce;
    undefined field49_0x3cf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    u64 android_kabi_reserved5;
    u64 android_kabi_reserved6;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
};

struct wakeup_source.conflict1 {
    char * name;
    int id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head entry;
    spinlock_t.conflict lock;
    struct wake_irq * wakeirq;
    struct timer_list timer;
    ulong timer_expires;
    ktime_t total_time;
    ktime_t max_time;
    ktime_t last_time;
    ktime_t start_prevent_time;
    ktime_t prevent_sleep_time;
    ulong event_count;
    ulong active_count;
    ulong relax_count;
    ulong expire_count;
    ulong wakeup_count;
    struct device.conflict1 * dev;
    bool active:1;
    bool autosleep_enabled:1;
    undefined field24_0xd9;
    undefined field25_0xda;
    undefined field26_0xdb;
    undefined field27_0xdc;
    undefined field28_0xdd;
    undefined field29_0xde;
    undefined field30_0xdf;
};

struct dev_pm_ops.conflict1 {
    int (* prepare)(struct device.conflict1 *);
    void (* complete)(struct device.conflict1 *);
    int (* suspend)(struct device.conflict1 *);
    int (* resume)(struct device.conflict1 *);
    int (* freeze)(struct device.conflict1 *);
    int (* thaw)(struct device.conflict1 *);
    int (* poweroff)(struct device.conflict1 *);
    int (* restore)(struct device.conflict1 *);
    int (* suspend_late)(struct device.conflict1 *);
    int (* resume_early)(struct device.conflict1 *);
    int (* freeze_late)(struct device.conflict1 *);
    int (* thaw_early)(struct device.conflict1 *);
    int (* poweroff_late)(struct device.conflict1 *);
    int (* restore_early)(struct device.conflict1 *);
    int (* suspend_noirq)(struct device.conflict1 *);
    int (* resume_noirq)(struct device.conflict1 *);
    int (* freeze_noirq)(struct device.conflict1 *);
    int (* thaw_noirq)(struct device.conflict1 *);
    int (* poweroff_noirq)(struct device.conflict1 *);
    int (* restore_noirq)(struct device.conflict1 *);
    int (* runtime_suspend)(struct device.conflict1 *);
    int (* runtime_resume)(struct device.conflict1 *);
    int (* runtime_idle)(struct device.conflict1 *);
};

struct class.conflict1 {
    char * name;
    struct module.conflict * owner;
    struct attribute_group * * class_groups;
    struct attribute_group * * dev_groups;
    struct kobject * dev_kobj;
    int (* dev_uevent)(struct device.conflict1 *, struct kobj_uevent_env *);
    char * (* devnode)(struct device.conflict1 *, umode_t *);
    void (* class_release)(struct class.conflict1 *);
    void (* dev_release)(struct device.conflict1 *);
    int (* shutdown_pre)(struct device.conflict1 *);
    struct kobj_ns_type_operations * ns_type;
    void * (* namespace)(struct device.conflict1 *);
    void (* get_ownership)(struct device.conflict1 *, struct kuid_t *, struct kgid_t *);
    struct dev_pm_ops.conflict1 * pm;
    struct subsys_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef enum ftr_type {
    FTR_EXACT=0,
    FTR_LOWER_SAFE=1,
    FTR_HIGHER_SAFE=2,
    FTR_HIGHER_OR_ZERO_SAFE=3
} ftr_type;

typedef struct arm64_ftr_reg arm64_ftr_reg, *Parm64_ftr_reg;

typedef struct arm64_ftr_bits arm64_ftr_bits, *Parm64_ftr_bits;

struct arm64_ftr_bits {
    bool sign;
    bool visible;
    bool strict;
    undefined field3_0x3;
    enum ftr_type type;
    u8 shift;
    u8 width;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    s64 safe_val;
};

struct arm64_ftr_reg {
    char * name;
    u64 strict_mask;
    u64 user_mask;
    u64 sys_val;
    u64 user_val;
    struct arm64_ftr_bits * ftr_bits;
};

typedef union anon_union.conflict96ab anon_union.conflict96ab, *Panon_union.conflict96ab;

union anon_union.conflict96ab {
    int non_rcu;
    struct callback_head rcu;
};

typedef struct buf_list_s buf_list_s, *Pbuf_list_s;

typedef struct buf_list_s buf_list_t;

struct buf_list_s {
    int nb_elt;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    int * * array_elements;
    int maxelements;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
};

typedef enum perf_event_task_context {
    perf_invalid_context=-1,
    perf_hw_context=0,
    perf_sw_context=1,
    perf_nr_task_contexts=2
} perf_event_task_context;

typedef union anon_union.conflict462a anon_union.conflict462a, *Panon_union.conflict462a;

union anon_union.conflict462a {
    uint futex_state;
    struct anon_struct.conflict460e field_1;
    union anon_union.conflict45e6 field_2;
};

typedef union anon_union.conflict45eb anon_union.conflict45eb, *Panon_union.conflict45eb;

union anon_union.conflict45eb {
    uint frozen:1;
    struct anon_struct.conflict45cf field_1;
    union anon_union.conflict45e6 field_2;
};

typedef union thread_union thread_union, *Pthread_union;

union thread_union {
    struct task_struct task;
    ulong stack[2048];
};

typedef enum rseq_event_mask_bits {
    RSEQ_EVENT_PREEMPT_BIT=0,
    RSEQ_EVENT_SIGNAL_BIT=1,
    RSEQ_EVENT_MIGRATE_BIT=2
} rseq_event_mask_bits;

typedef struct guid_t guid_t, *Pguid_t;

struct guid_t {
    __u8 b[16];
};

typedef struct device_attribute device_attribute, *Pdevice_attribute;

struct device_attribute {
    struct attribute attr;
    ssize_t (* show)(struct device *, struct device_attribute *, char *);
    ssize_t (* store)(struct device *, struct device_attribute *, char *, size_t);
};

typedef struct class.conflict2 class.conflict2, *Pclass.conflict2;

struct class.conflict2 {
    char * name;
    struct module.conflict * owner;
    struct attribute_group * * class_groups;
    struct attribute_group * * dev_groups;
    struct kobject * dev_kobj;
    int (* dev_uevent)(struct device *, struct kobj_uevent_env *);
    char * (* devnode)(struct device *, umode_t *);
    void (* class_release)(struct class.conflict2 *);
    void (* dev_release)(struct device *);
    int (* shutdown_pre)(struct device *);
    struct kobj_ns_type_operations * ns_type;
    void * (* namespace)(struct device *);
    void (* get_ownership)(struct device *, struct kuid_t *, struct kgid_t *);
    struct dev_pm_ops * pm;
    struct subsys_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef struct pdev_archdata pdev_archdata, *Ppdev_archdata;

struct pdev_archdata {
};

typedef union anon_union.conflictdb8 anon_union.conflictdb8, *Panon_union.conflictdb8;

union anon_union.conflictdb8 {
    struct atomic_t cnts;
    struct anon_struct.conflictd87 field_1;
};

typedef union anon_union.conflict5e4b anon_union.conflict5e4b, *Panon_union.conflict5e4b;

union anon_union.conflict5e4b {
    struct hlist_node ioc_node;
    struct callback_head __rcu_head;
};

typedef union anon_union.conflict5e2c anon_union.conflict5e2c, *Panon_union.conflict5e2c;

union anon_union.conflict5e2c {
    struct list_head q_node;
    struct kmem_cache * __rcu_icq_cache;
};

typedef struct cdev.conflict cdev.conflict, *Pcdev.conflict;

struct cdev.conflict {
    struct kobject kobj;
    struct module.conflict * owner;
    struct file_operations * ops;
    struct list_head list;
    dev_t dev;
    uint count;
};

typedef enum cpu_usage_stat {
    CPUTIME_USER=0,
    CPUTIME_NICE=1,
    CPUTIME_SYSTEM=2,
    CPUTIME_SOFTIRQ=3,
    CPUTIME_IRQ=4,
    CPUTIME_IDLE=5,
    CPUTIME_IOWAIT=6,
    CPUTIME_STEAL=7,
    CPUTIME_GUEST=8,
    CPUTIME_GUEST_NICE=9,
    NR_STATS=10
} cpu_usage_stat;

typedef struct ebc_pmic ebc_pmic, *Pebc_pmic;

struct ebc_pmic {
    struct device * dev;
    char pmic_name[16];
    void * drvpar;
    void (* pmic_power_req)(struct ebc_pmic *, bool);
    void (* pmic_pm_suspend)(struct ebc_pmic *);
    void (* pmic_pm_resume)(struct ebc_pmic *);
    int (* pmic_read_temperature)(struct ebc_pmic *, int *);
    int (* pmic_get_vcom)(struct ebc_pmic *);
    int (* pmic_set_vcom)(struct ebc_pmic *, int);
};

typedef struct ebc_pmic.conflict ebc_pmic.conflict, *Pebc_pmic.conflict;

struct ebc_pmic.conflict {
    struct device.conflict1 * dev;
    char pmic_name[16];
    void * drvpar;
    void (* pmic_power_req)(struct ebc_pmic.conflict *, bool);
    void (* pmic_pm_suspend)(struct ebc_pmic.conflict *);
    void (* pmic_pm_resume)(struct ebc_pmic.conflict *);
    int (* pmic_read_temperature)(struct ebc_pmic.conflict *, int *);
    int (* pmic_get_vcom)(struct ebc_pmic.conflict *);
    int (* pmic_set_vcom)(struct ebc_pmic.conflict *, int);
};

typedef struct nmi_ctx nmi_ctx, *Pnmi_ctx;

struct nmi_ctx {
    u64 hcr;
};

typedef struct irq_cpustat_t irq_cpustat_t, *Pirq_cpustat_t;

struct irq_cpustat_t {
    uint __softirq_pending;
    uint ipi_irqs[7];
    undefined field2_0x20;
    undefined field3_0x21;
    undefined field4_0x22;
    undefined field5_0x23;
    undefined field6_0x24;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
    undefined field10_0x28;
    undefined field11_0x29;
    undefined field12_0x2a;
    undefined field13_0x2b;
    undefined field14_0x2c;
    undefined field15_0x2d;
    undefined field16_0x2e;
    undefined field17_0x2f;
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    undefined field22_0x34;
    undefined field23_0x35;
    undefined field24_0x36;
    undefined field25_0x37;
    undefined field26_0x38;
    undefined field27_0x39;
    undefined field28_0x3a;
    undefined field29_0x3b;
    undefined field30_0x3c;
    undefined field31_0x3d;
    undefined field32_0x3e;
    undefined field33_0x3f;
};

typedef u8 uint8_t;

typedef struct sched_param sched_param, *Psched_param;

struct sched_param {
    int sched_priority;
};

typedef __u32 __be32;

typedef s8 int8_t;

typedef struct ratelimit_state.conflict ratelimit_state.conflict, *Pratelimit_state.conflict;

struct ratelimit_state.conflict {
    raw_spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    int interval;
    int burst;
    int printed;
    int missed;
    ulong begin;
    ulong flags;
};

typedef struct user_struct.conflict user_struct.conflict, *Puser_struct.conflict;

typedef struct key.conflict key.conflict, *Pkey.conflict;

typedef union anon_union.conflict41778_for_field_16 anon_union.conflict41778_for_field_16, *Panon_union.conflict41778_for_field_16;

typedef struct key_restriction.conflict key_restriction.conflict, *Pkey_restriction.conflict;

typedef struct anon_struct.conflict41754 anon_struct.conflict41754, *Panon_struct.conflict41754;

typedef struct assoc_array assoc_array, *Passoc_array;

typedef struct assoc_array_ptr assoc_array_ptr, *Passoc_array_ptr;

struct assoc_array {
    struct assoc_array_ptr * root;
    ulong nr_leaves_on_tree;
};

struct assoc_array_ptr {
};

struct anon_struct.conflict41754 {
    struct list_head name_link;
    struct assoc_array keys;
};

union anon_union.conflict41778_for_field_16 {
    union key_payload payload;
    struct anon_struct.conflict41754 field_1;
};

struct key_restriction.conflict {
    int (* check)(struct key.conflict *, struct key_type *, union key_payload *, struct key.conflict *);
    struct key.conflict * key;
    struct key_type * keytype;
};

struct key.conflict {
    refcount_t usage;
    key_serial_t serial;
    union anon_union.conflict951a_for_field_2 field_2;
    struct rw_semaphore sem;
    undefined field4_0x50;
    undefined field5_0x51;
    undefined field6_0x52;
    undefined field7_0x53;
    undefined field8_0x54;
    undefined field9_0x55;
    undefined field10_0x56;
    undefined field11_0x57;
    undefined field12_0x58;
    undefined field13_0x59;
    undefined field14_0x5a;
    undefined field15_0x5b;
    undefined field16_0x5c;
    undefined field17_0x5d;
    undefined field18_0x5e;
    undefined field19_0x5f;
    undefined field20_0x60;
    undefined field21_0x61;
    undefined field22_0x62;
    undefined field23_0x63;
    undefined field24_0x64;
    undefined field25_0x65;
    undefined field26_0x66;
    undefined field27_0x67;
    struct key_user * user;
    void * security;
    union anon_union.conflict9539_for_field_6 field_6;
    time64_t last_used_at;
    struct kuid_t uid;
    struct kgid_t gid;
    key_perm_t perm;
    ushort quotalen;
    ushort datalen;
    short state;
    undefined field38_0x9a;
    undefined field39_0x9b;
    undefined field40_0x9c;
    undefined field41_0x9d;
    undefined field42_0x9e;
    undefined field43_0x9f;
    ulong flags;
    union anon_union.conflict9579_for_field_15 field_15;
    union anon_union.conflict41778_for_field_16 field_16;
    struct key_restriction.conflict * restrict_link;
};

struct user_struct.conflict {
    refcount_t __count;
    struct atomic_t processes;
    struct atomic_t sigpending;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    atomic_long_t epoll_watches;
    ulong locked_shm;
    ulong unix_inflight;
    atomic_long_t pipe_bufs;
    struct key.conflict * uid_keyring;
    struct key.conflict * session_keyring;
    struct hlist_node uidhash_node;
    struct kuid_t uid;
    undefined field15_0x54;
    undefined field16_0x55;
    undefined field17_0x56;
    undefined field18_0x57;
    atomic_long_t locked_vm;
    struct ratelimit_state.conflict ratelimit;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

typedef enum vm_event_item.conflict {
    PGPGIN=0,
    PGPGOUT=1,
    PGPGOUTCLEAN=2,
    PSWPIN=3,
    PSWPOUT=4,
    PGALLOC_DMA32=5,
    PGALLOC_NORMAL=6,
    PGALLOC_MOVABLE=7,
    ALLOCSTALL_DMA32=8,
    ALLOCSTALL_NORMAL=9,
    ALLOCSTALL_MOVABLE=10,
    PGSCAN_SKIP_DMA32=11,
    PGSCAN_SKIP_NORMAL=12,
    PGSCAN_SKIP_MOVABLE=13,
    PGFREE=14,
    PGACTIVATE=15,
    PGDEACTIVATE=16,
    PGLAZYFREE=17,
    PGFAULT=18,
    PGMAJFAULT=19,
    PGLAZYFREED=20,
    PGREFILL=21,
    PGSTEAL_KSWAPD=22,
    PGSTEAL_DIRECT=23,
    PGSCAN_KSWAPD=24,
    PGSCAN_DIRECT=25,
    PGSCAN_DIRECT_THROTTLE=26,
    PGINODESTEAL=27,
    SLABS_SCANNED=28,
    KSWAPD_INODESTEAL=29,
    KSWAPD_LOW_WMARK_HIT_QUICKLY=30,
    KSWAPD_HIGH_WMARK_HIT_QUICKLY=31,
    PAGEOUTRUN=32,
    PGROTATED=33,
    DROP_PAGECACHE=34,
    DROP_SLAB=35,
    OOM_KILL=36,
    PGMIGRATE_SUCCESS=37,
    PGMIGRATE_FAIL=38,
    UNEVICTABLE_PGCULLED=39,
    UNEVICTABLE_PGSCANNED=40,
    UNEVICTABLE_PGRESCUED=41,
    UNEVICTABLE_PGMLOCKED=42,
    UNEVICTABLE_PGMUNLOCKED=43,
    UNEVICTABLE_PGCLEARED=44,
    UNEVICTABLE_PGSTRANDED=45,
    SWAP_RA=46,
    SWAP_RA_HIT=47,
    NR_VM_EVENT_ITEMS=48
} vm_event_item.conflict;

typedef enum vm_event_item {
    PGPGIN=0,
    PGPGOUT=1,
    PGPGOUTCLEAN=2,
    PSWPIN=3,
    PSWPOUT=4,
    PGALLOC_DMA32=5,
    PGALLOC_NORMAL=6,
    PGALLOC_MOVABLE=7,
    ALLOCSTALL_DMA32=8,
    ALLOCSTALL_NORMAL=9,
    ALLOCSTALL_MOVABLE=10,
    PGSCAN_SKIP_DMA32=11,
    PGSCAN_SKIP_NORMAL=12,
    PGSCAN_SKIP_MOVABLE=13,
    PGFREE=14,
    PGACTIVATE=15,
    PGDEACTIVATE=16,
    PGLAZYFREE=17,
    PGFAULT=18,
    PGMAJFAULT=19,
    PGLAZYFREED=20,
    PGREFILL=21,
    PGSTEAL_KSWAPD=22,
    PGSTEAL_DIRECT=23,
    PGSCAN_KSWAPD=24,
    PGSCAN_DIRECT=25,
    PGSCAN_DIRECT_THROTTLE=26,
    PGINODESTEAL=27,
    SLABS_SCANNED=28,
    KSWAPD_INODESTEAL=29,
    KSWAPD_LOW_WMARK_HIT_QUICKLY=30,
    KSWAPD_HIGH_WMARK_HIT_QUICKLY=31,
    PAGEOUTRUN=32,
    PGROTATED=33,
    DROP_PAGECACHE=34,
    DROP_SLAB=35,
    OOM_KILL=36,
    PGMIGRATE_SUCCESS=37,
    PGMIGRATE_FAIL=38,
    COMPACTMIGRATE_SCANNED=39,
    COMPACTFREE_SCANNED=40,
    COMPACTISOLATED=41,
    COMPACTSTALL=42,
    COMPACTFAIL=43,
    COMPACTSUCCESS=44,
    KCOMPACTD_WAKE=45,
    KCOMPACTD_MIGRATE_SCANNED=46,
    KCOMPACTD_FREE_SCANNED=47,
    UNEVICTABLE_PGCULLED=48,
    UNEVICTABLE_PGSCANNED=49,
    UNEVICTABLE_PGRESCUED=50,
    UNEVICTABLE_PGMLOCKED=51,
    UNEVICTABLE_PGMUNLOCKED=52,
    UNEVICTABLE_PGCLEARED=53,
    UNEVICTABLE_PGSTRANDED=54,
    SWAP_RA=55,
    SWAP_RA_HIT=56,
    NR_VM_EVENT_ITEMS=57
} vm_event_item;

typedef union anon_union_for___u anon_union_for___u, *Panon_union_for___u;

union anon_union_for___u {
    struct list_head * __val;
    char __c[1];
};

typedef struct node node, *Pnode;

struct node {
    struct device dev;
};

typedef enum ebc_win_data_fmt {
    Y_DATA_4BPP=0,
    Y_DATA_8BPP=1,
    RGB888=2,
    RGB565=3
} ebc_win_data_fmt;

typedef struct bp_hardening_data bp_hardening_data, *Pbp_hardening_data;

typedef void (* bp_hardening_cb_t)(void);

struct bp_hardening_data {
    int hyp_vectors_slot;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    bp_hardening_cb_t fn;
};

typedef struct miscdevice miscdevice, *Pmiscdevice;

struct miscdevice {
    int minor;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * name;
    struct file_operations * fops;
    struct list_head list;
    struct device * parent;
    struct device * this_device;
    struct attribute_group * * groups;
    char * nodename;
    umode_t mode;
    undefined field13_0x4a;
    undefined field14_0x4b;
    undefined field15_0x4c;
    undefined field16_0x4d;
    undefined field17_0x4e;
    undefined field18_0x4f;
};

typedef struct i2c_msg i2c_msg, *Pi2c_msg;

struct i2c_msg {
    __u16 addr;
    __u16 flags;
    __u16 len;
    undefined field3_0x6;
    undefined field4_0x7;
    __u8 * buf;
};

typedef struct i2c_algorithm.conflict i2c_algorithm.conflict, *Pi2c_algorithm.conflict;

typedef struct i2c_adapter.conflict i2c_adapter.conflict, *Pi2c_adapter.conflict;

typedef union i2c_smbus_data i2c_smbus_data, *Pi2c_smbus_data;

typedef struct i2c_lock_operations.conflict i2c_lock_operations.conflict, *Pi2c_lock_operations.conflict;

typedef struct rt_mutex.conflict rt_mutex.conflict, *Prt_mutex.conflict;

typedef struct i2c_bus_recovery_info.conflict i2c_bus_recovery_info.conflict, *Pi2c_bus_recovery_info.conflict;

typedef struct i2c_adapter_quirks i2c_adapter_quirks, *Pi2c_adapter_quirks;

typedef struct gpio_desc gpio_desc, *Pgpio_desc;

struct i2c_algorithm.conflict {
    int (* master_xfer)(struct i2c_adapter.conflict *, struct i2c_msg *, int);
    int (* smbus_xfer)(struct i2c_adapter.conflict *, u16, ushort, char, u8, int, union i2c_smbus_data *);
    u32 (* functionality)(struct i2c_adapter.conflict *);
};

struct i2c_bus_recovery_info.conflict {
    int (* recover_bus)(struct i2c_adapter.conflict *);
    int (* get_scl)(struct i2c_adapter.conflict *);
    void (* set_scl)(struct i2c_adapter.conflict *, int);
    int (* get_sda)(struct i2c_adapter.conflict *);
    void (* set_sda)(struct i2c_adapter.conflict *, int);
    int (* get_bus_free)(struct i2c_adapter.conflict *);
    void (* prepare_recovery)(struct i2c_adapter.conflict *);
    void (* unprepare_recovery)(struct i2c_adapter.conflict *);
    struct gpio_desc * scl_gpiod;
    struct gpio_desc * sda_gpiod;
};

struct rt_mutex.conflict {
    raw_spinlock_t wait_lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    struct rb_root_cached waiters;
    struct task_struct.conflict * owner;
};

struct i2c_adapter.conflict {
    struct module.conflict * owner;
    uint class;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct i2c_algorithm.conflict * algo;
    void * algo_data;
    struct i2c_lock_operations.conflict * lock_ops;
    struct rt_mutex.conflict bus_lock;
    struct rt_mutex.conflict mux_lock;
    int timeout;
    int retries;
    struct device dev;
    undefined field14_0x440;
    undefined field15_0x441;
    undefined field16_0x442;
    undefined field17_0x443;
    undefined field18_0x444;
    undefined field19_0x445;
    undefined field20_0x446;
    undefined field21_0x447;
    undefined field22_0x448;
    undefined field23_0x449;
    undefined field24_0x44a;
    undefined field25_0x44b;
    undefined field26_0x44c;
    undefined field27_0x44d;
    undefined field28_0x44e;
    undefined field29_0x44f;
    undefined field30_0x450;
    undefined field31_0x451;
    undefined field32_0x452;
    undefined field33_0x453;
    undefined field34_0x454;
    undefined field35_0x455;
    undefined field36_0x456;
    undefined field37_0x457;
    undefined field38_0x458;
    undefined field39_0x459;
    undefined field40_0x45a;
    undefined field41_0x45b;
    undefined field42_0x45c;
    undefined field43_0x45d;
    undefined field44_0x45e;
    undefined field45_0x45f;
    undefined field46_0x460;
    undefined field47_0x461;
    undefined field48_0x462;
    undefined field49_0x463;
    undefined field50_0x464;
    undefined field51_0x465;
    undefined field52_0x466;
    undefined field53_0x467;
    undefined field54_0x468;
    undefined field55_0x469;
    undefined field56_0x46a;
    undefined field57_0x46b;
    undefined field58_0x46c;
    undefined field59_0x46d;
    undefined field60_0x46e;
    undefined field61_0x46f;
    undefined field62_0x470;
    undefined field63_0x471;
    undefined field64_0x472;
    undefined field65_0x473;
    undefined field66_0x474;
    undefined field67_0x475;
    undefined field68_0x476;
    undefined field69_0x477;
    undefined field70_0x478;
    undefined field71_0x479;
    undefined field72_0x47a;
    undefined field73_0x47b;
    undefined field74_0x47c;
    undefined field75_0x47d;
    undefined field76_0x47e;
    undefined field77_0x47f;
    undefined field78_0x480;
    undefined field79_0x481;
    undefined field80_0x482;
    undefined field81_0x483;
    undefined field82_0x484;
    undefined field83_0x485;
    undefined field84_0x486;
    undefined field85_0x487;
    undefined field86_0x488;
    undefined field87_0x489;
    undefined field88_0x48a;
    undefined field89_0x48b;
    undefined field90_0x48c;
    undefined field91_0x48d;
    undefined field92_0x48e;
    undefined field93_0x48f;
    undefined field94_0x490;
    undefined field95_0x491;
    undefined field96_0x492;
    undefined field97_0x493;
    undefined field98_0x494;
    undefined field99_0x495;
    undefined field100_0x496;
    undefined field101_0x497;
    undefined field102_0x498;
    undefined field103_0x499;
    undefined field104_0x49a;
    undefined field105_0x49b;
    undefined field106_0x49c;
    undefined field107_0x49d;
    undefined field108_0x49e;
    undefined field109_0x49f;
    int nr;
    char name[48];
    undefined field112_0x4d4;
    undefined field113_0x4d5;
    undefined field114_0x4d6;
    undefined field115_0x4d7;
    struct completion.conflict dev_released;
    struct mutex userspace_clients_lock;
    undefined field118_0x528;
    undefined field119_0x529;
    undefined field120_0x52a;
    undefined field121_0x52b;
    undefined field122_0x52c;
    undefined field123_0x52d;
    undefined field124_0x52e;
    undefined field125_0x52f;
    undefined field126_0x530;
    undefined field127_0x531;
    undefined field128_0x532;
    undefined field129_0x533;
    undefined field130_0x534;
    undefined field131_0x535;
    undefined field132_0x536;
    undefined field133_0x537;
    undefined field134_0x538;
    undefined field135_0x539;
    undefined field136_0x53a;
    undefined field137_0x53b;
    undefined field138_0x53c;
    undefined field139_0x53d;
    undefined field140_0x53e;
    undefined field141_0x53f;
    struct list_head userspace_clients;
    struct i2c_bus_recovery_info.conflict * bus_recovery_info;
    struct i2c_adapter_quirks * quirks;
    struct irq_domain.conflict * host_notify_domain;
};

struct gpio_desc {
};

union i2c_smbus_data {
    __u8 byte;
    __u16 word;
    __u8 block[34];
};

struct i2c_adapter_quirks {
    u64 flags;
    int max_num_msgs;
    u16 max_write_len;
    u16 max_read_len;
    u16 max_comb_1st_msg_len;
    u16 max_comb_2nd_msg_len;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
};

struct i2c_lock_operations.conflict {
    void (* lock_bus)(struct i2c_adapter.conflict *, uint);
    int (* trylock_bus)(struct i2c_adapter.conflict *, uint);
    void (* unlock_bus)(struct i2c_adapter.conflict *, uint);
};

typedef struct i2c_client i2c_client, *Pi2c_client;

typedef struct i2c_adapter i2c_adapter, *Pi2c_adapter;

typedef struct i2c_algorithm i2c_algorithm, *Pi2c_algorithm;

typedef struct i2c_lock_operations i2c_lock_operations, *Pi2c_lock_operations;

typedef struct rt_mutex rt_mutex, *Prt_mutex;

typedef struct i2c_bus_recovery_info i2c_bus_recovery_info, *Pi2c_bus_recovery_info;

struct rt_mutex {
    raw_spinlock_t wait_lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct rb_root_cached waiters;
    struct task_struct * owner;
};

struct i2c_adapter {
    struct module * owner;
    uint class;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct i2c_algorithm * algo;
    void * algo_data;
    struct i2c_lock_operations * lock_ops;
    struct rt_mutex bus_lock;
    struct rt_mutex mux_lock;
    int timeout;
    int retries;
    struct device dev;
    int nr;
    char name[48];
    undefined field16_0x454;
    undefined field17_0x455;
    undefined field18_0x456;
    undefined field19_0x457;
    struct completion dev_released;
    struct mutex userspace_clients_lock;
    struct list_head userspace_clients;
    struct i2c_bus_recovery_info * bus_recovery_info;
    struct i2c_adapter_quirks * quirks;
    struct irq_domain * host_notify_domain;
};

struct i2c_algorithm {
    int (* master_xfer)(struct i2c_adapter *, struct i2c_msg *, int);
    int (* smbus_xfer)(struct i2c_adapter *, u16, ushort, char, u8, int, union i2c_smbus_data *);
    u32 (* functionality)(struct i2c_adapter *);
};

struct i2c_client {
    ushort flags;
    ushort addr;
    char name[20];
    struct i2c_adapter * adapter;
    struct device dev;
    int init_irq;
    int irq;
    struct list_head detected;
};

struct i2c_lock_operations {
    void (* lock_bus)(struct i2c_adapter *, uint);
    int (* trylock_bus)(struct i2c_adapter *, uint);
    void (* unlock_bus)(struct i2c_adapter *, uint);
};

struct i2c_bus_recovery_info {
    int (* recover_bus)(struct i2c_adapter *);
    int (* get_scl)(struct i2c_adapter *);
    void (* set_scl)(struct i2c_adapter *, int);
    int (* get_sda)(struct i2c_adapter *);
    void (* set_sda)(struct i2c_adapter *, int);
    int (* get_bus_free)(struct i2c_adapter *);
    void (* prepare_recovery)(struct i2c_adapter *);
    void (* unprepare_recovery)(struct i2c_adapter *);
    struct gpio_desc * scl_gpiod;
    struct gpio_desc * sda_gpiod;
};

typedef enum i2c_alert_protocol {
    I2C_PROTOCOL_SMBUS_ALERT=0,
    I2C_PROTOCOL_SMBUS_HOST_NOTIFY=1
} i2c_alert_protocol;

typedef struct i2c_client.conflict i2c_client.conflict, *Pi2c_client.conflict;

struct i2c_client.conflict {
    ushort flags;
    ushort addr;
    char name[20];
    struct i2c_adapter.conflict * adapter;
    struct device dev;
    undefined field5_0x3d0;
    undefined field6_0x3d1;
    undefined field7_0x3d2;
    undefined field8_0x3d3;
    undefined field9_0x3d4;
    undefined field10_0x3d5;
    undefined field11_0x3d6;
    undefined field12_0x3d7;
    undefined field13_0x3d8;
    undefined field14_0x3d9;
    undefined field15_0x3da;
    undefined field16_0x3db;
    undefined field17_0x3dc;
    undefined field18_0x3dd;
    undefined field19_0x3de;
    undefined field20_0x3df;
    undefined field21_0x3e0;
    undefined field22_0x3e1;
    undefined field23_0x3e2;
    undefined field24_0x3e3;
    undefined field25_0x3e4;
    undefined field26_0x3e5;
    undefined field27_0x3e6;
    undefined field28_0x3e7;
    undefined field29_0x3e8;
    undefined field30_0x3e9;
    undefined field31_0x3ea;
    undefined field32_0x3eb;
    undefined field33_0x3ec;
    undefined field34_0x3ed;
    undefined field35_0x3ee;
    undefined field36_0x3ef;
    undefined field37_0x3f0;
    undefined field38_0x3f1;
    undefined field39_0x3f2;
    undefined field40_0x3f3;
    undefined field41_0x3f4;
    undefined field42_0x3f5;
    undefined field43_0x3f6;
    undefined field44_0x3f7;
    undefined field45_0x3f8;
    undefined field46_0x3f9;
    undefined field47_0x3fa;
    undefined field48_0x3fb;
    undefined field49_0x3fc;
    undefined field50_0x3fd;
    undefined field51_0x3fe;
    undefined field52_0x3ff;
    undefined field53_0x400;
    undefined field54_0x401;
    undefined field55_0x402;
    undefined field56_0x403;
    undefined field57_0x404;
    undefined field58_0x405;
    undefined field59_0x406;
    undefined field60_0x407;
    undefined field61_0x408;
    undefined field62_0x409;
    undefined field63_0x40a;
    undefined field64_0x40b;
    undefined field65_0x40c;
    undefined field66_0x40d;
    undefined field67_0x40e;
    undefined field68_0x40f;
    undefined field69_0x410;
    undefined field70_0x411;
    undefined field71_0x412;
    undefined field72_0x413;
    undefined field73_0x414;
    undefined field74_0x415;
    undefined field75_0x416;
    undefined field76_0x417;
    undefined field77_0x418;
    undefined field78_0x419;
    undefined field79_0x41a;
    undefined field80_0x41b;
    undefined field81_0x41c;
    undefined field82_0x41d;
    undefined field83_0x41e;
    undefined field84_0x41f;
    undefined field85_0x420;
    undefined field86_0x421;
    undefined field87_0x422;
    undefined field88_0x423;
    undefined field89_0x424;
    undefined field90_0x425;
    undefined field91_0x426;
    undefined field92_0x427;
    undefined field93_0x428;
    undefined field94_0x429;
    undefined field95_0x42a;
    undefined field96_0x42b;
    undefined field97_0x42c;
    undefined field98_0x42d;
    undefined field99_0x42e;
    undefined field100_0x42f;
    int init_irq;
    int irq;
    struct list_head detected;
};

typedef struct i2c_board_info i2c_board_info, *Pi2c_board_info;

typedef struct property_entry property_entry, *Pproperty_entry;

typedef enum dev_prop_type {
    DEV_PROP_U8=0,
    DEV_PROP_U16=1,
    DEV_PROP_U32=2,
    DEV_PROP_U64=3,
    DEV_PROP_STRING=4,
    DEV_PROP_MAX=5
} dev_prop_type;

typedef union anon_union.conflict3c285_for_field_4 anon_union.conflict3c285_for_field_4, *Panon_union.conflict3c285_for_field_4;

typedef union anon_union.conflict3c1db anon_union.conflict3c1db, *Panon_union.conflict3c1db;

typedef union anon_union.conflict3c23f anon_union.conflict3c23f, *Panon_union.conflict3c23f;

union anon_union.conflict3c23f {
    u8 u8_data;
    u16 u16_data;
    u32 u32_data;
    u64 u64_data;
    char * str;
};

union anon_union.conflict3c1db {
    u8 * u8_data;
    u16 * u16_data;
    u32 * u32_data;
    u64 * u64_data;
    char * * str;
};

union anon_union.conflict3c285_for_field_4 {
    union anon_union.conflict3c1db pointer;
    union anon_union.conflict3c23f value;
};

struct property_entry {
    char * name;
    size_t length;
    bool is_array;
    undefined field3_0x11;
    undefined field4_0x12;
    undefined field5_0x13;
    enum dev_prop_type type;
    union anon_union.conflict3c285_for_field_4 field_4;
};

struct i2c_board_info {
    char type[20];
    ushort flags;
    ushort addr;
    char * dev_name;
    void * platform_data;
    struct device_node * of_node;
    struct fwnode_handle * fwnode;
    struct property_entry * properties;
    struct resource * resources;
    uint num_resources;
    int irq;
};

typedef struct i2c_driver i2c_driver, *Pi2c_driver;

typedef struct i2c_device_id i2c_device_id, *Pi2c_device_id;

struct i2c_driver {
    uint class;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    int (* probe)(struct i2c_client.conflict *, struct i2c_device_id *);
    int (* remove)(struct i2c_client.conflict *);
    int (* probe_new)(struct i2c_client.conflict *);
    void (* shutdown)(struct i2c_client.conflict *);
    void (* alert)(struct i2c_client.conflict *, enum i2c_alert_protocol, uint);
    int (* command)(struct i2c_client.conflict *, uint, void *);
    struct device_driver driver;
    struct i2c_device_id * id_table;
    int (* detect)(struct i2c_client.conflict *, struct i2c_board_info *);
    ushort * address_list;
    struct list_head clients;
    bool disable_i2c_core_irq_mapping;
    undefined field17_0x109;
    undefined field18_0x10a;
    undefined field19_0x10b;
    undefined field20_0x10c;
    undefined field21_0x10d;
    undefined field22_0x10e;
    undefined field23_0x10f;
};

struct i2c_device_id {
    char name[20];
    undefined field1_0x14;
    undefined field2_0x15;
    undefined field3_0x16;
    undefined field4_0x17;
    kernel_ulong_t driver_data;
};

typedef enum kmalloc_cache_type {
    KMALLOC_NORMAL=0,
    KMALLOC_RECLAIM=1,
    NR_KMALLOC_TYPES=2
} kmalloc_cache_type;

typedef struct quota_format_type.conflict1 quota_format_type.conflict1, *Pquota_format_type.conflict1;

struct quota_format_type.conflict1 {
    int qf_fmt_id;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct quota_format_ops * qf_ops;
    struct module.conflict * qf_owner;
    struct quota_format_type.conflict1 * qf_next;
};

typedef struct quota_format_type quota_format_type, *Pquota_format_type;

struct quota_format_type {
    int qf_fmt_id;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct quota_format_ops * qf_ops;
    struct module * qf_owner;
    struct quota_format_type * qf_next;
};

typedef union anon_union.conflict6b1d anon_union.conflict6b1d, *Panon_union.conflict6b1d;

union anon_union.conflict6b1d {
    struct kuid_t uid;
    struct kgid_t gid;
    struct kprojid_t projid;
};

typedef struct dqstats dqstats, *Pdqstats;

typedef struct percpu_counter percpu_counter, *Ppercpu_counter;

struct percpu_counter {
    raw_spinlock_t lock;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    s64 count;
    struct list_head list;
    s32 * counters;
};

struct dqstats {
    ulong stat[8];
    struct percpu_counter counter[8];
};

typedef struct mem_dqinfo.conflict mem_dqinfo.conflict, *Pmem_dqinfo.conflict;

struct mem_dqinfo.conflict {
    struct quota_format_type.conflict1 * dqi_format;
    int dqi_fmt_id;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct list_head dqi_dirty_list;
    ulong dqi_flags;
    uint dqi_bgrace;
    uint dqi_igrace;
    qsize_t dqi_max_spc_limit;
    qsize_t dqi_max_ino_limit;
    void * dqi_priv;
};

typedef struct quota_info.conflict1 quota_info.conflict1, *Pquota_info.conflict1;

struct quota_info.conflict1 {
    uint flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct rw_semaphore dqio_sem;
    undefined field6_0x38;
    undefined field7_0x39;
    undefined field8_0x3a;
    undefined field9_0x3b;
    undefined field10_0x3c;
    undefined field11_0x3d;
    undefined field12_0x3e;
    undefined field13_0x3f;
    undefined field14_0x40;
    undefined field15_0x41;
    undefined field16_0x42;
    undefined field17_0x43;
    undefined field18_0x44;
    undefined field19_0x45;
    undefined field20_0x46;
    undefined field21_0x47;
    undefined field22_0x48;
    undefined field23_0x49;
    undefined field24_0x4a;
    undefined field25_0x4b;
    undefined field26_0x4c;
    undefined field27_0x4d;
    undefined field28_0x4e;
    undefined field29_0x4f;
    struct inode * files[3];
    struct mem_dqinfo.conflict info[3];
    struct quota_format_ops * ops[3];
};

typedef enum node_states {
    N_POSSIBLE=0,
    N_ONLINE=1,
    N_HIGH_MEMORY=2,
    N_NORMAL_MEMORY=2,
    N_MEMORY=3,
    N_CPU=4,
    NR_NODE_STATES=5
} node_states;

typedef struct tracepoint tracepoint, *Ptracepoint;

typedef struct static_key static_key, *Pstatic_key;

typedef struct tracepoint_func tracepoint_func, *Ptracepoint_func;

typedef union anon_union.conflicte9b_for_field_1 anon_union.conflicte9b_for_field_1, *Panon_union.conflicte9b_for_field_1;

typedef struct static_key_mod static_key_mod, *Pstatic_key_mod;

struct tracepoint_func {
    void * func;
    void * data;
    int prio;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

union anon_union.conflicte9b_for_field_1 {
    ulong type;
    struct jump_entry * entries;
    struct static_key_mod * next;
};

struct static_key {
    struct atomic_t enabled;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    union anon_union.conflicte9b_for_field_1 field_1;
};

struct tracepoint {
    char * name;
    struct static_key key;
    int (* regfunc)(void);
    void (* unregfunc)(void);
    struct tracepoint_func * funcs;
};

struct static_key_mod {
};

typedef struct anon_struct.conflict144d anon_struct.conflict144d, *Panon_struct.conflict144d;

struct anon_struct.conflict144d {
    ulong tp_value;
    ulong tp2_value;
    struct user_fpsimd_state fpsimd_state;
};

typedef union anon_union.conflict1e114 anon_union.conflict1e114, *Panon_union.conflict1e114;

union anon_union.conflict1e114 {
    struct anon_struct.conflict1e0f0 field_0;
};

typedef union anon_union.conflict1758 anon_union.conflict1758, *Panon_union.conflict1758;

union anon_union.conflict1758 {
    __u64 lock_count;
    undefined1 field_1; // Data type larger than union's declared size: /DWARF/_UNCATEGORIZED_/anon_struct.conflict5094
pack(disabled)
Structure anon_struct.conflict5094 {
   0   list_head   16   lru   ""
   16   address_space *   8   mapping   ""
   24   ulong   8   index   ""
   32   ulong   8   private   ""
}
Size = 40   Actual Alignment = 1

};

typedef union anon_union.conflict1758_for_field_0 anon_union.conflict1758_for_field_0, *Panon_union.conflict1758_for_field_0;

union anon_union.conflict1758_for_field_0 {
    __u64 lock_count;
    struct anon_struct.conflict5094 field_1;
};

typedef union anon_union.conflictb99 anon_union.conflictb99, *Panon_union.conflictb99;

union anon_union.conflictb99 {
    struct anon_struct.conflicta6f futex;
    struct anon_struct.conflictb16 nanosleep;
    struct anon_struct.conflictb49 poll;
};

typedef union anon_union.conflictac6 anon_union.conflictac6, *Panon_union.conflictac6;

union anon_union.conflictac6 {
    struct timespec * rmtp;
    struct compat_timespec * compat_rmtp;
};

typedef enum wb_stat_item {
    WB_RECLAIMABLE=0,
    WB_WRITEBACK=1,
    WB_DIRTIED=2,
    WB_WRITTEN=3,
    NR_WB_STAT_ITEMS=4
} wb_stat_item;

typedef union anon_union.conflict3c285 anon_union.conflict3c285, *Panon_union.conflict3c285;

union anon_union.conflict3c285 {
    union anon_union.conflict3c1db pointer;
    union anon_union.conflict3c23f value;
};

typedef struct ebc_tcon ebc_tcon, *Pebc_tcon;

typedef struct ebc_panel ebc_panel, *Pebc_panel;

typedef struct clk clk, *Pclk;

typedef struct regmap regmap, *Pregmap;

typedef struct panel_buffer panel_buffer, *Ppanel_buffer;

struct regmap {
};

struct clk {
};

struct panel_buffer {
    void * virt_addr;
    ulong phy_addr;
    size_t size;
};

struct ebc_panel {
    struct device * dev;
    struct ebc_tcon * tcon;
    struct ebc_pmic * pmic;
    struct panel_buffer fb[2];
    int current_buffer;
    u32 width;
    u32 height;
    u32 vir_width;
    u32 vir_height;
    u32 width_mm;
    u32 height_mm;
    u32 direct_mode;
    u32 sdck;
    u32 lsl;
    u32 lbl;
    u32 ldl;
    u32 lel;
    u32 gdck_sta;
    u32 lgonl;
    u32 fsl;
    u32 fbl;
    u32 fdl;
    u32 fel;
    u32 panel_16bit;
    u32 panel_color;
    u32 mirror;
};

struct ebc_tcon {
    struct device * dev;
    void * regs;
    uint len;
    int irq;
    struct clk * hclk;
    struct clk * dclk;
    struct regmap * regmap_base;
    int (* enable)(struct ebc_tcon *, struct ebc_panel *);
    void (* disable)(struct ebc_tcon *);
    void (* dsp_mode_set)(struct ebc_tcon *, int, int, int, int);
    void (* image_addr_set)(struct ebc_tcon *, u32, u32);
    void (* frame_addr_set)(struct ebc_tcon *, u32);
    int (* lut_data_set)(struct ebc_tcon *, uint *, int, int);
    void (* frame_start)(struct ebc_tcon *, int);
    void (* dsp_end_callback)(void);
};

typedef struct eink_tcon eink_tcon, *Peink_tcon;

struct eink_tcon {
    struct device * dev;
    void * regs;
    uint len;
    int irq;
    struct clk * hclk;
    struct clk * pclk;
    struct regmap * regmap_base;
    int (* enable)(struct eink_tcon *, struct ebc_panel *);
    void (* disable)(struct eink_tcon *);
    void (* image_addr_set)(struct eink_tcon *, u32, u32, u32);
    void (* frame_start)(struct eink_tcon *);
    void (* dsp_end_callback)(void);
};

typedef struct eink_reg_data eink_reg_data, *Peink_reg_data;

struct eink_reg_data {
    int addr;
    int value;
};

typedef struct page_ext_operations page_ext_operations, *Ppage_ext_operations;

struct page_ext_operations {
    size_t offset;
    size_t size;
    bool (* need)(void);
    void (* init)(void);
};

typedef struct platform_driver.conflict platform_driver.conflict, *Pplatform_driver.conflict;

typedef struct platform_device.conflict platform_device.conflict, *Pplatform_device.conflict;

typedef struct platform_device_id platform_device_id, *Pplatform_device_id;

typedef struct mfd_cell mfd_cell, *Pmfd_cell;

struct platform_device_id {
    char name[20];
    undefined field1_0x14;
    undefined field2_0x15;
    undefined field3_0x16;
    undefined field4_0x17;
    kernel_ulong_t driver_data;
};

struct mfd_cell {
};

struct platform_device.conflict {
    char * name;
    int id;
    bool id_auto;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct device dev;
    undefined field7_0x3c0;
    undefined field8_0x3c1;
    undefined field9_0x3c2;
    undefined field10_0x3c3;
    undefined field11_0x3c4;
    undefined field12_0x3c5;
    undefined field13_0x3c6;
    undefined field14_0x3c7;
    undefined field15_0x3c8;
    undefined field16_0x3c9;
    undefined field17_0x3ca;
    undefined field18_0x3cb;
    undefined field19_0x3cc;
    undefined field20_0x3cd;
    undefined field21_0x3ce;
    undefined field22_0x3cf;
    undefined field23_0x3d0;
    undefined field24_0x3d1;
    undefined field25_0x3d2;
    undefined field26_0x3d3;
    undefined field27_0x3d4;
    undefined field28_0x3d5;
    undefined field29_0x3d6;
    undefined field30_0x3d7;
    undefined field31_0x3d8;
    undefined field32_0x3d9;
    undefined field33_0x3da;
    undefined field34_0x3db;
    undefined field35_0x3dc;
    undefined field36_0x3dd;
    undefined field37_0x3de;
    undefined field38_0x3df;
    undefined field39_0x3e0;
    undefined field40_0x3e1;
    undefined field41_0x3e2;
    undefined field42_0x3e3;
    undefined field43_0x3e4;
    undefined field44_0x3e5;
    undefined field45_0x3e6;
    undefined field46_0x3e7;
    undefined field47_0x3e8;
    undefined field48_0x3e9;
    undefined field49_0x3ea;
    undefined field50_0x3eb;
    undefined field51_0x3ec;
    undefined field52_0x3ed;
    undefined field53_0x3ee;
    undefined field54_0x3ef;
    undefined field55_0x3f0;
    undefined field56_0x3f1;
    undefined field57_0x3f2;
    undefined field58_0x3f3;
    undefined field59_0x3f4;
    undefined field60_0x3f5;
    undefined field61_0x3f6;
    undefined field62_0x3f7;
    undefined field63_0x3f8;
    undefined field64_0x3f9;
    undefined field65_0x3fa;
    undefined field66_0x3fb;
    undefined field67_0x3fc;
    undefined field68_0x3fd;
    undefined field69_0x3fe;
    undefined field70_0x3ff;
    undefined field71_0x400;
    undefined field72_0x401;
    undefined field73_0x402;
    undefined field74_0x403;
    undefined field75_0x404;
    undefined field76_0x405;
    undefined field77_0x406;
    undefined field78_0x407;
    undefined field79_0x408;
    undefined field80_0x409;
    undefined field81_0x40a;
    undefined field82_0x40b;
    undefined field83_0x40c;
    undefined field84_0x40d;
    undefined field85_0x40e;
    undefined field86_0x40f;
    undefined field87_0x410;
    undefined field88_0x411;
    undefined field89_0x412;
    undefined field90_0x413;
    undefined field91_0x414;
    undefined field92_0x415;
    undefined field93_0x416;
    undefined field94_0x417;
    undefined field95_0x418;
    undefined field96_0x419;
    undefined field97_0x41a;
    undefined field98_0x41b;
    undefined field99_0x41c;
    undefined field100_0x41d;
    undefined field101_0x41e;
    undefined field102_0x41f;
    u32 num_resources;
    undefined field104_0x424;
    undefined field105_0x425;
    undefined field106_0x426;
    undefined field107_0x427;
    struct resource * resource;
    struct platform_device_id * id_entry;
    char * driver_override;
    struct mfd_cell * mfd_cell;
    struct pdev_archdata archdata;
};

struct platform_driver.conflict {
    int (* probe)(struct platform_device.conflict *);
    int (* remove)(struct platform_device.conflict *);
    void (* shutdown)(struct platform_device.conflict *);
    int (* suspend)(struct platform_device.conflict *, pm_message_t);
    int (* resume)(struct platform_device.conflict *);
    struct device_driver driver;
    struct platform_device_id * id_table;
    bool prevent_deferred_probe;
    undefined field8_0xd9;
    undefined field9_0xda;
    undefined field10_0xdb;
    undefined field11_0xdc;
    undefined field12_0xdd;
    undefined field13_0xde;
    undefined field14_0xdf;
};

typedef struct platform_driver platform_driver, *Pplatform_driver;

typedef struct platform_device platform_device, *Pplatform_device;

struct platform_device {
    char * name;
    int id;
    bool id_auto;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct device dev;
    u32 num_resources;
    undefined field8_0x3c4;
    undefined field9_0x3c5;
    undefined field10_0x3c6;
    undefined field11_0x3c7;
    struct resource * resource;
    struct platform_device_id * id_entry;
    char * driver_override;
    struct mfd_cell * mfd_cell;
    struct pdev_archdata archdata;
};

struct platform_driver {
    int (* probe)(struct platform_device *);
    int (* remove)(struct platform_device *);
    void (* shutdown)(struct platform_device *);
    int (* suspend)(struct platform_device *, pm_message_t);
    int (* resume)(struct platform_device *);
    struct device_driver driver;
    struct platform_device_id * id_table;
    bool prevent_deferred_probe;
    undefined field8_0xd9;
    undefined field9_0xda;
    undefined field10_0xdb;
    undefined field11_0xdc;
    undefined field12_0xdd;
    undefined field13_0xde;
    undefined field14_0xdf;
};

typedef struct percpu_rw_semaphore.conflict1 percpu_rw_semaphore.conflict1, *Ppercpu_rw_semaphore.conflict1;

typedef struct rcuwait.conflict1 rcuwait.conflict1, *Prcuwait.conflict1;

struct rcuwait.conflict1 {
    struct task_struct.conflict * task;
};

struct percpu_rw_semaphore.conflict1 {
    struct rcu_sync.conflict rss;
    uint * read_count;
    struct rw_semaphore rw_sem;
    undefined field3_0x88;
    undefined field4_0x89;
    undefined field5_0x8a;
    undefined field6_0x8b;
    undefined field7_0x8c;
    undefined field8_0x8d;
    undefined field9_0x8e;
    undefined field10_0x8f;
    undefined field11_0x90;
    undefined field12_0x91;
    undefined field13_0x92;
    undefined field14_0x93;
    undefined field15_0x94;
    undefined field16_0x95;
    undefined field17_0x96;
    undefined field18_0x97;
    undefined field19_0x98;
    undefined field20_0x99;
    undefined field21_0x9a;
    undefined field22_0x9b;
    undefined field23_0x9c;
    undefined field24_0x9d;
    undefined field25_0x9e;
    undefined field26_0x9f;
    struct rcuwait.conflict1 writer;
    int readers_block;
    undefined field29_0xac;
    undefined field30_0xad;
    undefined field31_0xae;
    undefined field32_0xaf;
};

typedef struct vm_event_state vm_event_state, *Pvm_event_state;

struct vm_event_state {
    ulong event[57];
};

typedef void (* exitcall_t)(void);

typedef int initcall_entry_t;

typedef enum gpiod_flags {
    GPIOD_ASIS=0,
    GPIOD_IN=1,
    GPIOD_OUT_LOW=3,
    GPIOD_OUT_HIGH=7,
    GPIOD_OUT_LOW_OPEN_DRAIN=11,
    GPIOD_OUT_HIGH_OPEN_DRAIN=15
} gpiod_flags;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct ctl_table_poll ctl_table_poll, *Pctl_table_poll;

struct ctl_table_poll {
    struct atomic_t event;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t wait;
};

typedef union anon_union.conflict4137e anon_union.conflict4137e, *Panon_union.conflict4137e;

union anon_union.conflict4137e {
    struct anon_struct.conflict41340 field_0;
    struct callback_head rcu;
};

typedef union anon_union.conflict951a anon_union.conflict951a, *Panon_union.conflict951a;

union anon_union.conflict951a {
    struct list_head graveyard_link;
    struct rb_node serial_node;
};

typedef union anon_union.conflict9579 anon_union.conflict9579, *Panon_union.conflict9579;

union anon_union.conflict9579 {
    struct keyring_index_key index_key;
    struct anon_struct.conflict9558 field_1;
};

typedef union anon_union.conflict9539 anon_union.conflict9539, *Panon_union.conflict9539;

union anon_union.conflict9539 {
    time64_t expiry;
    time64_t revoked_at;
};

typedef union anon_union.conflict95b3 anon_union.conflict95b3, *Panon_union.conflict95b3;

union anon_union.conflict95b3 {
    union key_payload payload;
    struct anon_struct.conflict9558 field_1;
};

typedef union anon_union.conflict41778 anon_union.conflict41778, *Panon_union.conflict41778;

union anon_union.conflict41778 {
    union key_payload payload;
    struct anon_struct.conflict41754 field_1;
};

typedef union anon_union.conflict5205 anon_union.conflict5205, *Panon_union.conflict5205;

typedef struct anon_struct.conflict51d8 anon_struct.conflict51d8, *Panon_struct.conflict51d8;

struct anon_struct.conflict51d8 {
    struct page * next;
    int pages;
    int pobjects;
};

union anon_union.conflict5205 {
    struct list_head slab_list;
    struct anon_struct.conflict51d8 field_1;
};

typedef union anon_union.conflict18914 anon_union.conflict18914, *Panon_union.conflict18914;

union anon_union.conflict18914 {
    struct anon_struct.conflict5094 field_0;
    struct anon_struct.conflict187c2 field_1;
    struct anon_struct.conflict52b0 field_2;
    struct anon_struct.conflict52e9 field_3;
    struct anon_struct.conflict1888e field_4;
    struct anon_struct.conflict188d8 field_5;
    struct callback_head callback_head;
};

typedef union anon_union.conflict5254 anon_union.conflict5254, *Panon_union.conflict5254;

union anon_union.conflict5254 {
    void * s_mem;
    ulong counters;
    struct anon_struct.conflict521e field_2;
};

typedef union anon_union.conflict1886c anon_union.conflict1886c, *Panon_union.conflict1886c;

union anon_union.conflict1886c {
    struct mm_struct.conflict * pt_mm;
    struct atomic_t pt_frag_refcount;
};

typedef union anon_union.conflict545e anon_union.conflict545e, *Panon_union.conflict545e;

union anon_union.conflict545e {
    struct atomic_t _mapcount;
    uint page_type;
    uint active;
    int units;
};

typedef struct anon_struct.conflict5770 anon_struct.conflict5770, *Panon_struct.conflict5770;

struct anon_struct.conflict5770 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    spinlock_t page_table_lock;
    struct rw_semaphore mmap_sem;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t arg_lock;
    undefined field26_0xec;
    undefined field27_0xed;
    undefined field28_0xee;
    undefined field29_0xef;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state * core_state;
    struct atomic_t membarrier_state;
    spinlock_t ioctx_lock;
    struct kioctx_table * ioctx_table;
    struct task_struct * owner;
    struct user_namespace * user_ns;
    struct file * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field54_0x33c;
    undefined field55_0x33d;
    undefined field56_0x33e;
    undefined field57_0x33f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

typedef struct anon_struct.conflict3cca5 anon_struct.conflict3cca5, *Panon_struct.conflict3cca5;

struct anon_struct.conflict3cca5 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    undefined field13_0x5c;
    undefined field14_0x5d;
    undefined field15_0x5e;
    undefined field16_0x5f;
    spinlock_t.conflict page_table_lock;
    struct rw_semaphore mmap_sem;
    undefined field19_0xa8;
    undefined field20_0xa9;
    undefined field21_0xaa;
    undefined field22_0xab;
    undefined field23_0xac;
    undefined field24_0xad;
    undefined field25_0xae;
    undefined field26_0xaf;
    undefined field27_0xb0;
    undefined field28_0xb1;
    undefined field29_0xb2;
    undefined field30_0xb3;
    undefined field31_0xb4;
    undefined field32_0xb5;
    undefined field33_0xb6;
    undefined field34_0xb7;
    undefined field35_0xb8;
    undefined field36_0xb9;
    undefined field37_0xba;
    undefined field38_0xbb;
    undefined field39_0xbc;
    undefined field40_0xbd;
    undefined field41_0xbe;
    undefined field42_0xbf;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t.conflict arg_lock;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state.conflict * core_state;
    struct atomic_t membarrier_state;
    undefined field72_0x354;
    undefined field73_0x355;
    undefined field74_0x356;
    undefined field75_0x357;
    spinlock_t.conflict ioctx_lock;
    struct kioctx_table * ioctx_table;
    struct user_namespace * user_ns;
    struct file * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field81_0x38c;
    undefined field82_0x38d;
    undefined field83_0x38e;
    undefined field84_0x38f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

typedef union anon_union.conflict542c anon_union.conflict542c, *Panon_union.conflict542c;

union anon_union.conflict542c {
    struct anon_struct.conflict5094 field_0;
    struct anon_struct.conflict5094 field_1;
    struct anon_struct.conflict52b0 field_2;
    struct anon_struct.conflict52e9 field_3;
    struct anon_struct.conflict5094 field_4;
    struct anon_struct.conflict5094 field_5;
    struct callback_head callback_head;
};

typedef struct anon_struct.conflict1f356 anon_struct.conflict1f356, *Panon_struct.conflict1f356;

struct anon_struct.conflict1f356 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file.conflict *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    undefined field13_0x5c;
    undefined field14_0x5d;
    undefined field15_0x5e;
    undefined field16_0x5f;
    spinlock_t page_table_lock;
    undefined field18_0x64;
    undefined field19_0x65;
    undefined field20_0x66;
    undefined field21_0x67;
    undefined field22_0x68;
    undefined field23_0x69;
    undefined field24_0x6a;
    undefined field25_0x6b;
    undefined field26_0x6c;
    undefined field27_0x6d;
    undefined field28_0x6e;
    undefined field29_0x6f;
    undefined field30_0x70;
    undefined field31_0x71;
    undefined field32_0x72;
    undefined field33_0x73;
    undefined field34_0x74;
    undefined field35_0x75;
    undefined field36_0x76;
    undefined field37_0x77;
    struct rw_semaphore.conflict mmap_sem;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t arg_lock;
    undefined field50_0x11c;
    undefined field51_0x11d;
    undefined field52_0x11e;
    undefined field53_0x11f;
    undefined field54_0x120;
    undefined field55_0x121;
    undefined field56_0x122;
    undefined field57_0x123;
    undefined field58_0x124;
    undefined field59_0x125;
    undefined field60_0x126;
    undefined field61_0x127;
    undefined field62_0x128;
    undefined field63_0x129;
    undefined field64_0x12a;
    undefined field65_0x12b;
    undefined field66_0x12c;
    undefined field67_0x12d;
    undefined field68_0x12e;
    undefined field69_0x12f;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state.conflict * core_state;
    struct atomic_t membarrier_state;
    undefined field88_0x354;
    undefined field89_0x355;
    undefined field90_0x356;
    undefined field91_0x357;
    spinlock_t ioctx_lock;
    undefined field93_0x35c;
    undefined field94_0x35d;
    undefined field95_0x35e;
    undefined field96_0x35f;
    undefined field97_0x360;
    undefined field98_0x361;
    undefined field99_0x362;
    undefined field100_0x363;
    undefined field101_0x364;
    undefined field102_0x365;
    undefined field103_0x366;
    undefined field104_0x367;
    undefined field105_0x368;
    undefined field106_0x369;
    undefined field107_0x36a;
    undefined field108_0x36b;
    undefined field109_0x36c;
    undefined field110_0x36d;
    undefined field111_0x36e;
    undefined field112_0x36f;
    struct kioctx_table * ioctx_table;
    struct user_namespace * user_ns;
    struct file.conflict * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field117_0x38c;
    undefined field118_0x38d;
    undefined field119_0x38e;
    undefined field120_0x38f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

typedef union anon_union.conflict55ea anon_union.conflict55ea, *Panon_union.conflict55ea;

union anon_union.conflict55ea {
    struct anon_struct.conflict55c7 shared;
    char * anon_name;
};

typedef union anon_union.conflict5316 anon_union.conflict5316, *Panon_union.conflict5316;

union anon_union.conflict5316 {
    struct mm_struct * pt_mm;
    struct atomic_t pt_frag_refcount;
};

typedef struct anon_struct.conflict18a52 anon_struct.conflict18a52, *Panon_struct.conflict18a52;

struct anon_struct.conflict18a52 {
    struct vm_area_struct * mmap;
    struct rb_root mm_rb;
    u64 vmacache_seqnum;
    ulong (* get_unmapped_area)(struct file *, ulong, ulong, ulong, ulong);
    ulong mmap_base;
    ulong mmap_legacy_base;
    ulong task_size;
    ulong highest_vm_end;
    struct pgd_t * pgd;
    struct atomic_t mm_users;
    struct atomic_t mm_count;
    atomic_long_t pgtables_bytes;
    int map_count;
    undefined field13_0x5c;
    undefined field14_0x5d;
    undefined field15_0x5e;
    undefined field16_0x5f;
    spinlock_t.conflict page_table_lock;
    struct rw_semaphore.conflict mmap_sem;
    struct list_head mmlist;
    ulong hiwater_rss;
    ulong hiwater_vm;
    ulong total_vm;
    ulong locked_vm;
    ulong pinned_vm;
    ulong data_vm;
    ulong exec_vm;
    ulong stack_vm;
    ulong def_flags;
    spinlock_t.conflict arg_lock;
    ulong start_code;
    ulong end_code;
    ulong start_data;
    ulong end_data;
    ulong start_brk;
    ulong brk;
    ulong start_stack;
    ulong arg_start;
    ulong arg_end;
    ulong env_start;
    ulong env_end;
    ulong saved_auxv[46];
    struct mm_rss_stat rss_stat;
    struct linux_binfmt * binfmt;
    struct mm_context_t context;
    ulong flags;
    struct core_state.conflict * core_state;
    struct atomic_t membarrier_state;
    undefined field48_0x354;
    undefined field49_0x355;
    undefined field50_0x356;
    undefined field51_0x357;
    spinlock_t.conflict ioctx_lock;
    struct kioctx_table * ioctx_table;
    struct user_namespace * user_ns;
    struct file * exe_file;
    struct atomic_t tlb_flush_pending;
    undefined field57_0x38c;
    undefined field58_0x38d;
    undefined field59_0x38e;
    undefined field60_0x38f;
    struct uprobes_state uprobes_state;
    struct work_struct async_put_work;
};

typedef struct semaphore semaphore, *Psemaphore;

struct semaphore {
    raw_spinlock_t lock;
    uint count;
    struct list_head wait_list;
};

typedef enum anon_enum_32.conflict165 {
    IRQ_NESTED_THREAD=-32768,
    WQ_POWER_EFFICIENT=-128,
    HI_SOFTIRQ=0,
    IRQ_TYPE_NONE=0,
    MM_FILEPAGES=0,
    TASKSTATS_CMD_UNSPEC=0,
    WAKE_LOCK_SUSPEND=0,
    ZONELIST_FALLBACK=0,
    false=0,
    IRQ_TYPE_EDGE_RISING=1,
    MAX_ZONELISTS=1,
    MEMREMAP_WB=1,
    MM_ANONPAGES=1,
    TASKSTATS_CMD_GET=1,
    TIMER_SOFTIRQ=1,
    WAKE_LOCK_TYPE_COUNT=1,
    true=1,
    IRQ_TYPE_EDGE_FALLING=2,
    MEMREMAP_WT=2,
    MM_SWAPENTS=2,
    NET_TX_SOFTIRQ=2,
    TASKSTATS_CMD_NEW=2,
    WQ_UNBOUND=2,
    IRQ_TYPE_EDGE_BOTH=3,
    MM_SHMEMPAGES=3,
    NET_RX_SOFTIRQ=3,
    __TASKSTATS_CMD_MAX=3,
    BLOCK_SOFTIRQ=4,
    IRQ_TYPE_LEVEL_HIGH=4,
    MEMREMAP_WC=4,
    MM_UNRECLAIMABLE=4,
    WQ_FREEZABLE=4,
    WQ_MAX_UNBOUND_PER_CPU=4,
    IRQ_POLL_SOFTIRQ=5,
    NR_MM_COUNTERS=5,
    TASKLET_SOFTIRQ=6,
    SCHED_SOFTIRQ=7,
    HRTIMER_SOFTIRQ=8,
    IRQ_TYPE_LEVEL_LOW=8,
    MEMREMAP_ENC=8,
    WQ_MEM_RECLAIM=8,
    RCU_SOFTIRQ=9,
    NR_SOFTIRQS=10,
    IRQ_TYPE_LEVEL_MASK=12,
    IRQ_TYPE_DEFAULT=15,
    IRQ_TYPE_SENSE_MASK=15,
    IRQ_TYPE_PROBE=16,
    MEMREMAP_DEC=16,
    WQ_HIGHPRI=16,
    WQ_CPU_INTENSIVE=32,
    WQ_SYSFS=64,
    IRQ_LEVEL=256,
    WQ_DFL_ACTIVE=256,
    IRQ_PER_CPU=512,
    WQ_MAX_ACTIVE=512,
    IRQ_NOPROBE=1024,
    IRQ_NOREQUEST=2048,
    IRQ_NOAUTOEN=4096,
    IRQ_NO_BALANCING=8192,
    IRQ_MOVE_PCNTXT=16384,
    IRQ_NOTHREAD=65536,
    __WQ_DRAINING=65536,
    IRQ_PER_CPU_DEVID=131072,
    UNAME26=131072,
    __WQ_ORDERED=131072,
    ADDR_NO_RANDOMIZE=262144,
    IRQ_IS_POLLED=262144,
    __WQ_LEGACY=262144,
    FDPIC_FUNCPTRS=524288,
    IRQ_DISABLE_UNLAZY=524288,
    __WQ_ORDERED_EXPLICIT=524288,
    MMAP_PAGE_ZERO=1048576,
    ADDR_COMPAT_LAYOUT=2097152,
    READ_IMPLIES_EXEC=4194304,
    ADDR_LIMIT_32BIT=8388608,
    SHORT_INODE=16777216,
    WHOLE_SECONDS=33554432,
    STICKY_TIMEOUTS=67108864,
    ADDR_LIMIT_3GB=134217728
} anon_enum_32.conflict165;

typedef struct wait_queue_entry wait_queue_entry, *Pwait_queue_entry;

struct wait_queue_entry {
    uint flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void * private;
    int (* func)(struct wait_queue_entry *, uint, int, void *);
    struct list_head entry;
};

typedef struct ebc_info ebc_info, *Pebc_info;

typedef struct epd_lut_data epd_lut_data, *Pepd_lut_data;

typedef struct ebc_buf_s ebc_buf_s, *Pebc_buf_s;

typedef struct wake_lock wake_lock, *Pwake_lock;

typedef enum ebc_buf_status {
    buf_idle=0,
    buf_user=1,
    buf_dsp=2,
    buf_osd=3,
    buf_error=4
} ebc_buf_status;

typedef enum panel_refresh_mode {
    EPD_AUTO=0,
    EPD_OVERLAY=1,
    EPD_FULL_GC16=2,
    EPD_FULL_GL16=3,
    EPD_FULL_GLR16=4,
    EPD_FULL_GLD16=5,
    EPD_FULL_GCC16=6,
    EPD_PART_GC16=7,
    EPD_PART_GL16=8,
    EPD_PART_GLR16=9,
    EPD_PART_GLD16=10,
    EPD_PART_GCC16=11,
    EPD_A2=12,
    EPD_A2_DITHER=13,
    EPD_DU=14,
    EPD_DU4=15,
    EPD_A2_ENTER=16,
    EPD_RESET=17,
    EPD_SUSPEND=18,
    EPD_RESUME=19,
    EPD_POWER_OFF=20,
    EPD_FORCE_FULL=21,
    EPD_AUTO_DU=22,
    EPD_AUTO_DU4=23
} panel_refresh_mode;

struct ebc_buf_s {
    enum ebc_buf_status status;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    ulong phy_addr;
    char * virt_addr;
    char tid_name[16];
    enum panel_refresh_mode buf_mode;
    int len;
    int win_x1;
    int win_y1;
    int win_x2;
    int win_y2;
    int needpic;
    undefined field15_0x44;
    undefined field16_0x45;
    undefined field17_0x46;
    undefined field18_0x47;
};

struct wake_lock {
    struct wakeup_source ws;
};

struct epd_lut_data {
    uint frame_num;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    uint * data;
    u8 * wf_table;
};

struct ebc_info {
    ulong ebc_buffer_phy;
    char * ebc_buffer_vir;
    int ebc_buffer_size;
    int ebc_buf_real_size;
    int direct_buf_real_size;
    undefined field5_0x1c;
    undefined field6_0x1d;
    undefined field7_0x1e;
    undefined field8_0x1f;
    ulong lut_buffer_phy;
    int lut_buffer_size;
    int is_busy_now;
    char frame_total;
    char frame_bw_total;
    undefined field14_0x32;
    undefined field15_0x33;
    int auto_need_refresh;
    int auto_check;
    int frame_left;
    int part_mode_count;
    int full_mode_num;
    int height;
    int width;
    int * lut_addr;
    int buf_align16;
    int ebc_irq_status;
    int ebc_dsp_buf_status;
    undefined field27_0x64;
    undefined field28_0x65;
    undefined field29_0x66;
    undefined field30_0x67;
    struct device * dev;
    struct epd_lut_data lut_data;
    struct task_struct * ebc_task;
    int * auto_image_new;
    int * auto_image_old;
    int * auto_image_bg;
    u8 * auto_frame_count;
    u8 * auto_image_osd;
    void * direct_buffer[2];
    int ebc_power_status;
    int ebc_last_display;
    char * lut_ddr_vir;
    struct ebc_buf_s * prev_dsp_buf;
    struct ebc_buf_s * curr_dsp_buf;
    struct wake_lock suspend_lock;
    int wake_lock_is_set;
    int first_in;
    struct timer_list vdd_timer;
    struct timer_list frame_timer;
    struct work_struct auto_buffer_work;
    struct workqueue_struct * auto_buffer_wq;
    int is_early_suspend;
    int is_deep_sleep;
    int is_power_off;
    int overlay_enable;
    int overlay_start;
    undefined field57_0x27c;
    undefined field58_0x27d;
    undefined field59_0x27e;
    undefined field60_0x27f;
};

typedef struct ebc ebc, *Pebc;

struct ebc {
    struct device * dev;
    struct ebc_tcon * tcon;
    struct ebc_pmic * pmic;
    struct ebc_panel panel;
    struct ebc_info info;
};


// WARNING! conflicting data type names: /DWARF/ebc_dev.c/ebc_auto_tast_function/lexical_block_0/anon_union_for___u - /DWARF/list.h/INIT_LIST_HEAD/lexical_block_2_0_10_0/anon_union_for___u

typedef struct ebc_buf_info ebc_buf_info, *Pebc_buf_info;

struct ebc_buf_info {
    int offset;
    int epd_mode;
    int height;
    int width;
    int panel_color;
    int win_x1;
    int win_y1;
    int win_x2;
    int win_y2;
    int width_mm;
    int height_mm;
    int needpic;
    char tid_name[16];
};

typedef struct static_key_false static_key_false, *Pstatic_key_false;

struct static_key_false {
    struct static_key key;
};

typedef union anon_union.conflicte9b anon_union.conflicte9b, *Panon_union.conflicte9b;

union anon_union.conflicte9b {
    ulong type;
    struct jump_entry * entries;
    struct static_key_mod * next;
};

typedef struct firmware firmware, *Pfirmware;

struct firmware {
    size_t size;
    u8 * data;
    struct page.conflict * * pages;
    void * priv;
};

typedef struct buf_info_s buf_info_s, *Pbuf_info_s;

struct buf_info_s {
    int buf_total_num;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    ulong phy_mem_base;
    char * virt_mem_base;
    struct buf_list_s * buf_list;
    int use_buf_is_empty;
    undefined field9_0x24;
    undefined field10_0x25;
    undefined field11_0x26;
    undefined field12_0x27;
    struct buf_list_s * dsp_buf_list;
    int dsp_buf_list_status;
    undefined field15_0x34;
    undefined field16_0x35;
    undefined field17_0x36;
    undefined field18_0x37;
    struct ebc_buf_s * osd_buf;
    struct mutex.conflict dsp_buf_lock;
    struct mutex.conflict ebc_buf_lock;
};

typedef union anon_union.conflict4d9b anon_union.conflict4d9b, *Panon_union.conflict4d9b;

union anon_union.conflict4d9b {
    struct list_head private_list;
    struct callback_head callback_head;
};

typedef enum cgroup_subsys_id {
    cpuset_cgrp_id=0,
    cpu_cgrp_id=1,
    cpuacct_cgrp_id=2,
    devices_cgrp_id=3,
    freezer_cgrp_id=4,
    CGROUP_SUBSYS_COUNT=5
} cgroup_subsys_id;

typedef struct idr.conflict idr.conflict, *Pidr.conflict;

struct idr.conflict {
    struct radix_tree_root.conflict idr_rt;
    uint idr_base;
    uint idr_next;
};

typedef struct ida_bitmap ida_bitmap, *Pida_bitmap;

struct ida_bitmap {
    ulong bitmap[16];
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef __s64 Elf64_Sxword;

typedef union anon_union.conflictce64_for_d_un anon_union.conflictce64_for_d_un, *Panon_union.conflictce64_for_d_un;

union anon_union.conflictce64_for_d_un {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
};

struct Elf64_Dyn {
    Elf64_Sxword d_tag;
    union anon_union.conflictce64_for_d_un d_un;
};

typedef union anon_union.conflictce64 anon_union.conflictce64, *Panon_union.conflictce64;

union anon_union.conflictce64 {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
};

typedef struct kset_uevent_ops kset_uevent_ops, *Pkset_uevent_ops;

typedef struct kset kset, *Pkset;

struct kset {
    struct list_head list;
    spinlock_t list_lock;
    undefined field2_0x14;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
    struct kobject kobj;
    struct kset_uevent_ops * uevent_ops;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kset_uevent_ops {
    int (* filter)(struct kset *, struct kobject *);
    char * (* name)(struct kset *, struct kobject *);
    int (* uevent)(struct kset *, struct kobject *, struct kobj_uevent_env *);
};

typedef struct kobj_attribute kobj_attribute, *Pkobj_attribute;

struct kobj_attribute {
    struct attribute attr;
    ssize_t (* show)(struct kobject *, struct kobj_attribute *, char *);
    ssize_t (* store)(struct kobject *, struct kobj_attribute *, char *, size_t);
};

typedef union anon_union.conflict179d5 anon_union.conflict179d5, *Panon_union.conflict179d5;

union anon_union.conflict179d5 {
    int _pad[28];
    struct anon_struct.conflict177f2 _kill;
    struct anon_struct.conflict18715 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict18715 _sigfault;
    struct anon_struct.conflict18715 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

typedef union anon_union.conflict260f6 anon_union.conflict260f6, *Panon_union.conflict260f6;

union anon_union.conflict260f6 {
    int _pad[28];
    struct anon_struct.conflict177f2 _kill;
    struct anon_struct.conflict39a9 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict3adc _sigfault;
    struct anon_struct.conflict3af7 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

typedef union anon_union.conflict3ab2 anon_union.conflict3ab2, *Panon_union.conflict3ab2;

union anon_union.conflict3ab2 {
    short _addr_lsb;
    struct anon_struct.conflict3a54 _addr_bnd;
    struct anon_struct.conflict3a91 _addr_pkey;
};

typedef union anon_union.conflict3b45 anon_union.conflict3b45, *Panon_union.conflict3b45;

union anon_union.conflict3b45 {
    int _pad[28];
    struct anon_struct.conflict9558 _kill;
    struct anon_struct.conflict39a9 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict3adc _sigfault;
    struct anon_struct.conflict3af7 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

typedef struct mem_section mem_section, *Pmem_section;

struct mem_section {
    ulong section_mem_map;
    ulong * pageblock_flags;
};

typedef struct pglist_data pglist_data, *Ppglist_data;

typedef struct zone zone, *Pzone;

typedef struct zonelist zonelist, *Pzonelist;

typedef enum zone_type {
    ZONE_DMA32=0,
    ZONE_NORMAL=1,
    ZONE_MOVABLE=2,
    __MAX_NR_ZONES=3
} zone_type;

typedef struct zone_padding zone_padding, *Pzone_padding;

typedef struct lruvec lruvec, *Plruvec;

typedef struct per_cpu_nodestat per_cpu_nodestat, *Pper_cpu_nodestat;

typedef struct per_cpu_pageset per_cpu_pageset, *Pper_cpu_pageset;

typedef struct free_area free_area, *Pfree_area;

typedef struct zoneref zoneref, *Pzoneref;

typedef struct zone_reclaim_stat zone_reclaim_stat, *Pzone_reclaim_stat;

typedef struct per_cpu_pages per_cpu_pages, *Pper_cpu_pages;

struct zoneref {
    struct zone * zone;
    int zone_idx;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct free_area {
    struct list_head free_list[6];
    ulong nr_free;
};

struct zonelist {
    struct zoneref _zonerefs[4];
};

struct per_cpu_nodestat {
    s8 stat_threshold;
    s8 vm_node_stat_diff[33];
};

struct per_cpu_pages {
    int count;
    int high;
    int batch;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    struct list_head lists[4];
};

struct per_cpu_pageset {
    struct per_cpu_pages pcp;
    s8 stat_threshold;
    s8 vm_stat_diff[13];
    undefined field3_0x5e;
    undefined field4_0x5f;
};

struct zone_reclaim_stat {
    ulong recent_rotated[2];
    ulong recent_scanned[2];
};

struct lruvec {
    struct list_head lists[5];
    struct zone_reclaim_stat reclaim_stat;
    atomic_long_t inactive_age;
    ulong refaults;
    struct pglist_data * pgdat;
};

struct zone_padding {
    char x[0];
};

struct zone {
    ulong watermark[3];
    ulong nr_reserved_highatomic;
    long lowmem_reserve[3];
    struct pglist_data * zone_pgdat;
    struct per_cpu_pageset * pageset;
    bool cma_alloc;
    undefined field6_0x49;
    undefined field7_0x4a;
    undefined field8_0x4b;
    undefined field9_0x4c;
    undefined field10_0x4d;
    undefined field11_0x4e;
    undefined field12_0x4f;
    ulong zone_start_pfn;
    ulong managed_pages;
    ulong spanned_pages;
    ulong present_pages;
    char * name;
    ulong nr_isolate_pageblock;
    int initialized;
    undefined field20_0x84;
    undefined field21_0x85;
    undefined field22_0x86;
    undefined field23_0x87;
    undefined field24_0x88;
    undefined field25_0x89;
    undefined field26_0x8a;
    undefined field27_0x8b;
    undefined field28_0x8c;
    undefined field29_0x8d;
    undefined field30_0x8e;
    undefined field31_0x8f;
    undefined field32_0x90;
    undefined field33_0x91;
    undefined field34_0x92;
    undefined field35_0x93;
    undefined field36_0x94;
    undefined field37_0x95;
    undefined field38_0x96;
    undefined field39_0x97;
    undefined field40_0x98;
    undefined field41_0x99;
    undefined field42_0x9a;
    undefined field43_0x9b;
    undefined field44_0x9c;
    undefined field45_0x9d;
    undefined field46_0x9e;
    undefined field47_0x9f;
    undefined field48_0xa0;
    undefined field49_0xa1;
    undefined field50_0xa2;
    undefined field51_0xa3;
    undefined field52_0xa4;
    undefined field53_0xa5;
    undefined field54_0xa6;
    undefined field55_0xa7;
    undefined field56_0xa8;
    undefined field57_0xa9;
    undefined field58_0xaa;
    undefined field59_0xab;
    undefined field60_0xac;
    undefined field61_0xad;
    undefined field62_0xae;
    undefined field63_0xaf;
    undefined field64_0xb0;
    undefined field65_0xb1;
    undefined field66_0xb2;
    undefined field67_0xb3;
    undefined field68_0xb4;
    undefined field69_0xb5;
    undefined field70_0xb6;
    undefined field71_0xb7;
    undefined field72_0xb8;
    undefined field73_0xb9;
    undefined field74_0xba;
    undefined field75_0xbb;
    undefined field76_0xbc;
    undefined field77_0xbd;
    undefined field78_0xbe;
    undefined field79_0xbf;
    struct zone_padding _pad1_;
    struct free_area free_area[11];
    ulong flags;
    spinlock_t lock;
    undefined field84_0x544;
    undefined field85_0x545;
    undefined field86_0x546;
    undefined field87_0x547;
    undefined field88_0x548;
    undefined field89_0x549;
    undefined field90_0x54a;
    undefined field91_0x54b;
    undefined field92_0x54c;
    undefined field93_0x54d;
    undefined field94_0x54e;
    undefined field95_0x54f;
    undefined field96_0x550;
    undefined field97_0x551;
    undefined field98_0x552;
    undefined field99_0x553;
    undefined field100_0x554;
    undefined field101_0x555;
    undefined field102_0x556;
    undefined field103_0x557;
    undefined field104_0x558;
    undefined field105_0x559;
    undefined field106_0x55a;
    undefined field107_0x55b;
    undefined field108_0x55c;
    undefined field109_0x55d;
    undefined field110_0x55e;
    undefined field111_0x55f;
    undefined field112_0x560;
    undefined field113_0x561;
    undefined field114_0x562;
    undefined field115_0x563;
    undefined field116_0x564;
    undefined field117_0x565;
    undefined field118_0x566;
    undefined field119_0x567;
    undefined field120_0x568;
    undefined field121_0x569;
    undefined field122_0x56a;
    undefined field123_0x56b;
    undefined field124_0x56c;
    undefined field125_0x56d;
    undefined field126_0x56e;
    undefined field127_0x56f;
    undefined field128_0x570;
    undefined field129_0x571;
    undefined field130_0x572;
    undefined field131_0x573;
    undefined field132_0x574;
    undefined field133_0x575;
    undefined field134_0x576;
    undefined field135_0x577;
    undefined field136_0x578;
    undefined field137_0x579;
    undefined field138_0x57a;
    undefined field139_0x57b;
    undefined field140_0x57c;
    undefined field141_0x57d;
    undefined field142_0x57e;
    undefined field143_0x57f;
    struct zone_padding _pad2_;
    ulong percpu_drift_mark;
    ulong compact_cached_free_pfn;
    ulong compact_cached_migrate_pfn[2];
    uint compact_considered;
    uint compact_defer_shift;
    int compact_order_failed;
    bool compact_blockskip_flush;
    bool contiguous;
    undefined field153_0x5ae;
    undefined field154_0x5af;
    undefined field155_0x5b0;
    undefined field156_0x5b1;
    undefined field157_0x5b2;
    undefined field158_0x5b3;
    undefined field159_0x5b4;
    undefined field160_0x5b5;
    undefined field161_0x5b6;
    undefined field162_0x5b7;
    undefined field163_0x5b8;
    undefined field164_0x5b9;
    undefined field165_0x5ba;
    undefined field166_0x5bb;
    undefined field167_0x5bc;
    undefined field168_0x5bd;
    undefined field169_0x5be;
    undefined field170_0x5bf;
    struct zone_padding _pad3_;
    atomic_long_t vm_stat[13];
    atomic_long_t vm_numa_stat[0];
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field178_0x648;
    undefined field179_0x649;
    undefined field180_0x64a;
    undefined field181_0x64b;
    undefined field182_0x64c;
    undefined field183_0x64d;
    undefined field184_0x64e;
    undefined field185_0x64f;
    undefined field186_0x650;
    undefined field187_0x651;
    undefined field188_0x652;
    undefined field189_0x653;
    undefined field190_0x654;
    undefined field191_0x655;
    undefined field192_0x656;
    undefined field193_0x657;
    undefined field194_0x658;
    undefined field195_0x659;
    undefined field196_0x65a;
    undefined field197_0x65b;
    undefined field198_0x65c;
    undefined field199_0x65d;
    undefined field200_0x65e;
    undefined field201_0x65f;
    undefined field202_0x660;
    undefined field203_0x661;
    undefined field204_0x662;
    undefined field205_0x663;
    undefined field206_0x664;
    undefined field207_0x665;
    undefined field208_0x666;
    undefined field209_0x667;
    undefined field210_0x668;
    undefined field211_0x669;
    undefined field212_0x66a;
    undefined field213_0x66b;
    undefined field214_0x66c;
    undefined field215_0x66d;
    undefined field216_0x66e;
    undefined field217_0x66f;
    undefined field218_0x670;
    undefined field219_0x671;
    undefined field220_0x672;
    undefined field221_0x673;
    undefined field222_0x674;
    undefined field223_0x675;
    undefined field224_0x676;
    undefined field225_0x677;
    undefined field226_0x678;
    undefined field227_0x679;
    undefined field228_0x67a;
    undefined field229_0x67b;
    undefined field230_0x67c;
    undefined field231_0x67d;
    undefined field232_0x67e;
    undefined field233_0x67f;
};

struct pglist_data {
    struct zone node_zones[3];
    struct zonelist node_zonelists[1];
    int nr_zones;
    undefined field3_0x13c4;
    undefined field4_0x13c5;
    undefined field5_0x13c6;
    undefined field6_0x13c7;
    ulong node_start_pfn;
    ulong node_present_pages;
    ulong node_spanned_pages;
    int node_id;
    undefined field11_0x13e4;
    undefined field12_0x13e5;
    undefined field13_0x13e6;
    undefined field14_0x13e7;
    wait_queue_head_t kswapd_wait;
    wait_queue_head_t pfmemalloc_wait;
    struct task_struct * kswapd;
    int kswapd_order;
    enum zone_type kswapd_classzone_idx;
    int kswapd_failures;
    int kcompactd_max_order;
    enum zone_type kcompactd_classzone_idx;
    undefined field23_0x1434;
    undefined field24_0x1435;
    undefined field25_0x1436;
    undefined field26_0x1437;
    wait_queue_head_t kcompactd_wait;
    struct task_struct * kcompactd;
    ulong totalreserve_pages;
    undefined field30_0x1460;
    undefined field31_0x1461;
    undefined field32_0x1462;
    undefined field33_0x1463;
    undefined field34_0x1464;
    undefined field35_0x1465;
    undefined field36_0x1466;
    undefined field37_0x1467;
    undefined field38_0x1468;
    undefined field39_0x1469;
    undefined field40_0x146a;
    undefined field41_0x146b;
    undefined field42_0x146c;
    undefined field43_0x146d;
    undefined field44_0x146e;
    undefined field45_0x146f;
    undefined field46_0x1470;
    undefined field47_0x1471;
    undefined field48_0x1472;
    undefined field49_0x1473;
    undefined field50_0x1474;
    undefined field51_0x1475;
    undefined field52_0x1476;
    undefined field53_0x1477;
    undefined field54_0x1478;
    undefined field55_0x1479;
    undefined field56_0x147a;
    undefined field57_0x147b;
    undefined field58_0x147c;
    undefined field59_0x147d;
    undefined field60_0x147e;
    undefined field61_0x147f;
    struct zone_padding _pad1_;
    spinlock_t lru_lock;
    undefined field64_0x1484;
    undefined field65_0x1485;
    undefined field66_0x1486;
    undefined field67_0x1487;
    struct lruvec lruvec;
    ulong flags;
    undefined field70_0x1518;
    undefined field71_0x1519;
    undefined field72_0x151a;
    undefined field73_0x151b;
    undefined field74_0x151c;
    undefined field75_0x151d;
    undefined field76_0x151e;
    undefined field77_0x151f;
    undefined field78_0x1520;
    undefined field79_0x1521;
    undefined field80_0x1522;
    undefined field81_0x1523;
    undefined field82_0x1524;
    undefined field83_0x1525;
    undefined field84_0x1526;
    undefined field85_0x1527;
    undefined field86_0x1528;
    undefined field87_0x1529;
    undefined field88_0x152a;
    undefined field89_0x152b;
    undefined field90_0x152c;
    undefined field91_0x152d;
    undefined field92_0x152e;
    undefined field93_0x152f;
    undefined field94_0x1530;
    undefined field95_0x1531;
    undefined field96_0x1532;
    undefined field97_0x1533;
    undefined field98_0x1534;
    undefined field99_0x1535;
    undefined field100_0x1536;
    undefined field101_0x1537;
    undefined field102_0x1538;
    undefined field103_0x1539;
    undefined field104_0x153a;
    undefined field105_0x153b;
    undefined field106_0x153c;
    undefined field107_0x153d;
    undefined field108_0x153e;
    undefined field109_0x153f;
    struct zone_padding _pad2_;
    struct per_cpu_nodestat * per_cpu_nodestats;
    atomic_long_t vm_stat[33];
    undefined field113_0x1650;
    undefined field114_0x1651;
    undefined field115_0x1652;
    undefined field116_0x1653;
    undefined field117_0x1654;
    undefined field118_0x1655;
    undefined field119_0x1656;
    undefined field120_0x1657;
    undefined field121_0x1658;
    undefined field122_0x1659;
    undefined field123_0x165a;
    undefined field124_0x165b;
    undefined field125_0x165c;
    undefined field126_0x165d;
    undefined field127_0x165e;
    undefined field128_0x165f;
    undefined field129_0x1660;
    undefined field130_0x1661;
    undefined field131_0x1662;
    undefined field132_0x1663;
    undefined field133_0x1664;
    undefined field134_0x1665;
    undefined field135_0x1666;
    undefined field136_0x1667;
    undefined field137_0x1668;
    undefined field138_0x1669;
    undefined field139_0x166a;
    undefined field140_0x166b;
    undefined field141_0x166c;
    undefined field142_0x166d;
    undefined field143_0x166e;
    undefined field144_0x166f;
    undefined field145_0x1670;
    undefined field146_0x1671;
    undefined field147_0x1672;
    undefined field148_0x1673;
    undefined field149_0x1674;
    undefined field150_0x1675;
    undefined field151_0x1676;
    undefined field152_0x1677;
    undefined field153_0x1678;
    undefined field154_0x1679;
    undefined field155_0x167a;
    undefined field156_0x167b;
    undefined field157_0x167c;
    undefined field158_0x167d;
    undefined field159_0x167e;
    undefined field160_0x167f;
};

typedef enum zone_watermarks {
    WMARK_MIN=0,
    WMARK_LOW=1,
    WMARK_HIGH=2,
    NR_WMARK=3
} zone_watermarks;

typedef enum migratetype {
    MIGRATE_UNMOVABLE=0,
    MIGRATE_MOVABLE=1,
    MIGRATE_RECLAIMABLE=2,
    MIGRATE_CMA=3,
    MIGRATE_HIGHATOMIC=4,
    MIGRATE_PCPTYPES=4,
    MIGRATE_ISOLATE=5,
    MIGRATE_TYPES=6
} migratetype;

typedef enum lru_list {
    LRU_INACTIVE_ANON=0,
    LRU_ACTIVE_ANON=1,
    LRU_INACTIVE_FILE=2,
    LRU_ACTIVE_FILE=3,
    LRU_UNEVICTABLE=4,
    NR_LRU_LISTS=5
} lru_list;

typedef enum zone_stat_item {
    NR_FREE_PAGES=0,
    NR_ZONE_INACTIVE_ANON=1,
    NR_ZONE_LRU_BASE=1,
    NR_ZONE_ACTIVE_ANON=2,
    NR_ZONE_INACTIVE_FILE=3,
    NR_ZONE_ACTIVE_FILE=4,
    NR_ZONE_UNEVICTABLE=5,
    NR_ZONE_WRITE_PENDING=6,
    NR_MLOCK=7,
    NR_PAGETABLE=8,
    NR_KERNEL_STACK_KB=9,
    NR_BOUNCE=10,
    NR_ZSPAGES=11,
    NR_FREE_CMA_PAGES=12,
    NR_VM_ZONE_STAT_ITEMS=13
} zone_stat_item;

typedef enum node_stat_item {
    NR_INACTIVE_ANON=0,
    NR_LRU_BASE=0,
    NR_ACTIVE_ANON=1,
    NR_INACTIVE_FILE=2,
    NR_ACTIVE_FILE=3,
    NR_UNEVICTABLE=4,
    NR_SLAB_RECLAIMABLE=5,
    NR_SLAB_UNRECLAIMABLE=6,
    NR_ISOLATED_ANON=7,
    NR_ISOLATED_FILE=8,
    WORKINGSET_REFAULT=9,
    WORKINGSET_ACTIVATE=10,
    WORKINGSET_RESTORE=11,
    WORKINGSET_NODERECLAIM=12,
    NR_ANON_MAPPED=13,
    NR_FILE_MAPPED=14,
    NR_FILE_PAGES=15,
    NR_FILE_DIRTY=16,
    NR_WRITEBACK=17,
    NR_WRITEBACK_TEMP=18,
    NR_SHMEM=19,
    NR_SHMEM_THPS=20,
    NR_SHMEM_PMDMAPPED=21,
    NR_ANON_THPS=22,
    NR_UNSTABLE_NFS=23,
    NR_VMSCAN_WRITE=24,
    NR_VMSCAN_IMMEDIATE=25,
    NR_DIRTIED=26,
    NR_WRITTEN=27,
    NR_KERNEL_MISC_RECLAIMABLE=28,
    NR_UNRECLAIMABLE_PAGES=29,
    NR_ION_HEAP=30,
    NR_ION_HEAP_POOL=31,
    NR_GPU_HEAP=32,
    NR_VM_NODE_STAT_ITEMS=33
} node_stat_item;

typedef union anon_union.conflict9b6f anon_union.conflict9b6f, *Panon_union.conflict9b6f;

union anon_union.conflict9b6f {
    struct kernfs_elem_dir dir;
    struct kernfs_elem_symlink symlink;
    struct kernfs_elem_attr attr;
};

typedef struct kernfs_syscall_ops.conflict kernfs_syscall_ops.conflict, *Pkernfs_syscall_ops.conflict;

typedef struct kernfs_root.conflict kernfs_root.conflict, *Pkernfs_root.conflict;

struct kernfs_root.conflict {
    struct kernfs_node * kn;
    uint flags;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct idr.conflict ino_idr;
    u32 last_ino;
    u32 next_generation;
    struct kernfs_syscall_ops.conflict * syscall_ops;
    struct list_head supers;
    wait_queue_head_t.conflict deactivate_waitq;
};

struct kernfs_syscall_ops.conflict {
    int (* remount_fs)(struct kernfs_root.conflict *, int *, char *);
    int (* show_options)(struct seq_file *, struct kernfs_root.conflict *);
    int (* mkdir)(struct kernfs_node *, char *, umode_t);
    int (* rmdir)(struct kernfs_node *);
    int (* rename)(struct kernfs_node *, struct kernfs_node *, char *);
    int (* show_path)(struct seq_file *, struct kernfs_node *, struct kernfs_root *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef struct kernfs_elem_dir.conflict kernfs_elem_dir.conflict, *Pkernfs_elem_dir.conflict;

struct kernfs_elem_dir.conflict {
    ulong subdirs;
    struct rb_root children;
    struct kernfs_root.conflict * root;
};

typedef union anon_union.conflict32f75 anon_union.conflict32f75, *Panon_union.conflict32f75;

union anon_union.conflict32f75 {
    struct kernfs_elem_dir.conflict dir;
    struct kernfs_elem_symlink symlink;
    struct kernfs_elem_attr attr;
};

typedef enum epd_lut_type {
    WF_TYPE_RESET=1,
    WF_TYPE_GRAY16=2,
    WF_TYPE_GRAY4=3,
    WF_TYPE_GRAY2=4,
    WF_TYPE_AUTO=5,
    WF_TYPE_A2=6,
    WF_TYPE_GC16=7,
    WF_TYPE_GL16=8,
    WF_TYPE_GLR16=9,
    WF_TYPE_GLD16=10,
    WF_TYPE_GCC16=11,
    WF_TYPE_MAX=12
} epd_lut_type;

typedef enum pvi_wf_mode {
    PVI_WF_RESET=0,
    PVI_WF_DU=1,
    PVI_WF_DU4=2,
    PVI_WF_GC16=3,
    PVI_WF_GL16=4,
    PVI_WF_GLR16=5,
    PVI_WF_GLD16=6,
    PVI_WF_A2=7,
    PVI_WF_GCC16=8,
    PVI_WF_MAX=9
} pvi_wf_mode;

typedef enum pcpu_fc {
    PCPU_FC_AUTO=0,
    PCPU_FC_EMBED=1,
    PCPU_FC_PAGE=2,
    PCPU_FC_NR=3
} pcpu_fc;

typedef struct cpu_topology cpu_topology, *Pcpu_topology;

struct cpu_topology {
    int thread_id;
    int core_id;
    int package_id;
    int llc_id;
    cpumask_t thread_sibling;
    cpumask_t core_sibling;
    cpumask_t llc_sibling;
};

typedef void (* regmap_lock)(void *);

typedef struct regmap_config regmap_config, *Pregmap_config;

typedef void (* regmap_unlock)(void *);

typedef struct regmap_access_table regmap_access_table, *Pregmap_access_table;

typedef struct reg_default reg_default, *Preg_default;

typedef enum regcache_type {
    REGCACHE_NONE=0,
    REGCACHE_RBTREE=1,
    REGCACHE_COMPRESSED=2,
    REGCACHE_FLAT=3
} regcache_type;

typedef enum regmap_endian {
    REGMAP_ENDIAN_DEFAULT=0,
    REGMAP_ENDIAN_BIG=1,
    REGMAP_ENDIAN_LITTLE=2,
    REGMAP_ENDIAN_NATIVE=3
} regmap_endian;

typedef struct regmap_range_cfg regmap_range_cfg, *Pregmap_range_cfg;

typedef struct regmap_range regmap_range, *Pregmap_range;

struct regmap_config {
    char * name;
    int reg_bits;
    int reg_stride;
    int pad_bits;
    int val_bits;
    bool (* writeable_reg)(struct device *, uint);
    bool (* readable_reg)(struct device *, uint);
    bool (* volatile_reg)(struct device *, uint);
    bool (* precious_reg)(struct device *, uint);
    bool (* readable_noinc_reg)(struct device *, uint);
    bool disable_locking;
    undefined field11_0x41;
    undefined field12_0x42;
    undefined field13_0x43;
    undefined field14_0x44;
    undefined field15_0x45;
    undefined field16_0x46;
    undefined field17_0x47;
    regmap_lock lock;
    regmap_unlock unlock;
    void * lock_arg;
    int (* reg_read)(void *, uint, uint *);
    int (* reg_write)(void *, uint, uint);
    bool fast_io;
    undefined field24_0x71;
    undefined field25_0x72;
    undefined field26_0x73;
    uint max_register;
    struct regmap_access_table * wr_table;
    struct regmap_access_table * rd_table;
    struct regmap_access_table * volatile_table;
    struct regmap_access_table * precious_table;
    struct regmap_access_table * rd_noinc_table;
    struct reg_default * reg_defaults;
    uint num_reg_defaults;
    enum regcache_type cache_type;
    void * reg_defaults_raw;
    uint num_reg_defaults_raw;
    undefined field38_0xbc;
    undefined field39_0xbd;
    undefined field40_0xbe;
    undefined field41_0xbf;
    ulong read_flag_mask;
    ulong write_flag_mask;
    bool zero_flag_mask;
    bool use_single_rw;
    bool can_multi_write;
    undefined field47_0xd3;
    enum regmap_endian reg_format_endian;
    enum regmap_endian val_format_endian;
    undefined field50_0xdc;
    undefined field51_0xdd;
    undefined field52_0xde;
    undefined field53_0xdf;
    struct regmap_range_cfg * ranges;
    uint num_ranges;
    bool use_hwlock;
    undefined field57_0xed;
    undefined field58_0xee;
    undefined field59_0xef;
    uint hwlock_id;
    uint hwlock_mode;
};

struct regmap_access_table {
    struct regmap_range * yes_ranges;
    uint n_yes_ranges;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    struct regmap_range * no_ranges;
    uint n_no_ranges;
    undefined field8_0x1c;
    undefined field9_0x1d;
    undefined field10_0x1e;
    undefined field11_0x1f;
};

struct regmap_range {
    uint range_min;
    uint range_max;
};

struct regmap_range_cfg {
    char * name;
    uint range_min;
    uint range_max;
    uint selector_reg;
    uint selector_mask;
    int selector_shift;
    uint window_start;
    uint window_len;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
};

struct reg_default {
    uint reg;
    uint def;
};

typedef struct seqlock_t seqlock_t, *Pseqlock_t;

struct seqlock_t {
    struct seqcount seqcount;
    spinlock_t lock;
};

typedef struct secondary_data secondary_data, *Psecondary_data;

struct secondary_data {
    void * stack;
    struct task_struct * task;
    long status;
};

typedef union anon_union.conflictd091 anon_union.conflictd091, *Panon_union.conflictd091;

union anon_union.conflictd091 {
    void * arg;
    struct kparam_string * str;
    struct kparam_array * arr;
};

typedef struct papyrus_sess papyrus_sess, *Ppapyrus_sess;

struct papyrus_sess {
    struct device * dev;
    struct i2c_client.conflict * client;
    uint8_t enable_reg_shadow;
    uint8_t vadj;
    uint8_t vcom1;
    uint8_t vcom2;
    uint8_t upseq0;
    uint8_t upseq1;
    uint8_t dwnseq0;
    uint8_t dwnseq1;
    int irq;
    undefined field11_0x1c;
    undefined field12_0x1d;
    undefined field13_0x1e;
    undefined field14_0x1f;
    struct gpio_desc * int_pin;
    struct gpio_desc * pwr_en_pin;
    struct gpio_desc * pwr_up_pin;
    struct gpio_desc * wake_up_pin;
    struct gpio_desc * vcom_ctl_pin;
    struct mutex power_lock;
    undefined field21_0x68;
    undefined field22_0x69;
    undefined field23_0x6a;
    undefined field24_0x6b;
    undefined field25_0x6c;
    undefined field26_0x6d;
    undefined field27_0x6e;
    undefined field28_0x6f;
    undefined field29_0x70;
    undefined field30_0x71;
    undefined field31_0x72;
    undefined field32_0x73;
    undefined field33_0x74;
    undefined field34_0x75;
    undefined field35_0x76;
    undefined field36_0x77;
    undefined field37_0x78;
    undefined field38_0x79;
    undefined field39_0x7a;
    undefined field40_0x7b;
    undefined field41_0x7c;
    undefined field42_0x7d;
    undefined field43_0x7e;
    undefined field44_0x7f;
    struct workqueue_struct * tmp_monitor_wq;
    struct delayed_work tmp_delay_work;
};

typedef struct papyrus_hw_state papyrus_hw_state, *Ppapyrus_hw_state;

struct papyrus_hw_state {
    uint8_t tmst_value;
    uint8_t int_status1;
    uint8_t int_status2;
    uint8_t pg_status;
};

typedef struct arch_timer_erratum_workaround arch_timer_erratum_workaround, *Parch_timer_erratum_workaround;

typedef struct clock_event_device clock_event_device, *Pclock_event_device;

typedef enum arch_timer_erratum_match_type {
    ate_match_dt=0,
    ate_match_local_cap_id=1,
    ate_match_acpi_oem_info=2
} arch_timer_erratum_match_type;

struct clock_event_device {
};

struct arch_timer_erratum_workaround {
    enum arch_timer_erratum_match_type match_type;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void * id;
    char * desc;
    u32 (* read_cntp_tval_el0)(void);
    u32 (* read_cntv_tval_el0)(void);
    u64 (* read_cntpct_el0)(void);
    u64 (* read_cntvct_el0)(void);
    int (* set_next_event_phys)(ulong, struct clock_event_device *);
    int (* set_next_event_virt)(ulong, struct clock_event_device *);
};

typedef struct blocking_notifier_head blocking_notifier_head, *Pblocking_notifier_head;

struct blocking_notifier_head {
    struct rw_semaphore rwsem;
    struct notifier_block * head;
};

typedef struct blocking_notifier_head.conflict blocking_notifier_head.conflict, *Pblocking_notifier_head.conflict;

struct blocking_notifier_head.conflict {
    struct rw_semaphore.conflict rwsem;
    struct notifier_block * head;
};

typedef struct tick_device tick_device, *Ptick_device;

struct tick_device {
};

typedef struct start_info start_info, *Pstart_info;

struct start_info {
};

typedef struct seq_operations.conflict seq_operations.conflict, *Pseq_operations.conflict;

typedef struct seq_file.conflict seq_file.conflict, *Pseq_file.conflict;

struct seq_file.conflict {
    char * buf;
    size_t size;
    size_t from;
    size_t count;
    size_t pad_until;
    loff_t index;
    loff_t read_pos;
    u64 version;
    struct mutex.conflict lock;
    struct seq_operations.conflict * op;
    int poll_event;
    undefined field11_0x84;
    undefined field12_0x85;
    undefined field13_0x86;
    undefined field14_0x87;
    struct file.conflict * file;
    void * private;
};

struct seq_operations.conflict {
    void * (* start)(struct seq_file.conflict *, loff_t *);
    void (* stop)(struct seq_file.conflict *, void *);
    void * (* next)(struct seq_file.conflict *, void *, loff_t *);
    int (* show)(struct seq_file.conflict *, void *);
};

typedef struct shared_info shared_info, *Pshared_info;

struct shared_info {
};

typedef struct anon_vma anon_vma, *Panon_vma;

struct anon_vma {
};

typedef struct mod_tree_node.conflict mod_tree_node.conflict, *Pmod_tree_node.conflict;

struct mod_tree_node.conflict {
    struct module.conflict * mod;
    struct latch_tree_node node;
};

typedef union anon_union.conflict3b45_for__sifields anon_union.conflict3b45_for__sifields, *Panon_union.conflict3b45_for__sifields;

union anon_union.conflict3b45_for__sifields {
    int _pad[28];
    struct anon_struct.conflict9558 _kill;
    struct anon_struct.conflict39a9 _timer;
    struct anon_struct.conflict39e2 _rt;
    struct anon_struct.conflict3a0f _sigchld;
    struct anon_struct.conflict3adc _sigfault;
    struct anon_struct.conflict3af7 _sigpoll;
    struct anon_struct.conflict3b18 _sigsys;
};

typedef union anon_union.conflict17a5_for_field_0 anon_union.conflict17a5_for_field_0, *Panon_union.conflict17a5_for_field_0;

union anon_union.conflict17a5_for_field_0 {
    struct anon_struct.conflict5094 field_0;
    u64 hash_len;
};

typedef union anon_union.conflict1eaa8_for_field_13 anon_union.conflict1eaa8_for_field_13, *Panon_union.conflict1eaa8_for_field_13;

union anon_union.conflict1eaa8_for_field_13 {
    void (* d_canonical_path)(struct path.conflict *, struct path.conflict *);
    struct anon_struct.conflict45cf field_1;
    union anon_union.conflict179d5 field_2;
};

typedef struct pvi_waveform pvi_waveform, *Ppvi_waveform;

struct pvi_waveform {
    u32 checksum;
    u32 file_length;
    u32 serial;
    u8 run_type;
    u8 fpl_platform;
    u16 fpl_lot;
    u8 mode_version;
    u8 wf_version;
    u8 wf_subversion;
    u8 wf_type;
    u8 panel_size;
    u8 amepd_part_number;
    u8 wfm_rev;
    u8 frame_rate;
    u32 reserved;
    u8 vcom_offset;
    u8 xwia[3];
    u8 sc1;
    u8 unknown1[4];
    u8 modenumber;
    u8 temperaturenumber;
    u8 unknown2[9];
};

typedef struct file_operations.conflict1 file_operations.conflict1, *Pfile_operations.conflict1;

struct file_operations.conflict1 {
    struct module.conflict * owner;
    loff_t (* llseek)(struct file.conflict *, loff_t, int);
    ssize_t (* read)(struct file.conflict *, char *, size_t, loff_t *);
    ssize_t (* write)(struct file.conflict *, char *, size_t, loff_t *);
    ssize_t (* read_iter)(struct kiocb.conflict *, struct iov_iter *);
    ssize_t (* write_iter)(struct kiocb.conflict *, struct iov_iter *);
    int (* iterate)(struct file.conflict *, struct dir_context *);
    int (* iterate_shared)(struct file.conflict *, struct dir_context *);
    __poll_t (* poll)(struct file.conflict *, struct poll_table_struct *);
    long (* unlocked_ioctl)(struct file.conflict *, uint, ulong);
    long (* compat_ioctl)(struct file.conflict *, uint, ulong);
    int (* mmap)(struct file.conflict *, struct vm_area_struct *);
    ulong mmap_supported_flags;
    int (* open)(struct inode.conflict *, struct file.conflict *);
    int (* flush)(struct file.conflict *, fl_owner_t);
    int (* release)(struct inode.conflict *, struct file.conflict *);
    int (* fsync)(struct file.conflict *, loff_t, loff_t, int);
    int (* fasync)(int, struct file.conflict *, int);
    int (* lock)(struct file.conflict *, int, struct file_lock.conflict *);
    ssize_t (* sendpage)(struct file.conflict *, struct page.conflict *, int, size_t, loff_t *, int);
    ulong (* get_unmapped_area)(struct file.conflict *, ulong, ulong, ulong, ulong);
    int (* check_flags)(int);
    int (* flock)(struct file.conflict *, int, struct file_lock.conflict *);
    ssize_t (* splice_write)(struct pipe_inode_info *, struct file.conflict *, loff_t *, size_t, uint);
    ssize_t (* splice_read)(struct file.conflict *, loff_t *, struct pipe_inode_info *, size_t, uint);
    int (* setlease)(struct file.conflict *, long, struct file_lock.conflict * *, void * *);
    long (* fallocate)(struct file.conflict *, int, loff_t, loff_t);
    void (* show_fdinfo)(struct seq_file.conflict *, struct file.conflict *);
    ssize_t (* copy_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, size_t, uint);
    int (* clone_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, u64);
    int (* dedupe_file_range)(struct file.conflict *, loff_t, struct file.conflict *, loff_t, u64);
    int (* fadvise)(struct file.conflict *, loff_t, loff_t, int);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef union anon_union.conflict7c42 anon_union.conflict7c42, *Panon_union.conflict7c42;

union anon_union.conflict7c42 {
    struct pipe_inode_info * i_pipe;
    struct block_device * i_bdev;
    struct cdev * i_cdev;
    char * i_link;
    uint i_dir_seq;
};

typedef struct address_space_operations.conflict1 address_space_operations.conflict1, *Paddress_space_operations.conflict1;

struct address_space_operations.conflict1 {
    int (* writepage)(struct page.conflict *, struct writeback_control *);
    int (* readpage)(struct file.conflict *, struct page.conflict *);
    int (* writepages)(struct address_space *, struct writeback_control *);
    int (* set_page_dirty)(struct page.conflict *);
    int (* readpages)(struct file.conflict *, struct address_space *, struct list_head *, uint);
    int (* write_begin)(struct file.conflict *, struct address_space *, loff_t, uint, uint, struct page.conflict * *, void * *);
    int (* write_end)(struct file.conflict *, struct address_space *, loff_t, uint, uint, struct page.conflict *, void *);
    sector_t (* bmap)(struct address_space *, sector_t);
    void (* invalidatepage)(struct page.conflict *, uint, uint);
    int (* releasepage)(struct page.conflict *, gfp_t);
    void (* freepage)(struct page.conflict *);
    ssize_t (* direct_IO)(struct kiocb.conflict *, struct iov_iter *);
    int (* migratepage)(struct address_space *, struct page.conflict *, struct page.conflict *, enum migrate_mode);
    bool (* isolate_page)(struct page.conflict *, isolate_mode_t);
    void (* putback_page)(struct page.conflict *);
    int (* launder_page)(struct page.conflict *);
    int (* is_partially_uptodate)(struct page.conflict *, ulong, ulong);
    void (* is_dirty_writeback)(struct page.conflict *, bool *, bool *);
    int (* error_remove_page)(struct address_space *, struct page.conflict *);
    int (* swap_activate)(struct swap_info_struct *, struct file.conflict *, sector_t *);
    void (* swap_deactivate)(struct file.conflict *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef union anon_union.conflict3fdd9 anon_union.conflict3fdd9, *Panon_union.conflict3fdd9;

union anon_union.conflict3fdd9 {
    struct pipe_inode_info * i_pipe;
    struct block_device.conflict1 * i_bdev;
    struct cdev.conflict * i_cdev;
    char * i_link;
    uint i_dir_seq;
};

typedef union anon_union.conflict7c20 anon_union.conflict7c20, *Panon_union.conflict7c20;

union anon_union.conflict7c20 {
    struct hlist_head i_dentry;
    struct callback_head i_rcu;
};

typedef union anon_union.conflict7bfe anon_union.conflict7bfe, *Panon_union.conflict7bfe;

union anon_union.conflict7bfe {
    uint i_nlink;
    uint __i_nlink;
};

typedef union anon_union.conflict82f6 anon_union.conflict82f6, *Panon_union.conflict82f6;

union anon_union.conflict82f6 {
    struct nfs_lock_info nfs_fl;
    struct nfs4_lock_info nfs4_fl;
    struct anon_struct.conflict82d2 afs;
};

typedef struct inodes_stat_t inodes_stat_t, *Pinodes_stat_t;

struct inodes_stat_t {
    long nr_inodes;
    long nr_unused;
    long dummy[5];
};

typedef struct address_space_operations.conflict2 address_space_operations.conflict2, *Paddress_space_operations.conflict2;

struct address_space_operations.conflict2 {
    int (* writepage)(struct page.conflict *, struct writeback_control *);
    int (* readpage)(struct file *, struct page.conflict *);
    int (* writepages)(struct address_space *, struct writeback_control *);
    int (* set_page_dirty)(struct page.conflict *);
    int (* readpages)(struct file *, struct address_space *, struct list_head *, uint);
    int (* write_begin)(struct file *, struct address_space *, loff_t, uint, uint, struct page.conflict * *, void * *);
    int (* write_end)(struct file *, struct address_space *, loff_t, uint, uint, struct page.conflict *, void *);
    sector_t (* bmap)(struct address_space *, sector_t);
    void (* invalidatepage)(struct page.conflict *, uint, uint);
    int (* releasepage)(struct page.conflict *, gfp_t);
    void (* freepage)(struct page.conflict *);
    ssize_t (* direct_IO)(struct kiocb.conflict *, struct iov_iter *);
    int (* migratepage)(struct address_space *, struct page.conflict *, struct page.conflict *, enum migrate_mode);
    bool (* isolate_page)(struct page.conflict *, isolate_mode_t);
    void (* putback_page)(struct page.conflict *);
    int (* launder_page)(struct page.conflict *);
    int (* is_partially_uptodate)(struct page.conflict *, ulong, ulong);
    void (* is_dirty_writeback)(struct page.conflict *, bool *, bool *);
    int (* error_remove_page)(struct address_space *, struct page.conflict *);
    int (* swap_activate)(struct swap_info_struct *, struct file *, sector_t *);
    void (* swap_deactivate)(struct file *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef union anon_union.conflict209b3 anon_union.conflict209b3, *Panon_union.conflict209b3;

union anon_union.conflict209b3 {
    struct pipe_inode_info * i_pipe;
    struct block_device.conflict * i_bdev;
    struct cdev * i_cdev;
    char * i_link;
    uint i_dir_seq;
};

typedef struct files_stat_struct files_stat_struct, *Pfiles_stat_struct;

struct files_stat_struct {
    ulong nr_files;
    ulong nr_free_files;
    ulong max_files;
};

typedef struct sb_writers.conflict1 sb_writers.conflict1, *Psb_writers.conflict1;

struct sb_writers.conflict1 {
    int frozen;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    wait_queue_head_t.conflict wait_unfrozen;
    struct percpu_rw_semaphore.conflict1 rw_sem[3];
};

typedef union anon_union.conflict7f49 anon_union.conflict7f49, *Panon_union.conflict7f49;

union anon_union.conflict7f49 {
    struct llist_node fu_llist;
    struct callback_head fu_rcuhead;
};

typedef struct bin_attribute.conflict bin_attribute.conflict, *Pbin_attribute.conflict;

struct bin_attribute.conflict {
    struct attribute attr;
    size_t size;
    void * private;
    ssize_t (* read)(struct file.conflict *, struct kobject *, struct bin_attribute.conflict *, char *, loff_t, size_t);
    ssize_t (* write)(struct file.conflict *, struct kobject *, struct bin_attribute.conflict *, char *, loff_t, size_t);
    int (* mmap)(struct file.conflict *, struct kobject *, struct bin_attribute.conflict *, struct vm_area_struct *);
};

typedef union anon_union.conflict15c2c anon_union.conflict15c2c, *Panon_union.conflict15c2c;

union anon_union.conflict15c2c {
    struct raw_spinlock.conflict rlock;
};

typedef union anon_union.conflicte3e anon_union.conflicte3e, *Panon_union.conflicte3e;

union anon_union.conflicte3e {
    struct raw_spinlock rlock;
};

typedef union anon_union.conflict1995f anon_union.conflict1995f, *Panon_union.conflict1995f;

union anon_union.conflict1995f {
    struct raw_spinlock rlock;
    undefined1 field1[24]; // Automatically generated padding to match DWARF declared size
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};


// WARNING! conflicting data type names: /ELF/Elf64_Sym - /DWARF/elf.h/Elf64_Sym

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};




void get_auto_image(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,u8 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  u32 uVar5;
  u32 uVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  ebc *peVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  u32 uVar15;
  byte bVar16;
  byte bVar17;
  
  peVar10 = global_ebc;
  bVar8 = ebc_info->frame_total;
  uVar6 = (global_ebc->panel).mirror;
  uVar4 = (global_ebc->panel).vir_width;
  uVar5 = (global_ebc->panel).vir_height;
  ebc_info->auto_need_refresh = 0;
  if (0 < (int)uVar5) {
    uVar4 = uVar4 >> 3;
    uVar15 = 0;
    lVar1 = (ulong)(uVar4 - 1) + 1;
    do {
      if (uVar6 == 0) {
        uVar11 = uVar15 * (peVar10->panel).vir_width;
      }
      else {
        uVar11 = (((peVar10->panel).vir_height - 1) - uVar15) * (peVar10->panel).vir_width;
      }
      lVar12 = 0;
      pbVar9 = frame_count;
      pbVar13 = data_buf + (uVar11 >> 2);
      if (uVar4 != 0) {
        do {
          uVar7 = buffer_new[lVar12];
          uVar11 = buffer_old[lVar12];
          if (uVar7 == uVar11) {
            *pbVar13 = 0;
            pbVar13[1] = 0;
          }
          else {
            uVar3 = uVar7 ^ uVar11;
            ebc_info->auto_need_refresh = 1;
            bVar16 = 0;
            uVar14 = (uint)bVar8;
            if ((uVar3 & 0xf) != 0) {
              uVar2 = *pbVar9 + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)*pbVar9 << 0x10) +
                        (ulong)((uVar11 & 0xff) * 0x100 + (uVar7 & 0xff))] & 3;
              if (uVar14 == uVar2) {
                uVar11 = uVar11 & 0xfffffff0 | uVar7 & 0xf;
                bVar17 = 0;
              }
              *pbVar9 = bVar17;
            }
            if ((uVar3 & 0xf0) != 0) {
              uVar2 = pbVar9[1] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[1] << 0x10) +
                                (ulong)((uVar11 >> 4 & 0xff) * 0x100 + (uVar7 >> 4 & 0xff))] & 3) <<
                             2) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf0 | uVar11 & 0xffffff0f;
                bVar17 = 0;
              }
              pbVar9[1] = bVar17;
            }
            if ((uVar3 & 0xf00) != 0) {
              uVar2 = pbVar9[2] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[2] << 0x10) +
                                (ulong)((ushort)(uVar7 >> 8) & 0xff | (ushort)uVar11 & 0xff00)] & 3)
                             << 4) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf00 | uVar11 & 0xfffff0ff;
                bVar17 = 0;
              }
              pbVar9[2] = bVar17;
            }
            if ((uVar3 & 0xf000) != 0) {
              uVar2 = pbVar9[3] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[3] << 0x10) +
                                (ulong)((uVar11 >> 0xc & 0xff) * 0x100 + (uVar7 >> 0xc & 0xff))] & 3
                              ) << 6) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf000 | uVar11 & 0xffff0fff;
                bVar17 = 0;
              }
              pbVar9[3] = bVar17;
            }
            *pbVar13 = bVar16;
            bVar16 = 0;
            if ((uVar3 & 0xf0000) != 0) {
              uVar2 = pbVar9[4] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)pbVar9[4] << 0x10) +
                        (ulong)((uVar11 >> 0x10 & 0xff) * 0x100 + (uVar7 >> 0x10 & 0xff))] & 3;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf0000 | uVar11 & 0xfff0ffff;
                bVar17 = 0;
              }
              pbVar9[4] = bVar17;
            }
            if ((uVar3 & 0xf00000) != 0) {
              uVar2 = pbVar9[5] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[5] << 0x10) +
                                (ulong)((uVar11 >> 0x14 & 0xff) * 0x100 + (uVar7 >> 0x14 & 0xff))] &
                              3) << 2) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf00000 | uVar11 & 0xff0fffff;
                bVar17 = 0;
              }
              pbVar9[5] = bVar17;
            }
            if ((uVar3 & 0xf000000) != 0) {
              uVar2 = pbVar9[6] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[6] << 0x10) +
                                (ulong)((uVar7 >> 0x18) + (uVar11 >> 0x18) * 0x100)] & 3) << 4) |
                       bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf000000 | uVar11 & 0xf0ffffff;
                bVar17 = 0;
              }
              pbVar9[6] = bVar17;
            }
            if ((uVar3 & 0xf0000000) != 0) {
              uVar3 = pbVar9[7] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[7] << 0x10) +
                                (ulong)((uVar7 >> 0x1c) + (uVar11 >> 0x1c) * 0x100)] & 3) << 6) |
                       bVar16;
              if (uVar14 == uVar3) {
                uVar11 = uVar7 & 0xf0000000 | uVar11 & 0xfffffff;
                bVar17 = 0;
              }
              pbVar9[7] = bVar17;
            }
            buffer_old[lVar12] = uVar11;
            pbVar13[1] = bVar16;
          }
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar9 + 8;
          pbVar13 = pbVar13 + 2;
        } while ((int)lVar12 < (int)uVar4);
        frame_count = frame_count + lVar1 * 8;
        buffer_old = buffer_old + lVar1;
        buffer_new = buffer_new + lVar1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar5 != uVar15);
    return;
  }
  return;
}



void get_overlay_image(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,u8 *frame_count,
                      ebc_info *ebc_info)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  u32 uVar6;
  u32 uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  ebc *peVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  u32 uVar15;
  byte bVar16;
  byte bVar17;
  
  peVar11 = global_ebc;
  uVar5 = (global_ebc->panel).vir_width;
  uVar6 = (global_ebc->panel).vir_height;
  uVar7 = (global_ebc->panel).mirror;
  ebc_info->auto_need_refresh = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar5 >> 3;
    uVar15 = 0;
    lVar1 = (ulong)(uVar5 - 1) + 1;
    do {
      if (uVar7 == 0) {
        uVar12 = uVar15 * (peVar11->panel).vir_width;
      }
      else {
        uVar12 = (((peVar11->panel).vir_height - 1) - uVar15) * (peVar11->panel).vir_width;
      }
      lVar13 = 0;
      pbVar10 = frame_count;
      pbVar14 = data_buf + (uVar12 >> 2);
      if (uVar5 != 0) {
        do {
          uVar8 = buffer_new[lVar13];
          uVar12 = buffer_old[lVar13];
          if (uVar8 == uVar12) {
            *pbVar14 = 0;
            pbVar14[1] = 0;
          }
          else {
            uVar4 = uVar8 ^ uVar12;
            ebc_info->auto_need_refresh = 1;
            bVar16 = 0;
            if ((uVar4 & 0xf) != 0) {
              uVar2 = *pbVar10 + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar9 = ebc_info->frame_total;
              if ((uVar8 & 0xf) == 0 || (uVar8 & 0xf) == 0xf) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)*pbVar10 << 0x10) +
                        (ulong)((uVar12 & 0xff) * 0x100 + (uVar8 & 0xff))] & 3;
              if (bVar9 == uVar2) {
                uVar12 = uVar12 & 0xfffffff0 | uVar8 & 0xf;
                bVar17 = 0;
              }
              *pbVar10 = bVar17;
            }
            if ((uVar4 & 0xf0) != 0) {
              uVar2 = uVar8 & 0xf0;
              uVar3 = pbVar10[1] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf0 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[1] << 0x10) +
                                (ulong)((uVar12 >> 4 & 0xff) * 0x100 + (uVar8 >> 4 & 0xff))] & 3) <<
                             2) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xffffff0f;
              }
              pbVar10[1] = bVar17;
            }
            if ((uVar4 & 0xf00) != 0) {
              uVar2 = uVar8 & 0xf00;
              uVar3 = pbVar10[2] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf00 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[2] << 0x10) +
                                (ulong)((ushort)(uVar8 >> 8) & 0xff | (ushort)uVar12 & 0xff00)] & 3)
                             << 4) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xfffff0ff;
              }
              pbVar10[2] = bVar17;
            }
            if ((uVar4 & 0xf000) != 0) {
              uVar2 = uVar8 & 0xf000;
              uVar3 = pbVar10[3] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[3] << 0x10) +
                                (ulong)((uVar12 >> 0xc & 0xff) * 0x100 + (uVar8 >> 0xc & 0xff))] & 3
                              ) << 6) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xffff0fff;
              }
              pbVar10[3] = bVar17;
            }
            *pbVar14 = bVar16;
            bVar16 = 0;
            if ((uVar4 & 0xf0000) != 0) {
              uVar2 = uVar8 & 0xf0000;
              uVar3 = pbVar10[4] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf0000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)pbVar10[4] << 0x10) +
                        (ulong)((uVar12 >> 0x10 & 0xff) * 0x100 + (uVar8 >> 0x10 & 0xff))] & 3;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xfff0ffff;
              }
              pbVar10[4] = bVar17;
            }
            if ((uVar4 & 0xf00000) != 0) {
              uVar2 = uVar8 & 0xf00000;
              uVar3 = pbVar10[5] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf00000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[5] << 0x10) +
                                (ulong)((uVar12 >> 0x14 & 0xff) * 0x100 + (uVar8 >> 0x14 & 0xff))] &
                              3) << 2) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xff0fffff;
              }
              pbVar10[5] = bVar17;
            }
            if ((uVar4 & 0xf000000) != 0) {
              uVar3 = uVar8 & 0xf000000;
              uVar2 = pbVar10[6] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar9 = ebc_info->frame_total;
              if (uVar3 == 0 || uVar3 == 0xf000000) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[6] << 0x10) +
                                (ulong)((uVar8 >> 0x18) + (uVar12 >> 0x18) * 0x100)] & 3) << 4) |
                       bVar16;
              if (bVar9 == uVar2) {
                bVar17 = 0;
                uVar12 = uVar3 | uVar12 & 0xf0ffffff;
              }
              pbVar10[6] = bVar17;
            }
            if ((uVar4 & 0xf0000000) != 0) {
              uVar4 = pbVar10[7] + 1 & 0xff;
              bVar17 = (byte)uVar4;
              bVar9 = ebc_info->frame_total;
              if ((uVar8 & 0xf0000000) == 0 || (uVar8 & 0xf0000000) == 0xf0000000) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[7] << 0x10) +
                                (ulong)((uVar8 >> 0x1c) + (uVar12 >> 0x1c) * 0x100)] & 3) << 6) |
                       bVar16;
              if (bVar9 == uVar4) {
                bVar17 = 0;
                uVar12 = uVar8 & 0xf0000000 | uVar12 & 0xfffffff;
              }
              pbVar10[7] = bVar17;
            }
            buffer_old[lVar13] = uVar12;
            pbVar14[1] = bVar16;
          }
          lVar13 = lVar13 + 1;
          pbVar10 = pbVar10 + 8;
          pbVar14 = pbVar14 + 2;
        } while ((int)lVar13 < (int)uVar5);
        frame_count = frame_count + lVar1 * 8;
        buffer_old = buffer_old + lVar1;
        buffer_new = buffer_new + lVar1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar6 != uVar15);
  }
  return;
}



int waveform_open(inode *inode,file *file)

{
  file->f_pos = 0;
  return 0;
}



undefined8 FUN_0010088c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  (**(code **)(*(long *)(lVar1 + 0x10) + 0x30))(*(long *)(lVar1 + 0x10));
  *(undefined4 *)(lVar1 + 0x324) = 0;
  _dev_info(*(undefined8 *)(lVar1 + 0x120),"device resume\n");
  return 0;
}



int ebc_resume(device *dev)

{
  void *pvVar1;
  
  pvVar1 = dev->driver_data;
  (**(code **)(*(long *)((long)pvVar1 + 0x10) + 0x30))(*(long *)((long)pvVar1 + 0x10));
  *(undefined4 *)((long)pvVar1 + 0x324) = 0;
  _dev_info(*(undefined8 *)((long)pvVar1 + 0x120),"device resume\n");
  return 0;
}



void ebc_vdd_power_timeout(timer_list *t)

{
  if ((global_ebc->info).wake_lock_is_set == 0) {
    return;
  }
  (global_ebc->info).wake_lock_is_set = 0;
  __pm_relax();
  return;
}



void FUN_001008ec(long param_1)

{
  *(undefined4 *)(param_1 + 0x270) = 0;
  __pm_relax();
  return;
}



undefined8 FUN_0010090c(void)

{
  misc_deregister(&ebc_misc);
  return 0;
}



int ebc_remove(platform_device *pdev)

{
  misc_deregister(&ebc_misc);
  return 0;
}



int FUN_00100934(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ebc_phy_buf_base_get();
  param_2[10] = param_2[10] | 0x4044000;
  iVar1 = remap_pfn_range(param_2,*param_2,uVar2 >> 0xc,param_2[1] - *param_2,param_2[9]);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



int ebc_mmap(file *file,vm_area_struct *vma)

{
  int iVar1;
  ulong uVar2;
  pteval_t pVar3;
  
  uVar2 = ebc_phy_buf_base_get();
  pVar3 = (vma->vm_page_prot).pgprot;
  vma->vm_flags = vma->vm_flags | 0x4044000;
  iVar1 = remap_pfn_range(vma,vma->vm_start,uVar2 >> 0xc,vma->vm_end - vma->vm_start,pVar3);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



int FUN_0010098c(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (global_ebc->info).lut_buffer_phy;
  param_2[10] = param_2[10] | 0x4044000;
  iVar1 = remap_pfn_range(param_2,*param_2,uVar2 >> 0xc,param_2[1] - *param_2,param_2[9]);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



int waveform_mmap(file *file,vm_area_struct *vma)

{
  int iVar1;
  ulong uVar2;
  pteval_t pVar3;
  
  pVar3 = (vma->vm_page_prot).pgprot;
  uVar2 = (global_ebc->info).lut_buffer_phy;
  vma->vm_flags = vma->vm_flags | 0x4044000;
  iVar1 = remap_pfn_range(vma,vma->vm_start,uVar2 >> 0xc,vma->vm_end - vma->vm_start,pVar3);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



void FUN_001009e4(undefined8 param_1,uint param_2,ulong param_3)

{
  ebc_info *peVar1;
  ebc *peVar2;
  bool bVar3;
  int iVar4;
  ebc_buf_s *peVar5;
  char *__dest;
  ulong uVar6;
  size_t sVar7;
  device *pdVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined auStack112 [40];
  int iStack72;
  panel_refresh_mode pStack68;
  u32 uStack64;
  u32 uStack60;
  u32 uStack56;
  int iStack52;
  int iStack48;
  int iStack44;
  int iStack40;
  u32 uStack36;
  u32 uStack32;
  int iStack28;
  char acStack24 [16];
  long lStack8;
  
  peVar2 = global_ebc;
  lStack8 = __stack_chk_guard;
  if ((0x6fff < param_2) && (((param_2 < 0x7004 || (param_2 - 0x7006 < 2)) && (param_3 == 0)))) {
    lVar13 = -0xe;
    _dev_err((global_ebc->info).dev,"%s: argp NULL\n","ebc_io_ctl",0);
    goto LAB_00100b84;
  }
  if (param_2 == 0x7005) {
    pdVar8 = (global_ebc->info).dev;
    (global_ebc->info).overlay_enable = 0;
    lVar13 = 0;
    (peVar2->info).overlay_start = 0;
    _dev_info(pdVar8,"disable ebc overlay\n");
    goto LAB_00100b84;
  }
  if (param_2 < 0x7006) {
    if (param_2 == 0x7002) {
      uStack36 = (global_ebc->panel).width_mm;
      uStack32 = (global_ebc->panel).height_mm;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      uStack60 = (global_ebc->panel).vir_width;
      uStack64 = (global_ebc->panel).vir_height;
      uStack56 = (global_ebc->panel).panel_color;
      iStack28 = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(param_3 << 8) >> 8 & param_3;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) !=
            0) {
          param_3 = 0;
        }
        lVar13 = __arch_copy_to_user(param_3,&iStack72,0x40);
        if (lVar13 == 0) {
          lVar13 = 0;
          goto LAB_00100b84;
        }
      }
      lVar13 = -0xe;
      _dev_err((peVar2->info).dev,"EBC_GET_BUFFER_INFO failed\n");
      goto LAB_00100b84;
    }
    if (param_2 < 0x7003) {
      if (param_2 == 0x7000) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(param_3 << 8) >> 8 & param_3;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          uVar6 = (long)(param_3 << 8) >> 8;
          uVar12 = param_3;
          if ((param_3 & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            uVar12 = 0;
          }
          sVar7 = __arch_copy_from_user(&iStack72,uVar12,0x40);
          if ((sVar7 == 0) || (memset((void *)((long)&lStack8 - sVar7),0,sVar7), (int)sVar7 == 0)) {
            peVar5 = ebc_empty_buf_get(acStack24);
            if (peVar5 != (ebc_buf_s *)0x0) {
              uVar14 = peVar5->phy_addr;
              uVar12 = ebc_phy_buf_base_get();
              uStack60 = (peVar2->panel).vir_width;
              uStack64 = (peVar2->panel).vir_height;
              puVar11 = (undefined8 *)cRead_8(sp_el0);
              uStack56 = (peVar2->panel).panel_color;
              iStack72 = (int)uVar14 - (int)uVar12;
              iStack28 = 0x10;
              if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
                 (uVar12 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
                uVar12 = param_3 & uVar6;
              }
              bVar3 = 0xffffffffffffffbf < uVar12;
              uVar12 = uVar12 + 0x40;
              uVar14 = 0;
              if (!bVar3 || uVar12 == 0) {
                uVar14 = puVar11[1];
              }
              if (bVar3) {
                uVar12 = 0xffffffffffffffff;
              }
              if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
                  uVar12 == uVar14 + !bVar3) {
                lVar13 = cRead_8(sp_el0);
                if ((param_3 & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
                  param_3 = 0;
                }
                iVar4 = __arch_copy_to_user(param_3,&iStack72,0x40);
                if (iVar4 == 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              lVar13 = -0xe;
              ebc_buf_release(peVar5);
              goto LAB_00100b84;
            }
            goto LAB_00101270;
          }
        }
      }
      else {
        if (param_2 != 0x7001) goto LAB_00101050;
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(param_3 << 8) >> 8 & param_3;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff))
              != 0) {
            param_3 = 0;
          }
          lVar13 = __arch_copy_from_user(&iStack72,param_3,0x40);
          if (lVar13 == 0) {
            uVar6 = ebc_phy_buf_base_get();
            peVar5 = ebc_find_buf_by_phy_addr((long)iStack72 + uVar6);
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = pStack68;
              peVar5->win_x1 = iStack52;
              peVar5->win_y1 = iStack48;
              peVar5->win_x2 = iStack44;
              peVar5->win_y2 = iStack40;
              peVar5->needpic = iStack28;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                __wake_up_sync(&ebc_thread_wq,1);
              }
              if (peVar5->buf_mode == EPD_SUSPEND) {
                if ((peVar2->info).is_early_suspend != 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              else if (peVar5->buf_mode != EPD_POWER_OFF) goto __out;
              (peVar2->info).ebc_last_display = 1;
              init_wait_entry(auStack112,0);
              while (lVar13 = prepare_to_wait_event(&ebc_poweroff_wq,auStack112,1),
                    (peVar2->info).ebc_last_display != 0) {
                if (lVar13 != 0) goto __out;
                schedule();
              }
              finish_wait(&ebc_poweroff_wq,auStack112);
            }
__out:
            lVar13 = 0;
            goto LAB_00100b84;
          }
        }
      }
LAB_00101200:
      lVar13 = -0xe;
    }
    else {
      if (param_2 == 0x7003) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        piVar9 = &(global_ebc->info).full_mode_num;
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(param_3 << 8) >> 8 & param_3;
        }
        bVar3 = 0xfffffffffffffffb < uVar6;
        uVar6 = uVar6 + 4;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        uVar6 = (ulong)(!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
                       uVar6 == uVar12 + !bVar3);
        if (uVar6 == 0) {
          sVar7 = 4;
        }
        else {
          lVar13 = cRead_8(sp_el0);
          if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff))
              != 0) {
            param_3 = 0;
          }
          sVar7 = __arch_copy_from_user(piVar9,param_3,4);
          if (sVar7 == 0) {
            lVar13 = 0;
            _dev_info((peVar2->info).dev,"full_mode_num = %d\n",(peVar2->info).full_mode_num);
            goto LAB_00100b84;
          }
          uVar6 = 4 - sVar7;
        }
        memset((void *)((long)piVar9 + uVar6),0,sVar7);
        lVar13 = -0xe;
        _dev_err((peVar2->info).dev,"EBC_SET_FULL_MODE_NUM failed\n");
        goto LAB_00100b84;
      }
      if (param_2 == 0x7004) {
        peVar1 = &global_ebc->info;
        (global_ebc->info).overlay_enable = 1;
        lVar13 = 0;
        _dev_info(peVar1->dev,
                  "enable ebc overlay, you can use auto_overlay mode to show somthing over the system display\n"
                 );
        goto LAB_00100b84;
      }
LAB_00101050:
      lVar13 = 0;
      _dev_err((global_ebc->info).dev,"%s: unknow cmd\n","ebc_io_ctl",0);
    }
    goto LAB_00100b84;
  }
  if (param_2 == 0x7008) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_old;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
LAB_00100aac:
      memcpy(__dest,piVar9,(ulong)(uVar10 >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      iStack72 = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      uStack60 = (peVar2->panel).vir_width;
      uStack64 = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) {
LAB_00100adc:
        uVar12 = param_3;
        if (((uint)*puVar11 >> 0x1a & 1) != 0) goto LAB_00100ae8;
      }
      else {
LAB_00100ae8:
        uVar12 = (long)(param_3 << 8) >> 8 & param_3;
      }
      bVar3 = 0xffffffffffffffbf < uVar12;
      uVar12 = uVar12 + 0x40;
      uVar14 = 0;
      if (!bVar3 || uVar12 == 0) {
        uVar14 = uVar6;
      }
      if (bVar3) {
        uVar12 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
          uVar12 == uVar14 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) !=
            0) {
          param_3 = 0;
        }
        iVar4 = __arch_copy_to_user(param_3,&iStack72,0x40);
        lVar13 = (long)iVar4;
      }
      ebc_buf_release(peVar5);
      goto LAB_00100b84;
    }
  }
  else if (param_2 < 0x7009) {
    if (param_2 != 0x7006) {
      if (param_2 == 0x7007) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(param_3 << 8) >> 8 & param_3;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff))
              != 0) {
            param_3 = 0;
          }
          lVar13 = __arch_copy_from_user(&iStack72,param_3,0x40);
          if (lVar13 == 0) {
            peVar5 = ebc_osd_buf_clone();
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = pStack68;
              peVar5->win_x1 = iStack52;
              peVar5->win_y1 = iStack48;
              peVar5->win_x2 = iStack44;
              peVar5->win_y2 = iStack40;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                lVar13 = 0;
                __wake_up_sync(&ebc_thread_wq,1);
                goto LAB_00100b84;
              }
            }
            goto __out;
          }
        }
        goto LAB_00101200;
      }
      goto LAB_00101050;
    }
    peVar5 = ebc_osd_buf_get();
    if (peVar5 != (ebc_buf_s *)0x0) {
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      uStack56 = (peVar2->panel).panel_color;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      iStack72 = (int)uVar12 - (int)uVar6;
      uStack60 = (peVar2->panel).vir_width;
      uStack64 = (peVar2->panel).vir_height;
      iStack28 = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = param_3, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(param_3 << 8) >> 8 & param_3;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(param_3 << 8) >> 8 & param_3 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) !=
            0) {
          param_3 = 0;
        }
        iVar4 = __arch_copy_to_user(param_3,&iStack72,0x40);
        lVar13 = (long)iVar4;
      }
      goto LAB_00100b84;
    }
  }
  else if (param_2 == 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_bg;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      goto LAB_00100aac;
    }
  }
  else if (param_2 < 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      memcpy(peVar5->virt_addr,(peVar2->info).auto_image_new,
             (ulong)((peVar2->panel).vir_width * (peVar2->panel).vir_height >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      iStack72 = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      uStack60 = (peVar2->panel).vir_width;
      uStack64 = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) goto LAB_00100adc;
      goto LAB_00100ae8;
    }
  }
  else {
    if (param_2 != 0x700b) goto LAB_00101050;
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      piVar9 = (int *)((peVar2->info).curr_dsp_buf)->virt_addr;
      goto LAB_00100aac;
    }
  }
LAB_00101270:
  lVar13 = -1;
LAB_00100b84:
  if (lStack8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar13);
  }
  return;
}



long ebc_io_ctl(file *file,uint cmd,ulong arg)

{
  ebc_info *peVar1;
  ebc *peVar2;
  bool bVar3;
  int iVar4;
  ebc_buf_s *peVar5;
  char *__dest;
  ulong uVar6;
  size_t sVar7;
  device *pdVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  wait_queue_entry __wq_entry;
  ebc_buf_info buf_info;
  long local_8;
  
  peVar2 = global_ebc;
  local_8 = __stack_chk_guard;
  if ((0x6fff < cmd) && (((cmd < 0x7004 || (cmd - 0x7006 < 2)) && (arg == 0)))) {
    lVar13 = -0xe;
    _dev_err((global_ebc->info).dev,"%s: argp NULL\n","ebc_io_ctl",0);
    goto LAB_00100b84;
  }
  if (cmd == 0x7005) {
    pdVar8 = (global_ebc->info).dev;
    (global_ebc->info).overlay_enable = 0;
    lVar13 = 0;
    (peVar2->info).overlay_start = 0;
    _dev_info(pdVar8,"disable ebc overlay\n");
    goto LAB_00100b84;
  }
  if (cmd < 0x7006) {
    if (cmd == 0x7002) {
      buf_info.width_mm = (global_ebc->panel).width_mm;
      buf_info.height_mm = (global_ebc->panel).height_mm;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (global_ebc->panel).vir_width;
      buf_info.height = (global_ebc->panel).vir_height;
      buf_info.panel_color = (global_ebc->panel).panel_color;
      buf_info.needpic = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        lVar13 = __arch_copy_to_user(arg,&buf_info,0x40);
        if (lVar13 == 0) {
          lVar13 = 0;
          goto LAB_00100b84;
        }
      }
      lVar13 = -0xe;
      _dev_err((peVar2->info).dev,"EBC_GET_BUFFER_INFO failed\n");
      goto LAB_00100b84;
    }
    if (cmd < 0x7003) {
      if (cmd == 0x7000) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          uVar6 = (long)(arg << 8) >> 8;
          uVar12 = arg;
          if ((arg & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            uVar12 = 0;
          }
          sVar7 = __arch_copy_from_user(&buf_info,uVar12,0x40);
          if ((sVar7 == 0) || (memset((void *)((long)&local_8 - sVar7),0,sVar7), (int)sVar7 == 0)) {
            peVar5 = ebc_empty_buf_get(buf_info.tid_name);
            if (peVar5 != (ebc_buf_s *)0x0) {
              uVar14 = peVar5->phy_addr;
              uVar12 = ebc_phy_buf_base_get();
              buf_info.width = (peVar2->panel).vir_width;
              buf_info.height = (peVar2->panel).vir_height;
              puVar11 = (undefined8 *)cRead_8(sp_el0);
              buf_info.panel_color = (peVar2->panel).panel_color;
              buf_info.offset = (int)uVar14 - (int)uVar12;
              buf_info.needpic = 0x10;
              if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
                 (uVar12 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
                uVar12 = arg & uVar6;
              }
              bVar3 = 0xffffffffffffffbf < uVar12;
              uVar12 = uVar12 + 0x40;
              uVar14 = 0;
              if (!bVar3 || uVar12 == 0) {
                uVar14 = puVar11[1];
              }
              if (bVar3) {
                uVar12 = 0xffffffffffffffff;
              }
              if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
                  uVar12 == uVar14 + !bVar3) {
                lVar13 = cRead_8(sp_el0);
                if ((arg & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
                  arg = 0;
                }
                iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
                if (iVar4 == 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              lVar13 = -0xe;
              ebc_buf_release(peVar5);
              goto LAB_00100b84;
            }
            goto LAB_00101270;
          }
        }
      }
      else {
        if (cmd != 0x7001) goto LAB_00101050;
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          lVar13 = __arch_copy_from_user(&buf_info,arg,0x40);
          if (lVar13 == 0) {
            uVar6 = ebc_phy_buf_base_get();
            peVar5 = ebc_find_buf_by_phy_addr((long)buf_info.offset + uVar6);
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = buf_info.epd_mode;
              peVar5->win_x1 = buf_info.win_x1;
              peVar5->win_y1 = buf_info.win_y1;
              peVar5->win_x2 = buf_info.win_x2;
              peVar5->win_y2 = buf_info.win_y2;
              peVar5->needpic = buf_info.needpic;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                __wake_up_sync(&ebc_thread_wq,1);
              }
              if (peVar5->buf_mode == EPD_SUSPEND) {
                if ((peVar2->info).is_early_suspend != 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              else if (peVar5->buf_mode != EPD_POWER_OFF) goto __out;
              (peVar2->info).ebc_last_display = 1;
              init_wait_entry(&__wq_entry,0);
              while (lVar13 = prepare_to_wait_event(&ebc_poweroff_wq,&__wq_entry,1),
                    (peVar2->info).ebc_last_display != 0) {
                if (lVar13 != 0) goto __out;
                schedule();
              }
              finish_wait(&ebc_poweroff_wq,&__wq_entry);
            }
__out:
            lVar13 = 0;
            goto LAB_00100b84;
          }
        }
      }
LAB_00101200:
      lVar13 = -0xe;
    }
    else {
      if (cmd == 0x7003) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        piVar9 = &(global_ebc->info).full_mode_num;
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xfffffffffffffffb < uVar6;
        uVar6 = uVar6 + 4;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        uVar6 = (ulong)(!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
                       uVar6 == uVar12 + !bVar3);
        if (uVar6 == 0) {
          sVar7 = 4;
        }
        else {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          sVar7 = __arch_copy_from_user(piVar9,arg,4);
          if (sVar7 == 0) {
            lVar13 = 0;
            _dev_info((peVar2->info).dev,"full_mode_num = %d\n",(peVar2->info).full_mode_num);
            goto LAB_00100b84;
          }
          uVar6 = 4 - sVar7;
        }
        memset((void *)((long)piVar9 + uVar6),0,sVar7);
        lVar13 = -0xe;
        _dev_err((peVar2->info).dev,"EBC_SET_FULL_MODE_NUM failed\n");
        goto LAB_00100b84;
      }
      if (cmd == 0x7004) {
        peVar1 = &global_ebc->info;
        (global_ebc->info).overlay_enable = 1;
        lVar13 = 0;
        _dev_info(peVar1->dev,
                  "enable ebc overlay, you can use auto_overlay mode to show somthing over the system display\n"
                 );
        goto LAB_00100b84;
      }
LAB_00101050:
      lVar13 = 0;
      _dev_err((global_ebc->info).dev,"%s: unknow cmd\n","ebc_io_ctl",0);
    }
    goto LAB_00100b84;
  }
  if (cmd == 0x7008) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_old;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
LAB_00100aac:
      memcpy(__dest,piVar9,(ulong)(uVar10 >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.offset = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) {
LAB_00100adc:
        uVar12 = arg;
        if (((uint)*puVar11 >> 0x1a & 1) != 0) goto LAB_00100ae8;
      }
      else {
LAB_00100ae8:
        uVar12 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar12;
      uVar12 = uVar12 + 0x40;
      uVar14 = 0;
      if (!bVar3 || uVar12 == 0) {
        uVar14 = uVar6;
      }
      if (bVar3) {
        uVar12 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
          uVar12 == uVar14 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
        lVar13 = (long)iVar4;
      }
      ebc_buf_release(peVar5);
      goto LAB_00100b84;
    }
  }
  else if (cmd < 0x7009) {
    if (cmd != 0x7006) {
      if (cmd == 0x7007) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          lVar13 = __arch_copy_from_user(&buf_info,arg,0x40);
          if (lVar13 == 0) {
            peVar5 = ebc_osd_buf_clone();
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = buf_info.epd_mode;
              peVar5->win_x1 = buf_info.win_x1;
              peVar5->win_y1 = buf_info.win_y1;
              peVar5->win_x2 = buf_info.win_x2;
              peVar5->win_y2 = buf_info.win_y2;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                lVar13 = 0;
                __wake_up_sync(&ebc_thread_wq,1);
                goto LAB_00100b84;
              }
            }
            goto __out;
          }
        }
        goto LAB_00101200;
      }
      goto LAB_00101050;
    }
    peVar5 = ebc_osd_buf_get();
    if (peVar5 != (ebc_buf_s *)0x0) {
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.panel_color = (peVar2->panel).panel_color;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.offset = (int)uVar12 - (int)uVar6;
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      buf_info.needpic = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
        lVar13 = (long)iVar4;
      }
      goto LAB_00100b84;
    }
  }
  else if (cmd == 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_bg;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      goto LAB_00100aac;
    }
  }
  else if (cmd < 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      memcpy(peVar5->virt_addr,(peVar2->info).auto_image_new,
             (ulong)((peVar2->panel).vir_width * (peVar2->panel).vir_height >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.offset = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) goto LAB_00100adc;
      goto LAB_00100ae8;
    }
  }
  else {
    if (cmd != 0x700b) goto LAB_00101050;
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      piVar9 = (int *)((peVar2->info).curr_dsp_buf)->virt_addr;
      goto LAB_00100aac;
    }
  }
LAB_00101270:
  lVar13 = -1;
LAB_00100b84:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar13;
}



void FUN_001012b4(void)

{
  panel_refresh_mode pVar1;
  ebc *peVar2;
  device *pdVar3;
  
  peVar2 = global_ebc;
  pVar1 = ((global_ebc->info).curr_dsp_buf)->buf_mode;
  if (((int)pVar1 < 0) || ((1 < (int)pVar1 && (1 < pVar1 + ~EPD_FORCE_FULL)))) {
    if ((global_ebc->info).frame_left == 0) {
      pdVar3 = (global_ebc->info).dev;
      (global_ebc->info).is_busy_now = 0;
      (peVar2->info).ebc_irq_status = 1;
      _dev_info(pdVar3,"frame done\n");
      __wake_up_sync(&ebc_wq,1,1);
      __wake_up_sync(&ebc_thread_wq,1,1);
      return;
    }
    (global_ebc->info).is_busy_now = 1;
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_need_refresh != 0) {
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_check != 0) {
    mod_timer(&(global_ebc->info).frame_timer,jiffies + 2);
    return;
  }
  _dev_info((global_ebc->info).dev,"auto frame done\n");
  mod_timer(&(peVar2->info).frame_timer,jiffies + 0x18000000);
  (peVar2->info).ebc_irq_status = 1;
  (peVar2->info).is_busy_now = 0;
  __wake_up_sync(&ebc_wq,1,1);
  __wake_up_sync(&ebc_thread_wq,1,1);
  return;
}



void frame_done_callback(void)

{
  panel_refresh_mode pVar1;
  ebc *peVar2;
  device *pdVar3;
  
  peVar2 = global_ebc;
  pVar1 = ((global_ebc->info).curr_dsp_buf)->buf_mode;
  if (((int)pVar1 < 0) || ((1 < (int)pVar1 && (1 < pVar1 + ~EPD_FORCE_FULL)))) {
    if ((global_ebc->info).frame_left == 0) {
      pdVar3 = (global_ebc->info).dev;
      (global_ebc->info).is_busy_now = 0;
      (peVar2->info).ebc_irq_status = 1;
      _dev_info(pdVar3,"frame done\n");
      __wake_up_sync(&ebc_wq,1,1);
      __wake_up_sync(&ebc_thread_wq,1,1);
      return;
    }
    (global_ebc->info).is_busy_now = 1;
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_need_refresh != 0) {
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_check != 0) {
    mod_timer(&(global_ebc->info).frame_timer,jiffies + 2);
    return;
  }
  _dev_info((global_ebc->info).dev,"auto frame done\n");
  mod_timer(&(peVar2->info).frame_timer,jiffies + 0x18000000);
  (peVar2->info).ebc_irq_status = 1;
  (peVar2->info).is_busy_now = 0;
  __wake_up_sync(&ebc_wq,1,1);
  __wake_up_sync(&ebc_thread_wq,1,1);
  return;
}



void FUN_0010143c(void)

{
  frame_done_callback();
  return;
}



void ebc_frame_timeout(timer_list *t)

{
  frame_done_callback();
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_00101454(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  epd_lut_type lut_type;
  int iStack12;
  long lStack8;
  
  lStack8 = __stack_chk_guard;
  iStack12 = 0x19;
  iVar1 = (**(code **)(*(long *)(param_1 + 0x10) + 0x38))(*(long *)(param_1 + 0x10),&iStack12);
  if (iVar1 == 0) {
    if (iStack12 < 0) {
      _dev_info(*(undefined8 *)(param_1 + 0x120),"temperature = %d, out of range0~50 ,use 0 \n");
      iStack12 = 0;
    }
    else if (0x32 < iStack12) {
      _dev_info(*(undefined8 *)(param_1 + 0x120),"temperature = %d, out of range0~50 ,use 50 \n");
      iStack12 = 0x32;
    }
  }
  else {
    _dev_err(*(undefined8 *)(param_1 + 0x120),"ebc_pmic_read_temp failed, ret = %d\n",iVar1);
  }
  _dev_info(*(undefined8 *)(param_1 + 0x120),"lut update use temperature = %d\n",iStack12);
  switch(*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x28)) {
  case 0:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GC16,iStack12,0x10);
    break;
  case 1:
    lut_type = epd_overlay_lut();
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),lut_type,iStack12,0x10);
    if (iVar2 == 0) {
      if (lut_type != WF_TYPE_AUTO) goto LAB_001016c0;
      goto LAB_001014fc;
    }
    iVar1 = -1;
    if (lut_type != WF_TYPE_AUTO) {
LAB_001016c0:
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | *(uint *)(param_1 + 0x128) << 8;
      goto LAB_001014fc;
    }
    goto LAB_00101560;
  default:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GC16,iStack12,param_2);
    break;
  case 3:
  case 8:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GL16,iStack12,param_2);
    break;
  case 4:
  case 9:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GLR16,iStack12,param_2);
    break;
  case 5:
  case 10:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GLD16,iStack12,param_2);
    break;
  case 6:
  case 0xb:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GCC16,iStack12,param_2);
    break;
  case 0xc:
  case 0xd:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_A2,iStack12,param_2);
    break;
  case 0xe:
  case 0x10:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GRAY2,iStack12,param_2);
    break;
  case 0xf:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GRAY4,iStack12,param_2);
    break;
  case 0x11:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_RESET,iStack12,param_2);
    break;
  case 0x16:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GRAY2,iStack12,0x10);
    break;
  case 0x17:
    iVar2 = epd_lut_get((epd_lut_data *)(param_1 + 0x128),WF_TYPE_GRAY4,iStack12,0x10);
  }
  if (iVar2 == 0) {
LAB_001014fc:
    if (iVar1 == 0) goto LAB_00101500;
  }
  else {
LAB_00101560:
    iVar1 = -1;
  }
  _dev_err(*(undefined8 *)(param_1 + 0x120),"get lut data failed\n");
LAB_00101500:
  if (lStack8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar1);
}



// WARNING: Type propagation algorithm not settling

int ebc_lut_update(ebc *ebc,int needpic)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  epd_lut_type lut_type;
  int local_c;
  long local_8;
  
  local_8 = __stack_chk_guard;
  local_c = 0x19;
  iVar2 = (*ebc->pmic->pmic_read_temperature)(ebc->pmic,&local_c);
  if (iVar2 == 0) {
    if (local_c < 0) {
      _dev_info((ebc->info).dev,"temperature = %d, out of range0~50 ,use 0 \n");
      local_c = 0;
    }
    else if (0x32 < local_c) {
      _dev_info((ebc->info).dev,"temperature = %d, out of range0~50 ,use 50 \n");
      local_c = 0x32;
    }
  }
  else {
    _dev_err((ebc->info).dev,"ebc_pmic_read_temp failed, ret = %d\n",iVar2);
  }
  _dev_info((ebc->info).dev,"lut update use temperature = %d\n",local_c);
  switch(((ebc->info).curr_dsp_buf)->buf_mode) {
  case EPD_AUTO:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GC16,local_c,0x10);
    break;
  case EPD_OVERLAY:
    lut_type = epd_overlay_lut();
    iVar3 = epd_lut_get(&(ebc->info).lut_data,lut_type,local_c,0x10);
    if (iVar3 == 0) {
      if (lut_type != WF_TYPE_AUTO) goto LAB_001016c0;
      goto LAB_001014fc;
    }
    iVar2 = -1;
    if (lut_type != WF_TYPE_AUTO) {
LAB_001016c0:
      uVar1 = (ebc->info).lut_data.frame_num;
      (ebc->info).lut_data.frame_num = uVar1 | uVar1 << 8;
      goto LAB_001014fc;
    }
    goto LAB_00101560;
  default:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GC16,local_c,needpic);
    break;
  case EPD_FULL_GL16:
  case EPD_PART_GL16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GL16,local_c,needpic);
    break;
  case EPD_FULL_GLR16:
  case EPD_PART_GLR16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GLR16,local_c,needpic);
    break;
  case EPD_FULL_GLD16:
  case EPD_PART_GLD16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GLD16,local_c,needpic);
    break;
  case EPD_FULL_GCC16:
  case EPD_PART_GCC16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GCC16,local_c,needpic);
    break;
  case EPD_A2:
  case EPD_A2_DITHER:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_A2,local_c,needpic);
    break;
  case EPD_DU:
  case EPD_A2_ENTER:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY2,local_c,needpic);
    break;
  case EPD_DU4:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY4,local_c,needpic);
    break;
  case EPD_RESET:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_RESET,local_c,needpic);
    break;
  case EPD_AUTO_DU:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY2,local_c,0x10);
    break;
  case EPD_AUTO_DU4:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY4,local_c,0x10);
  }
  if (iVar3 == 0) {
LAB_001014fc:
    if (iVar2 == 0) goto LAB_00101500;
  }
  else {
LAB_00101560:
    iVar2 = -1;
  }
  _dev_err((ebc->info).dev,"get lut data failed\n");
LAB_00101500:
  if (local_8 == __stack_chk_guard) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long FUN_00101764(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = ebc_buf_state_show(param_3);
  return (long)iVar1;
}



ssize_t ebc_buf_state_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = ebc_buf_state_show(buf);
  return (long)iVar1;
}



long FUN_00101784(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = sprintf(param_3,"%d\n",(ulong)(uint)(global_ebc->info).wake_lock_is_set);
  return (long)iVar1;
}



ssize_t ebc_state_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%d\n",(ulong)(uint)(global_ebc->info).wake_lock_is_set);
  return (long)iVar1;
}



ssize_t ebc_version_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%s\n",&DAT_0010a5e8);
  return (long)iVar1;
}



long FUN_001017e4(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = (*global_ebc->pmic->pmic_get_vcom)(global_ebc->pmic);
  iVar1 = sprintf(param_3,"%d\n",iVar1);
  return (long)iVar1;
}



ssize_t pmic_vcom_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = (*global_ebc->pmic->pmic_get_vcom)(global_ebc->pmic);
  iVar1 = sprintf(buf,"%d\n",iVar1);
  return (long)iVar1;
}



long FUN_00101834(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  uint uStack12;
  long lStack8;
  
  lStack8 = __stack_chk_guard;
  (*global_ebc->pmic->pmic_read_temperature)(global_ebc->pmic,(int *)&uStack12);
  iVar1 = sprintf(param_3,"%d\n",(ulong)uStack12);
  if (lStack8 == __stack_chk_guard) {
    return (long)iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ssize_t pmic_temp_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  int t;
  uint local_c;
  long local_8;
  
  local_8 = __stack_chk_guard;
  (*global_ebc->pmic->pmic_read_temperature)(global_ebc->pmic,(int *)&local_c);
  iVar1 = sprintf(buf,"%d\n",(ulong)local_c);
  if (local_8 == __stack_chk_guard) {
    return (long)iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ssize_t pmic_name_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%s\n",global_ebc->pmic->pmic_name);
  return (long)iVar1;
}



void FUN_001018e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ebc *peVar1;
  int iVar2;
  int iStack12;
  long lStack8;
  
  peVar1 = global_ebc;
  lStack8 = __stack_chk_guard;
  iVar2 = kstrtouint(param_3,0,&iStack12);
  if (iVar2 == 0) {
    iVar2 = ebc_pmic_set_vcom((ebc_pmic_conflict *)peVar1->pmic,iStack12);
    if (iVar2 != 0) {
      param_4 = 0xffffffffffffffff;
      _dev_err(peVar1->dev,"set vcom value failed\n");
    }
  }
  else {
    param_4 = 0xffffffffffffffff;
    _dev_err(peVar1->dev,"invalid value = %s\n",param_3);
  }
  if (lStack8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(param_4);
}



ssize_t pmic_vcom_write(device *device,device_attribute *attr,char *buf,size_t count)

{
  ebc *peVar1;
  int iVar2;
  int local_c;
  long local_8;
  
  peVar1 = global_ebc;
  local_8 = __stack_chk_guard;
  iVar2 = kstrtouint(buf,0,&local_c);
  if (iVar2 == 0) {
    iVar2 = ebc_pmic_set_vcom((ebc_pmic_conflict *)peVar1->pmic,local_c);
    if (iVar2 != 0) {
      count = 0xffffffffffffffff;
      _dev_err(peVar1->dev,"set vcom value failed\n");
    }
  }
  else {
    count = 0xffffffffffffffff;
    _dev_err(peVar1->dev,"invalid value = %s\n",buf);
  }
  if (local_8 == __stack_chk_guard) {
    return count;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long FUN_001019a4(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = epd_lut_get_wf_version();
  iVar1 = sprintf(param_3,"%s\n",pcVar2);
  return (long)iVar1;
}



ssize_t waveform_version_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = epd_lut_get_wf_version();
  iVar1 = sprintf(buf,"%s\n",pcVar2);
  return (long)iVar1;
}



void direct_mode_data_change(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,ebc_info *ebc_info)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  u32 uVar5;
  uint uVar6;
  ebc *peVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  u8 *puVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  u32 uVar18;
  u32 uVar19;
  
  peVar7 = global_ebc;
  iVar4 = ebc_info->curr_dsp_buf->needpic;
  if (iVar4 == 0x20) {
    iVar4 = ebc_info->prev_dsp_buf->needpic;
    if (iVar4 == 0x20) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 2;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00102080;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              uVar10 = buffer_old[lVar15];
              uVar13 = buffer_new[lVar15];
              data_buf[lVar15 + (ulong)(uVar9 >> 2)] =
                   (byte)(((uint)puVar11[(long)(int)((uVar10 >> 0x10 & 0xff) * 0x100 +
                                                    (uVar13 >> 0x10 & 0xff)) +
                                         (long)(iVar4 * 0x10000)] |
                          (puVar11[(long)(int)((uVar10 >> 0x10 & 0xff00) + (uVar13 >> 0x18)) +
                                   (long)(iVar4 * 0x10000)] & 0x3f) << 2) << 4) |
                   puVar11[(long)(int)((uVar10 & 0xff) * 0x100 + (uVar13 & 0xff)) +
                           (long)(iVar4 * 0x10000)] |
                   puVar11[(long)(int)((uVar10 & 0xff00) + ((uVar13 & 0xffff) >> 8)) +
                           (long)(iVar4 * 0x10000)] << 2;
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < (int)uVar6);
            buffer_new = buffer_new + lVar2;
            buffer_old = buffer_old + lVar2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00102080:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
    if (iVar4 == 0x10) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 3;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00101e88;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            puVar3 = buffer_new + lVar2 * 2;
            puVar8 = buffer_new;
            pbVar14 = data_buf + (uVar9 >> 2);
            puVar17 = buffer_old;
            do {
              buffer_new = puVar8 + 2;
              uVar9 = *puVar8;
              uVar10 = *puVar17;
              *pbVar14 = puVar11[(long)(int)((uVar9 >> 8 & 0xf8) + (uVar10 & 0xf0) * 0x100) +
                                 (long)(iVar4 * 0x10000)] << 2 |
                         puVar11[(long)(int)((uVar10 & 0xf00) * 0x10 + (uVar9 >> 0x10 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] << 4 |
                         puVar11[(long)(int)((uVar10 & 0xf) * 0x1000 + (uVar9 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar10 & 0xf000) + (uVar9 >> 0x18 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] << 6;
              uVar9 = puVar8[1];
              pbVar14[1] = puVar11[(long)(int)((uVar10 >> 0xc & 0xf000) + (uVar9 >> 0x10 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 4 |
                           puVar11[(long)(int)((uVar10 >> 8 & 0xf000) + (uVar9 >> 8 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 2 |
                           puVar11[(long)(int)((uVar10 >> 4 & 0xf000) + (uVar9 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar10 >> 0x10 & 0xf000) + (uVar9 >> 0x18 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 6;
              puVar8 = buffer_new;
              pbVar14 = pbVar14 + 2;
              puVar17 = puVar17 + 1;
            } while (buffer_new != puVar3);
            buffer_old = buffer_old + lVar2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00101e88:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
  }
  else if ((iVar4 == 0x10) && (ebc_info->prev_dsp_buf->needpic == 0x10)) {
    uVar19 = ebc_info->buf_align16;
    if (uVar19 != 0) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 4;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00101ce4;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            lVar15 = 0;
            pbVar14 = data_buf + (uVar9 >> 2);
            do {
              puVar1 = (undefined8 *)((long)buffer_old + lVar15);
              uVar12 = *(ulong *)((long)buffer_new + lVar15);
              lVar15 = lVar15 + 8;
              uVar13 = (uint)*puVar1;
              uVar10 = (uint)uVar12;
              uVar9 = (uint)((ulong)*puVar1 >> 0x20);
              uVar16 = uVar12 >> 0x20 & 0xffff;
              *pbVar14 = puVar11[(long)(int)((uVar13 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                                 (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar13 & 0xff00) + ((uVar10 & 0xffff) >> 8)) +
                                 (long)(iVar4 * 0x10000)] << 4;
              pbVar14[1] = puVar11[(long)(int)((uVar13 >> 0x10 & 0xff) * 0x100 +
                                              (uVar10 >> 0x10 & 0xff)) + (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar13 >> 0x10 & 0xff00) + (uVar10 >> 0x18)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14[2] = puVar11[(long)(int)((uVar9 & 0xff) * 0x100 + (uint)(byte)uVar16) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar9 & 0xff00) + ((uint)uVar16 >> 8)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14[3] = puVar11[(long)(int)((uVar9 >> 0x10 & 0xff) * 0x100 +
                                              (uint)(byte)(uVar12 >> 0x30)) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar9 >> 0x10 & 0xff00) + (uint)(uVar12 >> 0x38)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14 = pbVar14 + 4;
            } while (lVar2 * 8 - lVar15 != 0);
            buffer_new = buffer_new + lVar2 * 2;
            buffer_old = buffer_old + lVar2 * 2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00101ce4:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
    puVar11 = (ebc_info->lut_data).wf_table;
    iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
    uVar5 = (global_ebc->panel).vir_height;
    uVar9 = (global_ebc->panel).vir_width;
    uVar18 = (global_ebc->panel).mirror;
    uVar6 = uVar9 >> 3;
    if ((int)uVar5 < 1) {
      return;
    }
    lVar2 = (ulong)(uVar6 - 1) + 1;
    if (uVar18 == 0) goto LAB_00101f80;
    do {
      uVar9 = (((peVar7->panel).vir_height - 1) - uVar19) * uVar9;
      while( true ) {
        if (uVar6 != 0) {
          lVar15 = 0;
          pbVar14 = data_buf + (uVar9 >> 2);
          do {
            uVar9 = buffer_old[lVar15];
            uVar10 = buffer_new[lVar15];
            lVar15 = lVar15 + 1;
            *pbVar14 = puVar11[(long)(int)((uVar9 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                               (long)(iVar4 * 0x10000)] |
                       puVar11[(long)(int)((uVar9 & 0xff00) + ((uVar10 & 0xffff) >> 8)) +
                               (long)(iVar4 * 0x10000)] << 4;
            pbVar14[1] = puVar11[(long)(int)((uVar9 >> 0x10 & 0xff) * 0x100 +
                                            (uVar10 >> 0x10 & 0xff)) + (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar9 >> 0x10 & 0xff00) + (uVar10 >> 0x18)) +
                                 (long)(iVar4 * 0x10000)] << 4;
            pbVar14 = pbVar14 + 2;
          } while ((int)lVar15 < (int)uVar6);
          buffer_new = buffer_new + lVar2;
          buffer_old = buffer_old + lVar2;
        }
        uVar19 = uVar19 + 1;
        if (uVar5 == uVar19) {
          return;
        }
        uVar9 = (peVar7->panel).vir_width;
        if (uVar18 != 0) break;
LAB_00101f80:
        uVar9 = uVar19 * uVar9;
      }
    } while( true );
  }
  puVar11 = (ebc_info->lut_data).wf_table;
  iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
  uVar19 = (global_ebc->panel).vir_height;
  uVar9 = (global_ebc->panel).vir_width;
  uVar5 = (global_ebc->panel).mirror;
  uVar6 = uVar9 >> 3;
  if ((int)uVar19 < 1) {
    return;
  }
  uVar18 = 0;
  lVar2 = (ulong)(uVar6 - 1) + 1;
  if (uVar5 == 0) goto LAB_00101b64;
  do {
    uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
    while( true ) {
      if (uVar6 != 0) {
        puVar3 = buffer_new + lVar2;
        puVar8 = buffer_new;
        pbVar14 = data_buf + (uVar9 >> 2);
        puVar17 = buffer_old;
        do {
          buffer_new = puVar8 + 1;
          uVar10 = *puVar8;
          uVar9 = *puVar17;
          *pbVar14 = (byte)((puVar11[(long)(int)((uVar10 >> 4 & 0xf) + (uVar9 >> 0xc & 0xf) * 0x100)
                                     + (long)(iVar4 * 0x10000)] & 3) << 2) |
                     (byte)((puVar11[(long)(int)((uVar10 >> 8 & 0xf) + (uVar9 >> 0x14 & 0xf) * 0x100
                                                ) + (long)(iVar4 * 0x10000)] & 3) << 4) |
                     puVar11[(long)(int)((uVar10 & 0xf) + (uVar9 >> 4 & 0xf) * 0x100) +
                             (long)(iVar4 * 0x10000)] & 3 |
                     puVar11[(long)(int)((uVar10 >> 0xc & 0xf) + (uVar9 >> 0x1c) * 0x100) +
                             (long)(iVar4 * 0x10000)] << 6;
          uVar9 = puVar17[1];
          pbVar14[1] = (byte)((puVar11[(long)(int)((uVar10 >> 0x14 & 0xf) +
                                                  (uVar9 >> 0xc & 0xf) * 0x100) +
                                       (long)(iVar4 * 0x10000)] & 3) << 2) |
                       (byte)((puVar11[(long)(int)((uVar10 >> 0x18 & 0xf) +
                                                  (uVar9 >> 0x14 & 0xf) * 0x100) +
                                       (long)(iVar4 * 0x10000)] & 3) << 4) |
                       puVar11[(long)(int)((uVar10 >> 0x10 & 0xf) + (uVar9 >> 4 & 0xf) * 0x100) +
                               (long)(iVar4 * 0x10000)] & 3 |
                       puVar11[(long)(int)((uVar10 >> 0x1c) + (uVar9 >> 0x1c) * 0x100) +
                               (long)(iVar4 * 0x10000)] << 6;
          puVar8 = buffer_new;
          pbVar14 = pbVar14 + 2;
          puVar17 = puVar17 + 2;
        } while (buffer_new != puVar3);
        buffer_old = buffer_old + lVar2 * 2;
      }
      uVar18 = uVar18 + 1;
      if (uVar19 == uVar18) {
        return;
      }
      uVar9 = (peVar7->panel).vir_width;
      if (uVar5 != 0) break;
LAB_00101b64:
      uVar9 = uVar18 * uVar9;
    }
  } while( true );
}



void direct_mode_data_change_part(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,ebc_info *ebc_info)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  u32 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ebc *peVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  u8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  byte bVar21;
  byte *pbVar22;
  uint *puVar23;
  long lVar24;
  byte bVar25;
  u32 uVar26;
  undefined2 *puVar27;
  byte bVar28;
  u32 uVar29;
  uint uVar30;
  
  peVar12 = global_ebc;
  iVar6 = ebc_info->curr_dsp_buf->needpic;
  if (iVar6 == 0x20) {
    iVar6 = ebc_info->prev_dsp_buf->needpic;
    if (iVar6 == 0x20) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar29 = (global_ebc->panel).vir_height;
      uVar14 = (global_ebc->panel).vir_width;
      uVar7 = (global_ebc->panel).mirror;
      uVar9 = uVar14 >> 2;
      if ((int)uVar29 < 1) {
        return;
      }
      uVar26 = 0;
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar7 == 0) goto LAB_00102a74;
LAB_00102954:
      uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
      do {
        if (uVar9 != 0) {
          lVar24 = 0;
          do {
            while( true ) {
              uVar8 = buffer_old[lVar24];
              bVar21 = 0;
              uVar10 = buffer_new[lVar24];
              bVar25 = 0;
              uVar11 = uVar8 >> 0x10;
              uVar15 = uVar10 & 0xffff;
              uVar18 = uVar8 & 0xffff ^ uVar15;
              uVar5 = (uVar8 ^ uVar10) >> 0x10;
              if (uVar10 != uVar8) break;
              data_buf[lVar24 + (ulong)(uVar14 >> 2)] = '\0';
              lVar24 = lVar24 + 1;
              if ((int)uVar9 <= (int)lVar24) goto LAB_00102a58;
            }
            uVar30 = 3;
            bVar28 = 3;
            if ((uVar8 & 0xffff) != uVar15) {
              if ((uVar18 & 0xff) == 0) {
                bVar28 = 0;
              }
              bVar21 = bVar28 | 0xc;
              if ((uVar18 & 0xff00) == 0) {
                bVar21 = bVar28;
              }
              bVar21 = (puVar16[(long)(int)((uVar8 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                                (long)(iVar6 * 0x10000)] |
                       puVar16[(long)(int)((uVar8 & 0xff00) + (uVar15 >> 8)) +
                               (long)(iVar6 * 0x10000)] << 2) & bVar21;
            }
            if (uVar11 != uVar10 >> 0x10) {
              if ((uVar5 & 0xff) == 0) {
                uVar30 = 0;
              }
              uVar15 = uVar30 | 0xc;
              if ((uVar5 & 0xff00) == 0) {
                uVar15 = uVar30;
              }
              bVar25 = (byte)((((uint)puVar16[(long)(int)((uVar11 & 0xff) * 0x100 +
                                                         (uVar10 >> 0x10 & 0xff)) +
                                              (long)(iVar6 * 0x10000)] |
                               (uint)puVar16[(long)(int)((uVar11 & 0xff00) + (uVar10 >> 0x18)) +
                                             (long)(iVar6 * 0x10000)] << 2) & uVar15) << 4);
            }
            data_buf[lVar24 + (ulong)(uVar14 >> 2)] = bVar21 | bVar25;
            lVar24 = lVar24 + 1;
          } while ((int)lVar24 < (int)uVar9);
LAB_00102a58:
          buffer_new = buffer_new + lVar1;
          buffer_old = buffer_old + lVar1;
        }
        uVar26 = uVar26 + 1;
        if (uVar29 == uVar26) {
          return;
        }
        uVar14 = (peVar12->panel).vir_width;
        if (uVar7 != 0) goto LAB_00102954;
LAB_00102a74:
        uVar14 = uVar26 * uVar14;
      } while( true );
    }
    if (iVar6 == 0x10) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar29 = (global_ebc->panel).vir_height;
      uVar14 = (global_ebc->panel).vir_width;
      uVar7 = (global_ebc->panel).mirror;
      uVar9 = uVar14 >> 3;
      if ((int)uVar29 < 1) {
        return;
      }
      uVar26 = 0;
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar7 == 0) goto LAB_00102740;
      do {
        uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
        while( true ) {
          if (uVar9 != 0) {
            puVar2 = buffer_new + lVar1 * 2;
            puVar13 = buffer_new;
            pbVar22 = data_buf + (uVar14 >> 2);
            puVar23 = buffer_old;
            do {
              uVar15 = *puVar23;
              bVar21 = 0;
              uVar14 = *puVar13;
              if ((uVar14 & 0xf8) != (uVar15 & 0xf) << 4) {
                bVar21 = puVar16[(long)(int)((uVar14 & 0xf8) + (uVar15 & 0xf) * 0x1000) +
                                 (long)(iVar6 * 0x10000)];
              }
              uVar18 = uVar14 >> 8 & 0xf8;
              if (uVar18 != (uVar15 & 0xf0)) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + (uVar15 & 0xf0) * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0x3f) << 2);
              }
              uVar18 = uVar14 >> 0x10 & 0xf8;
              uVar5 = uVar15 >> 4 & 0xf0;
              if (uVar18 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0xf) << 4);
              }
              uVar14 = uVar14 >> 0x18 & 0xf8;
              uVar18 = uVar15 >> 8 & 0xf0;
              if (uVar14 != uVar18) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar18 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 3) << 6);
              }
              buffer_new = puVar13 + 2;
              *pbVar22 = bVar21;
              bVar21 = 0;
              uVar14 = uVar15 >> 0xc & 0xf0;
              uVar18 = puVar13[1];
              if ((uVar18 & 0xf8) != uVar14) {
                bVar21 = puVar16[(long)(int)((uVar18 & 0xf8) + uVar14 * 0x100) +
                                 (long)(iVar6 * 0x10000)];
              }
              uVar14 = uVar18 >> 8 & 0xf8;
              uVar5 = uVar15 >> 0x10 & 0xf0;
              if (uVar14 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0x3f) << 2);
              }
              uVar14 = uVar18 >> 0x10 & 0xf8;
              uVar5 = uVar15 >> 0x14 & 0xf0;
              if (uVar14 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0xf) << 4);
              }
              uVar14 = uVar18 >> 0x18 & 0xf8;
              uVar15 = uVar15 >> 0x18 & 0xf0;
              if (uVar14 != uVar15) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar15 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 3) << 6);
              }
              pbVar22[1] = bVar21;
              puVar13 = buffer_new;
              pbVar22 = pbVar22 + 2;
              puVar23 = puVar23 + 1;
            } while (buffer_new != puVar2);
            buffer_old = buffer_old + lVar1;
          }
          uVar26 = uVar26 + 1;
          if (uVar29 == uVar26) {
            return;
          }
          uVar14 = (peVar12->panel).vir_width;
          if (uVar7 != 0) break;
LAB_00102740:
          uVar14 = uVar26 * uVar14;
        }
      } while( true );
    }
  }
  else if ((iVar6 == 0x10) && (ebc_info->prev_dsp_buf->needpic == 0x10)) {
    uVar29 = ebc_info->buf_align16;
    if (uVar29 == 0) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar7 = (global_ebc->panel).vir_height;
      uVar26 = (global_ebc->panel).mirror;
      uVar14 = (global_ebc->panel).vir_width;
      uVar9 = uVar14 >> 3;
      if ((int)uVar7 < 1) {
        return;
      }
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar26 == 0) goto LAB_001028e0;
      do {
        uVar14 = (((peVar12->panel).vir_height - 1) - uVar29) * uVar14;
        while( true ) {
          if (uVar9 != 0) {
            lVar24 = 0;
            puVar27 = (undefined2 *)(data_buf + (uVar14 >> 2));
            do {
              uVar5 = buffer_old[lVar24];
              bVar21 = 0;
              uVar8 = buffer_new[lVar24];
              bVar25 = 0;
              uVar14 = uVar8 & 0xffff;
              uVar10 = uVar5 >> 0x10;
              uVar15 = uVar5 & 0xffff ^ uVar14;
              uVar18 = (uVar5 ^ uVar8) >> 0x10;
              if (uVar8 == uVar5) {
                *puVar27 = 0;
              }
              else {
                bVar28 = 3;
                if ((uVar5 & 0xffff) != uVar14) {
                  bVar21 = bVar28;
                  if ((uVar15 & 0xf) == 0) {
                    bVar21 = 0;
                  }
                  bVar3 = bVar21 | 0xc;
                  if ((uVar15 & 0xf0) == 0) {
                    bVar3 = bVar21;
                  }
                  bVar4 = bVar3 | 0x30;
                  if ((uVar15 & 0xf00) == 0) {
                    bVar4 = bVar3;
                  }
                  bVar21 = bVar4 | 0xc0;
                  if ((uVar15 & 0xf000) == 0) {
                    bVar21 = bVar4;
                  }
                  bVar21 = (puVar16[(long)(int)((uVar5 & 0xff) * 0x100 + (uVar8 & 0xff)) +
                                    (long)(iVar6 * 0x10000)] |
                           puVar16[(long)(int)((uVar5 & 0xff00) + (uVar14 >> 8)) +
                                   (long)(iVar6 * 0x10000)] << 4) & bVar21;
                }
                *(byte *)puVar27 = bVar21;
                if (uVar10 != uVar8 >> 0x10) {
                  if ((uVar18 & 0xf) == 0) {
                    bVar28 = 0;
                  }
                  bVar21 = bVar28 | 0xc;
                  if ((uVar18 & 0xf0) == 0) {
                    bVar21 = bVar28;
                  }
                  bVar28 = bVar21 | 0x30;
                  if ((uVar18 & 0xf00) == 0) {
                    bVar28 = bVar21;
                  }
                  bVar25 = bVar28 | 0xc0;
                  if ((uVar18 & 0xf000) == 0) {
                    bVar25 = bVar28;
                  }
                  bVar25 = (puVar16[(long)(int)((uVar10 & 0xff) * 0x100 + (uVar8 >> 0x10 & 0xff)) +
                                    (long)(iVar6 * 0x10000)] |
                           puVar16[(long)(int)((uVar10 & 0xff00) + (uVar8 >> 0x18)) +
                                   (long)(iVar6 * 0x10000)] << 4) & bVar25;
                }
                *(byte *)((long)puVar27 + 1) = bVar25;
              }
              lVar24 = lVar24 + 1;
              puVar27 = puVar27 + 1;
            } while ((int)lVar24 < (int)uVar9);
            buffer_new = buffer_new + lVar1;
            buffer_old = buffer_old + lVar1;
          }
          uVar29 = uVar29 + 1;
          if (uVar7 == uVar29) {
            return;
          }
          uVar14 = (peVar12->panel).vir_width;
          if (uVar26 != 0) break;
LAB_001028e0:
          uVar14 = uVar29 * uVar14;
        }
      } while( true );
    }
    puVar16 = (ebc_info->lut_data).wf_table;
    iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
    uVar29 = (global_ebc->panel).vir_height;
    uVar7 = (global_ebc->panel).mirror;
    uVar14 = (global_ebc->panel).vir_width;
    uVar9 = uVar14 >> 4;
    if ((int)uVar29 < 1) {
      return;
    }
    uVar26 = 0;
    lVar1 = (ulong)(uVar9 - 1) + 1;
    if (uVar7 == 0) goto LAB_00102538;
    do {
      uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
      while( true ) {
        if (uVar9 != 0) {
          lVar24 = 0;
          puVar20 = (undefined4 *)(data_buf + (uVar14 >> 2));
          do {
            uVar17 = *(ulong *)(buffer_new + lVar24 * 2);
            uVar19 = *(ulong *)(buffer_old + lVar24 * 2);
            if (uVar17 == uVar19) {
              *puVar20 = 0;
            }
            else {
              uVar18 = (uint)uVar19;
              uVar15 = (uint)uVar17;
              uVar14 = uVar15 & 0xffff;
              bVar21 = 0;
              bVar25 = 3;
              if ((uVar18 & 0xffff) != uVar14) {
                uVar5 = uVar18 & 0xffff ^ uVar14;
                bVar21 = bVar25;
                if ((uVar5 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar5 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar5 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar5 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar18 & 0xff) * 0x100 + (uVar15 & 0xff)) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar18 & 0xff00) + (uVar14 >> 8)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)puVar20 = bVar21;
              uVar14 = uVar18 >> 0x10;
              bVar21 = 0;
              if (uVar14 != uVar15 >> 0x10) {
                uVar18 = (uVar18 ^ uVar15) >> 0x10;
                bVar21 = bVar25;
                if ((uVar18 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 & 0xff) * 0x100 + (uVar15 >> 0x10 & 0xff)) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar14 & 0xff00) + (uVar15 >> 0x18)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 1) = bVar21;
              uVar14 = (uint)(uVar19 >> 0x20);
              uVar19 = uVar17 >> 0x20 & 0xffff;
              bVar21 = 0;
              uVar15 = (uint)uVar19;
              if ((uVar14 & 0xffff) != uVar15) {
                uVar18 = uVar14 & 0xffff ^ uVar15;
                bVar21 = bVar25;
                if ((uVar18 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 & 0xff) * 0x100 + (uint)(byte)uVar19) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar14 & 0xff00) + (uVar15 >> 8)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 2) = bVar21;
              bVar21 = 0;
              uVar15 = (uint)(uVar17 >> 0x20);
              if (uVar14 >> 0x10 != uVar15 >> 0x10) {
                uVar18 = (uVar14 ^ uVar15) >> 0x10;
                if ((uVar18 & 0xf) == 0) {
                  bVar25 = 0;
                }
                bVar21 = bVar25 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar21 = bVar25;
                }
                bVar25 = bVar21 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar25 = bVar21;
                }
                bVar21 = bVar25 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar25;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 >> 0x10 & 0xff) * 0x100 +
                                             (uint)(byte)(uVar17 >> 0x30)) + (long)(iVar6 * 0x10000)
                                 ] |
                         puVar16[(long)(int)((uVar14 >> 0x10 & 0xff00) + (uVar15 >> 0x18)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 3) = bVar21;
            }
            lVar24 = lVar24 + 1;
            puVar20 = puVar20 + 1;
          } while ((int)lVar24 < (int)uVar9);
          buffer_new = buffer_new + lVar1 * 2;
          buffer_old = buffer_old + lVar1 * 2;
        }
        uVar26 = uVar26 + 1;
        if (uVar29 == uVar26) {
          return;
        }
        uVar14 = (peVar12->panel).vir_width;
        if (uVar7 != 0) break;
LAB_00102538:
        uVar14 = uVar26 * uVar14;
      }
    } while( true );
  }
  puVar16 = (ebc_info->lut_data).wf_table;
  iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
  uVar29 = (global_ebc->panel).vir_height;
  uVar14 = (global_ebc->panel).vir_width;
  uVar7 = (global_ebc->panel).mirror;
  uVar9 = uVar14 >> 3;
  if ((int)uVar29 < 1) {
    return;
  }
  uVar26 = 0;
  lVar1 = (ulong)(uVar9 - 1) + 1;
  if (uVar7 == 0) goto LAB_00102280;
  do {
    uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
    while( true ) {
      if (uVar9 != 0) {
        puVar2 = buffer_new + lVar1;
        puVar13 = buffer_new;
        pbVar22 = data_buf + (uVar14 >> 2);
        puVar23 = buffer_old;
        do {
          uVar14 = *puVar23;
          bVar21 = 0;
          buffer_new = puVar13 + 1;
          uVar15 = *puVar13;
          uVar18 = uVar14 >> 4 & 0xf;
          if ((uVar15 & 0xf) != uVar18) {
            bVar21 = puVar16[(long)(int)((uVar15 & 0xf) + uVar18 * 0x100) + (long)(iVar6 * 0x10000)]
                     & 3;
          }
          uVar18 = uVar15 >> 4 & 0xf;
          uVar5 = uVar14 >> 0xc & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 2);
          }
          uVar18 = uVar15 >> 8 & 0xf;
          uVar5 = uVar14 >> 0x14 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 4);
          }
          uVar18 = uVar15 >> 0xc & 0xf;
          if (uVar18 != uVar14 >> 0x1c) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + (uVar14 >> 0x1c) * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 6);
          }
          *pbVar22 = bVar21;
          uVar18 = uVar15 >> 0x10 & 0xf;
          bVar21 = 0;
          uVar14 = puVar23[1];
          uVar5 = uVar14 >> 4 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = puVar16[(long)(int)(uVar18 + uVar5 * 0x100) + (long)(iVar6 * 0x10000)] & 3;
          }
          uVar18 = uVar15 >> 0x14 & 0xf;
          uVar5 = uVar14 >> 0xc & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 2);
          }
          uVar18 = uVar15 >> 0x18 & 0xf;
          uVar5 = uVar14 >> 0x14 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 4);
          }
          if (uVar15 >> 0x1c != uVar14 >> 0x1c) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)((uVar15 >> 0x1c) +
                                                         (uVar14 >> 0x1c) * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 6);
          }
          pbVar22[1] = bVar21;
          puVar13 = buffer_new;
          pbVar22 = pbVar22 + 2;
          puVar23 = puVar23 + 2;
        } while (buffer_new != puVar2);
        buffer_old = buffer_old + lVar1 * 2;
      }
      uVar26 = uVar26 + 1;
      if (uVar29 == uVar26) {
        return;
      }
      uVar14 = (peVar12->panel).vir_width;
      if (uVar7 != 0) break;
LAB_00102280:
      uVar14 = uVar26 * uVar14;
    }
  } while( true );
}



void FUN_00102a84(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  iVar1 = *(int *)(param_1 + 9);
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar3 = &dummy_dma_ops;
  }
  else {
    puVar3 = &dummy_dma_ops;
    if (*(undefined **)(lVar2 + 0x288) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar2 + 0x288);
    }
  }
  if (*(code **)(puVar3 + 0x58) != (code *)0x0) {
    (**(code **)(puVar3 + 0x58))(lVar2,param_1[(long)iVar1 * 3 + 4],(long)param_2,1);
  }
  (**(code **)(param_1[1] + 0x40))(param_1[1],0,0,0,0);
  (**(code **)(param_1[1] + 0x48))(param_1[1],*(undefined4 *)(param_1 + (long)iVar1 * 3 + 4),0);
  (**(code **)(param_1[1] + 0x60))(param_1[1],1);
  *(int *)(param_1 + 9) = 1 - *(int *)(param_1 + 9);
  return;
}



void flip(ebc_panel *panel,ebc_info *ebc_info)

{
  int iVar1;
  device *pdVar2;
  dma_map_ops *pdVar3;
  
  iVar1 = panel->current_buffer;
  pdVar2 = panel->dev;
  if (pdVar2 == (device *)0x0) {
    pdVar3 = (dma_map_ops *)&dummy_dma_ops;
  }
  else {
    pdVar3 = (dma_map_ops *)&dummy_dma_ops;
    if (pdVar2->dma_ops != (dma_map_ops *)0x0) {
      pdVar3 = pdVar2->dma_ops;
    }
  }
  if (pdVar3->sync_single_for_device !=
      (anon_subr_void_device_ptr_dma_addr_t_size_t_dma_data_direction_for_sync_single_for_device *)
      0x0) {
    (*pdVar3->sync_single_for_device)
              (pdVar2,panel->fb[iVar1].phy_addr,(long)(int)ebc_info,DMA_TO_DEVICE);
  }
  (*panel->tcon->dsp_mode_set)(panel->tcon,0,0,0,0);
  (*panel->tcon->image_addr_set)(panel->tcon,*(u32 *)&panel->fb[iVar1].phy_addr,0);
  (*panel->tcon->frame_start)(panel->tcon,1);
  panel->current_buffer = 1 - panel->current_buffer;
  return;
}



void FUN_00102b5c(long param_1)

{
  ebc_info *ebc_info;
  ebc_panel *panel;
  int iVar1;
  long lVar2;
  
  ebc_info = (ebc_info *)(param_1 + 0xb8);
  panel = (ebc_panel *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x198);
  iVar1 = *(int *)(lVar2 + 0x28);
  if (iVar1 < 0x11) {
    if (6 < iVar1) {
      *(uint *)(param_1 + 0xf4) = (uint)*(byte *)(param_1 + 0xe8);
      direct_mode_data_change_part
                (*(u8 **)(param_1 + 0x170),*(u32 **)(lVar2 + 0x10),
                 *(u32 **)(*(long *)(param_1 + 400) + 0x10),ebc_info);
      *(undefined4 *)(param_1 + 0x60) = 0;
      flip(panel,(ebc_info *)(ulong)*(uint *)(param_1 + 0xd0));
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
      direct_mode_data_change_part
                (*(u8 **)(param_1 + 0x178),*(u32 **)(*(long *)(param_1 + 0x198) + 0x10),
                 *(u32 **)(*(long *)(param_1 + 400) + 0x10),ebc_info);
      return;
    }
    if (iVar1 == 0) {
LAB_00102bfc:
      get_auto_image(*(u8 **)(param_1 + 0x170),*(u32 **)(param_1 + 0x148),*(u32 **)(param_1 + 0x150)
                     ,*(u8 **)(param_1 + 0x160),ebc_info);
      if (*(int *)(param_1 + 0xec) != 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        flip(panel,(ebc_info *)(ulong)*(uint *)(param_1 + 0xd0));
        get_auto_image(*(u8 **)(param_1 + 0x178),*(u32 **)(param_1 + 0x148),
                       *(u32 **)(param_1 + 0x150),*(u8 **)(param_1 + 0x160),ebc_info);
        return;
      }
      _dev_info(*(undefined8 *)(param_1 + 0x120),"%s: auto no need to update\n","ebc_frame_start");
      *(undefined4 *)(param_1 + 0xe4) = 0;
      return;
    }
    if (iVar1 == 1) {
      get_overlay_image(*(u8 **)(param_1 + 0x170),*(u32 **)(param_1 + 0x148),
                        *(u32 **)(param_1 + 0x150),*(u8 **)(param_1 + 0x160),ebc_info);
      if (*(int *)(param_1 + 0xec) != 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        flip(panel,(ebc_info *)(ulong)*(uint *)(param_1 + 0xd0));
        get_overlay_image(*(u8 **)(param_1 + 0x178),*(u32 **)(param_1 + 0x148),
                          *(u32 **)(param_1 + 0x150),*(u8 **)(param_1 + 0x160),ebc_info);
        return;
      }
      _dev_info(*(undefined8 *)(param_1 + 0x120),"%s: overlay no need to update\n","ebc_frame_start"
               );
      *(undefined4 *)(param_1 + 0xe4) = 0;
      return;
    }
  }
  else if (iVar1 - 0x16U < 2) goto LAB_00102bfc;
  *(uint *)(param_1 + 0xf4) = (uint)*(byte *)(param_1 + 0xe8);
  direct_mode_data_change
            (*(u8 **)(param_1 + 0x170),*(u32 **)(lVar2 + 0x10),
             *(u32 **)(*(long *)(param_1 + 400) + 0x10),ebc_info);
  *(undefined4 *)(param_1 + 0x60) = 0;
  flip(panel,(ebc_info *)(ulong)*(uint *)(param_1 + 0xd0));
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
  direct_mode_data_change
            (*(u8 **)(param_1 + 0x178),*(u32 **)(*(long *)(param_1 + 0x198) + 0x10),
             *(u32 **)(*(long *)(param_1 + 400) + 0x10),ebc_info);
  return;
}



void ebc_frame_start(ebc *ebc)

{
  ebc_info *ebc_info;
  ebc_panel *panel;
  panel_refresh_mode pVar1;
  ebc_buf_s *peVar2;
  
  ebc_info = &ebc->info;
  panel = &ebc->panel;
  peVar2 = (ebc->info).curr_dsp_buf;
  pVar1 = peVar2->buf_mode;
  if ((int)pVar1 < 0x11) {
    if (6 < (int)pVar1) {
      (ebc->info).frame_left = (uint)(byte)(ebc->info).frame_total;
      direct_mode_data_change_part
                ((u8 *)(ebc->info).direct_buffer[0],(u32 *)peVar2->virt_addr,
                 (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
      (ebc->panel).current_buffer = 0;
      flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
      (ebc->info).frame_left = (ebc->info).frame_left + -1;
      direct_mode_data_change_part
                ((u8 *)(ebc->info).direct_buffer[1],(u32 *)((ebc->info).curr_dsp_buf)->virt_addr,
                 (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
      return;
    }
    if (pVar1 == EPD_AUTO) {
LAB_00102bfc:
      get_auto_image((u8 *)(ebc->info).direct_buffer[0],(u32 *)(ebc->info).auto_image_new,
                     (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
      if ((ebc->info).auto_need_refresh != 0) {
        (ebc->panel).current_buffer = 0;
        flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
        get_auto_image((u8 *)(ebc->info).direct_buffer[1],(u32 *)(ebc->info).auto_image_new,
                       (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
        return;
      }
      _dev_info((ebc->info).dev,"%s: auto no need to update\n","ebc_frame_start");
      (ebc->info).is_busy_now = 0;
      return;
    }
    if (pVar1 == EPD_OVERLAY) {
      get_overlay_image((u8 *)(ebc->info).direct_buffer[0],(u32 *)(ebc->info).auto_image_new,
                        (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
      if ((ebc->info).auto_need_refresh != 0) {
        (ebc->panel).current_buffer = 0;
        flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
        get_overlay_image((u8 *)(ebc->info).direct_buffer[1],(u32 *)(ebc->info).auto_image_new,
                          (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
        return;
      }
      _dev_info((ebc->info).dev,"%s: overlay no need to update\n","ebc_frame_start");
      (ebc->info).is_busy_now = 0;
      return;
    }
  }
  else if (pVar1 + ~EPD_FORCE_FULL < 2) goto LAB_00102bfc;
  (ebc->info).frame_left = (uint)(byte)(ebc->info).frame_total;
  direct_mode_data_change
            ((u8 *)(ebc->info).direct_buffer[0],(u32 *)peVar2->virt_addr,
             (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
  (ebc->panel).current_buffer = 0;
  flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
  (ebc->info).frame_left = (ebc->info).frame_left + -1;
  direct_mode_data_change
            ((u8 *)(ebc->info).direct_buffer[1],(u32 *)((ebc->info).curr_dsp_buf)->virt_addr,
             (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
  return;
}



void FUN_00102d7c(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  (**(code **)(param_1[1] + 0x38))(param_1[1]);
  (**(code **)(param_1[2] + 0x20))(param_1[2],0);
  if (*(int *)(param_1 + 0x4e) == 0) {
    _dev_info(*param_1,"ebc hw power off\n");
    return;
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  __pm_relax(param_1 + 0x34);
  _dev_info(*param_1,"ebc hw power off\n");
  return;
}



int ebc_power_set(ebc *ebc,int power_status)

{
  int iVar1;
  
  (ebc->info).ebc_power_status = power_status;
  (*ebc->tcon->disable)(ebc->tcon);
  (*ebc->pmic->pmic_power_req)(ebc->pmic,false);
  if ((ebc->info).wake_lock_is_set == 0) {
    iVar1 = _dev_info(ebc->dev,"ebc hw power off\n");
    return iVar1;
  }
  (ebc->info).wake_lock_is_set = 0;
  __pm_relax(&(ebc->info).suspend_lock);
  iVar1 = _dev_info(ebc->dev,"ebc hw power off\n");
  return iVar1;
}



int ebc_suspend(device *dev)

{
  ebc *ebc;
  
  ebc = (ebc *)dev->driver_data;
  if ((ebc->info).ebc_power_status == 1) {
    _dev_info((ebc->info).dev,"%s: device is busy now...\n","ebc_suspend");
    ebc_power_set(ebc,0);
  }
  (ebc->info).is_deep_sleep = 1;
  (*ebc->pmic->pmic_pm_suspend)(ebc->pmic);
  _dev_info((ebc->info).dev,"device suspend\n");
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int check_black_percent(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  int in_w1;
  long lVar4;
  int in_w2;
  int iVar5;
  
  iVar2 = in_w2 << 1;
  if (in_w1 != 0x20) {
    iVar2 = in_w2;
  }
  iVar3 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (0 < iVar3 >> 3) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      if (*(long *)(in_x0 + lVar1) != 0) {
        iVar5 = iVar5 + 1;
      }
      if (iVar2 / 10 + iVar5 * -8 < 0 != SBORROW4(iVar2 / 10,iVar5 * 8)) {
        return 0;
      }
    } while ((int)lVar4 < iVar3 >> 3);
  }
  printk("black point > 90percent, skip this frame\n");
  return 1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

int ebc_probe(platform_device *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  timer_list *ptVar3;
  timer_list *ptVar4;
  u32 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ebc *peVar12;
  device_node *pdVar13;
  long lVar14;
  ebc_tcon *peVar15;
  uint *puVar16;
  ebc_pmic *peVar17;
  char *pcVar18;
  u8 *__s;
  workqueue_struct *pwVar19;
  task_struct *ptVar20;
  char *__s_00;
  ebc_buf_s *peVar21;
  ulong uVar22;
  int iVar23;
  device *pdVar24;
  void *__dest;
  void *__dest_00;
  int local_70;
  uint local_6c;
  resource r;
  
  lVar9 = __stack_chk_guard;
  pdVar1 = &pdev->dev;
  peVar12 = (ebc *)devm_kmalloc(pdVar1,0x338,0x6080c0);
  if (peVar12 == (ebc *)0x0) {
    iVar10 = -0xc;
    goto LAB_00103038;
  }
  pdVar13 = (pdev->dev).of_node;
  global_ebc = peVar12;
  peVar12->dev = pdVar1;
  lVar14 = of_parse_phandle(pdVar13,"ebc_tcon",0);
  if (lVar14 == 0) {
    iVar10 = -0x13;
    _dev_err(pdVar1,"not find ebc tcon\n");
    goto LAB_00103038;
  }
  lVar14 = of_find_device_by_node();
  if (lVar14 != 0) {
    peVar15 = *(ebc_tcon **)(lVar14 + 200);
    peVar12->tcon = peVar15;
    if (peVar15 != (ebc_tcon *)0x0) {
      peVar15->dsp_end_callback = frame_done_callback;
      puVar16 = (uint *)of_get_property((pdev->dev).of_node,&DAT_0010a708,&local_70);
      local_70 = (int)((ulong)(long)local_70 >> 2);
      if (local_70 == 0) {
        iVar10 = -0x16;
        _dev_err(pdVar1,"wrong pmics number\n");
        goto LAB_00103038;
      }
      iVar10 = 0;
      if (local_70 < 1) {
LAB_00103084:
        peVar17 = peVar12->pmic;
        if (peVar17 != (ebc_pmic *)0x0) {
          (peVar12->info).dev = pdVar1;
          (peVar12->panel).dev = pdVar1;
          (peVar12->panel).tcon = peVar12->tcon;
          (peVar12->panel).pmic = peVar17;
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,width",&(peVar12->panel).width,1,0);
          if ((((((iVar10 < 0) ||
                 (iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,height",&(peVar12->panel).height,1,
                                      0), iVar10 < 0)) ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,vir_width",
                                     &(peVar12->panel).vir_width,1,0), iVar10 < 0)) ||
               ((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,vir_height",
                                     &(peVar12->panel).vir_height,1,0), iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,sdck",&(peVar12->panel).sdck,1,0),
                iVar10 < 0)))) ||
              (((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,lsl",&(peVar12->panel).lsl,1,0),
                iVar10 < 0 ||
                ((iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,lbl",&(peVar12->panel).lbl,1,0),
                 iVar10 < 0 ||
                 (iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,ldl",&(peVar12->panel).ldl,1,0),
                 iVar10 < 0)))) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,lel",&(peVar12->panel).lel,1,0),
               iVar10 < 0)))) ||
             ((((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,gdck-sta",&(peVar12->panel).gdck_sta
                                     ,1,0), iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,lgonl",&(peVar12->panel).lgonl,1,0),
                iVar10 < 0)) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,fsl",&(peVar12->panel).fsl,1,0),
               iVar10 < 0)) ||
              (((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,fbl",&(peVar12->panel).fbl,1,0),
                iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,fdl",&(peVar12->panel).fdl,1,0),
                iVar10 < 0)) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,fel",&(peVar12->panel).fel,1,0),
               iVar10 < 0)))))) {
            iVar10 = -0x16;
            _dev_err(pdVar1,"failed to probe panel: %d\n",0xffffffea);
            goto LAB_00103038;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,panel_16bit",&(peVar12->panel).panel_16bit,
                              1,0);
          if (iVar10 < 0) {
            (peVar12->panel).panel_16bit = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,panel_color",&(peVar12->panel).panel_color,
                              1,0);
          if (iVar10 < 0) {
            (peVar12->panel).panel_color = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,mirror",&(peVar12->panel).mirror,1,0);
          if (iVar10 < 0) {
            (peVar12->panel).mirror = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,width-mm",&(peVar12->panel).width_mm,1,0);
          if (iVar10 < 0) {
            (peVar12->panel).width_mm = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,height-mm",&(peVar12->panel).height_mm,1,0)
          ;
          if (iVar10 < 0) {
            (peVar12->panel).height_mm = 0;
          }
          uVar5 = (peVar12->panel).vir_height;
          (peVar12->info).height = uVar5;
          uVar6 = (peVar12->panel).vir_width;
          (peVar12->info).width = uVar6;
          uVar7 = uVar5 * uVar6;
          (peVar12->info).buf_align16 = (uint)((uVar6 & 0xf) == 0);
          (peVar12->info).ebc_buf_real_size = uVar7 >> 1;
          (peVar12->info).direct_buf_real_size = uVar7 >> 2;
          pdVar24 = peVar12->dev;
          lVar14 = of_parse_phandle(pdVar24->of_node,"memory-region",0);
          if (lVar14 == 0) {
            iVar10 = -0x13;
          }
          else {
            iVar10 = of_address_to_resource(lVar14,0,&r);
            if (iVar10 == 0) {
              (peVar12->info).ebc_buffer_phy = CONCAT44(r.start._4_4_,(uint)r.start);
              iVar10 = ((int)r.end + 1) - (uint)r.start;
              (peVar12->info).ebc_buffer_size = iVar10;
              pcVar18 = (char *)devm_memremap(pdVar24,CONCAT44(r.start._4_4_,(uint)r.start),
                                              (long)iVar10,1);
              (peVar12->info).ebc_buffer_vir = pcVar18;
              if ((pcVar18 != (char *)0x0) &&
                 (iVar10 = ebc_buf_init((peVar12->info).ebc_buffer_phy,pcVar18,
                                        (peVar12->info).ebc_buffer_size,0x400000,4), iVar10 == 0)) {
                pcVar18 = (peVar12->info).ebc_buffer_vir;
                (peVar12->panel).fb[0].size = 0x100000;
                (peVar12->panel).fb[0].virt_addr = pcVar18 + 0x1400000;
                uVar22 = (peVar12->info).ebc_buffer_phy;
                (peVar12->panel).fb[0].phy_addr = uVar22 + 0x1400000;
                (peVar12->info).direct_buffer[0] = pcVar18 + 0x1400000;
                (peVar12->panel).fb[1].size = 0x100000;
                (peVar12->panel).fb[1].virt_addr = pcVar18 + 0x1500000;
                (peVar12->panel).fb[1].phy_addr = uVar22 + 0x1500000;
                (peVar12->info).auto_image_new = (int *)(pcVar18 + 0x1600000);
                (peVar12->info).auto_image_old = (int *)(pcVar18 + 0x1a00000);
                (peVar12->info).direct_buffer[1] = pcVar18 + 0x1500000;
                (peVar12->info).auto_image_bg = (int *)(pcVar18 + 0x1e00000);
                (peVar12->info).lut_data.wf_table = (u8 *)(pcVar18 + 0x2200000);
                __s = (u8 *)devm_kmalloc(pdVar24,(peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height,0x6080c0);
                (peVar12->info).auto_frame_count = __s;
                if (__s != (u8 *)0x0) {
                  memset(__s,0,(ulong)((peVar12->panel).vir_width * (peVar12->panel).vir_height));
                  memset((peVar12->info).auto_image_bg,0xff,(long)(peVar12->info).ebc_buf_real_size)
                  ;
                  pdVar24 = (peVar12->info).dev;
                  lVar14 = of_parse_phandle(pdVar24->of_node,"waveform-region",0);
                  if (lVar14 == 0) {
                    iVar10 = -0x13;
                  }
                  else {
                    iVar10 = of_address_to_resource(lVar14,0,&r);
                    if (iVar10 == 0) {
                      (peVar12->info).lut_buffer_phy = CONCAT44(r.start._4_4_,(uint)r.start);
                      iVar23 = ((int)r.end + 1) - (uint)r.start;
                      (peVar12->info).lut_buffer_size = iVar23;
                      pcVar18 = (char *)devm_memremap(pdVar24,CONCAT44(r.start._4_4_,(uint)r.start),
                                                      (long)iVar23,1);
                      (peVar12->info).lut_ddr_vir = pcVar18;
                      if (pcVar18 != (char *)0x0) {
                        iVar11 = epd_lut_from_mem_init(pcVar18);
                        if (iVar11 < 0) {
                          _dev_err((peVar12->info).dev,
                                   "Failed to read waveform from mem, we use waveform file from kernel file instead\n"
                                  );
                          iVar23 = epd_lut_from_file_init
                                             ((device_conflict *)(peVar12->info).dev,
                                              (peVar12->info).lut_ddr_vir,iVar23);
                          if (iVar23 < 0) {
                            iVar10 = -1;
                            _dev_err((peVar12->info).dev,
                                     "Failed to read waveform file from kernel, no waveform!!!\n");
                            goto LAB_001034b8;
                          }
                        }
                        plVar2 = &(peVar12->info).auto_buffer_work.entry;
                        (peVar12->info).auto_buffer_work.data.counter = 0xfffffffe0;
                        (peVar12->info).auto_buffer_work.entry.next = plVar2;
                        (peVar12->info).auto_buffer_work.entry.prev = plVar2;
                        (peVar12->info).auto_buffer_work.func = new_buffer_refresh;
                        r.start._0_4_ = 99;
                        pwVar19 = (workqueue_struct *)
                                  __alloc_workqueue_key
                                            (&DAT_0010abc8,0xa000e,1,0,0,"auto-refresh-wq");
                        (peVar12->info).auto_buffer_wq = pwVar19;
                        ebc_auto_task =
                             (task_struct *)
                             kthread_create_on_node
                                       (ebc_auto_tast_function,&peVar12->info,0xffffffff,"ebc_task")
                        ;
                        if (ebc_auto_task < (task_struct *)0xfffffffffffff001) {
                          sched_setscheduler_nocheck(ebc_auto_task,1,&r);
                          __ll_sc_atomic_add(1,&ebc_auto_task->usage);
                          r.start._0_4_ = 99;
                          ptVar20 = (task_struct *)
                                    kthread_create_on_node
                                              (ebc_thread,&peVar12->info,0xffffffff,"ebc_thread");
                          if (ptVar20 < (task_struct *)0xfffffffffffff001) {
                            wake_up_process();
                            (peVar12->info).ebc_task = ptVar20;
                            sched_setscheduler_nocheck(ptVar20,1,&r);
                            __ll_sc_atomic_add(1,&((peVar12->info).ebc_task)->usage);
                            (peVar12->info).full_mode_num = -1;
                            (peVar12->info).is_busy_now = 0;
                            (peVar12->info).auto_check = 0;
                            (peVar12->info).ebc_dsp_buf_status = 0;
                            (peVar12->info).ebc_power_status = 0;
                            ptVar3 = &(peVar12->info).vdd_timer;
                            (peVar12->info).is_early_suspend = 0;
                            (peVar12->info).is_deep_sleep = 0;
                            (peVar12->info).suspend_lock.ws.name = (char *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.id = 0;
                            (peVar12->info).suspend_lock.ws.entry.next = (list_head *)0x0;
                            (peVar12->info).suspend_lock.ws.entry.prev = (list_head *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.lock = 0;
                            (peVar12->info).suspend_lock.ws.wakeirq = (wake_irq *)0x0;
                            (peVar12->info).suspend_lock.ws.timer.entry.next = (hlist_node *)0x0;
                            (peVar12->info).suspend_lock.ws.timer.entry.pprev = (hlist_node **)0x0;
                            (peVar12->info).suspend_lock.ws.timer.expires = 0;
                            (peVar12->info).suspend_lock.ws.timer.function =
                                 (anon_subr_void_timer_list_ptr_for_function *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.timer.flags = 0;
                            (peVar12->info).suspend_lock.ws.timer.android_kabi_reserved1 = 0;
                            (peVar12->info).suspend_lock.ws.timer.android_kabi_reserved2 = 0;
                            (peVar12->info).suspend_lock.ws.timer_expires = 0;
                            (peVar12->info).suspend_lock.ws.total_time = 0;
                            (peVar12->info).suspend_lock.ws.max_time = 0;
                            (peVar12->info).suspend_lock.ws.last_time = 0;
                            (peVar12->info).suspend_lock.ws.start_prevent_time = 0;
                            (peVar12->info).suspend_lock.ws.prevent_sleep_time = 0;
                            (peVar12->info).suspend_lock.ws.event_count = 0;
                            (peVar12->info).suspend_lock.ws.active_count = 0;
                            (peVar12->info).suspend_lock.ws.relax_count = 0;
                            (peVar12->info).suspend_lock.ws.expire_count = 0;
                            (peVar12->info).suspend_lock.ws.wakeup_count = 0;
                            (peVar12->info).suspend_lock.ws.dev = (device *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.field_0xc8 = 0;
                            (peVar12->info).suspend_lock.ws.name = "ebc";
                            wakeup_source_add();
                            (peVar12->info).wake_lock_is_set = 0;
                            init_timer_key(ptVar3,ebc_vdd_power_timeout,0,0,0);
                            ptVar4 = &(peVar12->info).frame_timer;
                            mod_timer(ptVar3,jiffies + 0xfffffff);
                            init_timer_key(ptVar4,ebc_frame_timeout,0,0,0);
                            mod_timer(ptVar4,jiffies + 0xfffffff);
                            pcVar18 = saved_command_line;
                            local_6c = 0;
                            r.start._0_4_ = 0;
                            __s_00 = strstr(saved_command_line,"ulogo_addr=");
                            pcVar18 = strstr(pcVar18,"klogo_addr=");
                            if ((__s_00 == (char *)0x0) ||
                               (sscanf(__s_00,"ulogo_addr=0x%x",&local_6c),
                               (ulong)local_6c < (peVar12->info).ebc_buffer_phy)) {
                              bVar8 = false;
                              __dest_00 = (void *)0x0;
                              __dest = (void *)0x0;
                              if (pcVar18 != (char *)0x0) {
LAB_001037a8:
                                sscanf(pcVar18,"klogo_addr=0x%x",&r);
                                pcVar18 = (char *)0x0;
                                __dest = (void *)0x0;
                                if ((peVar12->info).ebc_buffer_phy <= (ulong)(uint)r.start) {
                                  _dev_info((peVar12->info).dev,
                                            "need show klogo, klogo addr = 0x%x\n");
                                  __dest = (void *)__kmalloc((peVar12->panel).vir_width *
                                                             (peVar12->panel).vir_height >> 1,
                                                             0x6080c0);
                                  if (__dest == (void *)0x0) {
                                    _dev_err((peVar12->info).dev,"malloc klogo buffer failed\n");
                                    goto LAB_00103868;
                                  }
                                  pcVar18 = (char *)0x1;
                                  memcpy(__dest,(peVar12->info).ebc_buffer_vir +
                                                ((ulong)(uint)r.start -
                                                (peVar12->info).ebc_buffer_phy),
                                         (ulong)((peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height >> 1));
                                }
                                iVar23 = (int)pcVar18;
                                if (bVar8) goto LAB_0010396c;
                              }
                              iVar23 = (int)pcVar18;
                              _dev_info((peVar12->info).dev,"no uboot logo, panel init\n");
                              ebc_pmic_verity_vcom((ebc_pmic_conflict *)peVar12->pmic);
                              peVar21 = ebc_empty_buf_get("ebc_dev_reset");
                              memset(peVar21->virt_addr,0xff,
                                     (ulong)((peVar12->panel).vir_width *
                                             (peVar12->panel).vir_height >> 1));
                              peVar21->win_x1 = 0;
                              peVar21->win_y1 = 0;
                              peVar21->buf_mode = EPD_RESET;
                              peVar21->win_x2 = (peVar12->panel).vir_width;
                              peVar21->win_y2 = (peVar12->panel).vir_height;
                              peVar21->needpic = 0x10;
                              ebc_add_to_dsp_buf_list(peVar21);
LAB_00103840:
                              if ((iVar23 != 0) &&
                                 (peVar21 = ebc_empty_buf_get("ebc_dev_logo"),
                                 peVar21 != (ebc_buf_s *)0x0)) {
                                memcpy(peVar21->virt_addr,__dest,
                                       (ulong)((peVar12->panel).vir_width *
                                               (peVar12->panel).vir_height >> 1));
                                peVar21->win_x1 = 0;
                                peVar21->win_y1 = 0;
                                peVar21->buf_mode = EPD_PART_GC16;
                                peVar21->win_x2 = (peVar12->panel).vir_width;
                                peVar21->win_y2 = (peVar12->panel).vir_height;
                                peVar21->needpic = 0x10;
                                ebc_add_to_dsp_buf_list(peVar21);
                              }
                              if ((peVar12->info).ebc_dsp_buf_status == 0) {
                                (peVar12->info).ebc_dsp_buf_status = 1;
                                __wake_up_sync(&ebc_thread_wq,1);
                              }
                              if (__dest_00 != (void *)0x0) {
                                kfree(__dest_00);
                              }
                              if (__dest != (void *)0x0) {
                                kfree(__dest);
                              }
                            }
                            else {
                              _dev_info((peVar12->info).dev,
                                        "have ulogo display, ulogo addr = 0x%x\n");
                              __dest_00 = (void *)__kmalloc((peVar12->panel).vir_width *
                                                            (peVar12->panel).vir_height >> 1,
                                                            0x6080c0);
                              if (__dest_00 != (void *)0x0) {
                                memcpy(__dest_00,
                                       (peVar12->info).ebc_buffer_vir +
                                       ((ulong)local_6c - (peVar12->info).ebc_buffer_phy),
                                       (ulong)((peVar12->panel).vir_width *
                                               (peVar12->panel).vir_height >> 1));
                                if (pcVar18 != (char *)0x0) {
                                  bVar8 = true;
                                  goto LAB_001037a8;
                                }
                                iVar23 = 0;
                                __dest = (void *)0x0;
LAB_0010396c:
                                peVar21 = ebc_empty_buf_get("ebc_dev_logo");
                                if (peVar21 != (ebc_buf_s *)0x0) {
                                  memcpy(peVar21->virt_addr,__dest_00,
                                         (ulong)((peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height >> 1));
                                  peVar21->win_x1 = 0;
                                  peVar21->win_y1 = 0;
                                  peVar21->buf_mode = EPD_PART_GC16;
                                  peVar21->win_x2 = (peVar12->panel).vir_width;
                                  peVar21->win_y2 = (peVar12->panel).vir_height;
                                  peVar21->needpic = 0x10;
                                  ebc_add_to_dsp_buf_list(peVar21);
                                }
                                goto LAB_00103840;
                              }
                              _dev_err((peVar12->info).dev,"malloc ulogo buffer failed\n");
                            }
LAB_00103868:
                            (pdev->dev).driver_data = peVar12;
                            misc_register(&ebc_misc);
                            misc_register(&waveform_misc);
                            device_create_file((peVar12->info).dev,&dev_attr_waveform_version);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_name);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_temp);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_vcom);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_version);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_state);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_buf_state);
                            _dev_info((peVar12->info).dev,"rockchip ebc driver %s probe success\n",
                                      &DAT_0010a5e8);
                            goto LAB_00103038;
                          }
                          (peVar12->info).ebc_task = ptVar20;
                          _dev_err((peVar12->info).dev,"failed to run ebc thread\n");
                        }
                        else {
                          _dev_err((peVar12->info).dev,"failed to create ebc_task thread\n");
                        }
                        iVar10 = -1;
                        _dev_err(pdVar1,"task init failed\n");
                        goto LAB_00103038;
                      }
                      iVar10 = -0xc;
                      _dev_err((peVar12->info).dev,"%s:%d: failed to get mem from reserved\n",
                               "ebc_lut_table_init",0xae2);
                    }
                  }
LAB_001034b8:
                  _dev_err(pdVar1,"lut table init failed\n");
                  goto LAB_00103038;
                }
              }
              iVar10 = -0xc;
            }
            else {
              _dev_err(pdVar24,"Couldn\'t address to resource for reserved memory\n");
            }
          }
          _dev_err(pdVar1,"buffer manage init failed\n");
          goto LAB_00103038;
        }
      }
      else {
        do {
          uVar6 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
          lVar14 = of_find_node_by_phandle(uVar6 >> 0x10 | uVar6 << 0x10);
          if (lVar14 == 0) {
            iVar10 = -0x13;
            _dev_err(pdVar1,"not find pmic node\n");
            goto LAB_00103038;
          }
          lVar14 = of_find_i2c_device_by_node();
          if (lVar14 == 0) {
            iVar10 = -0x13;
            _dev_err(pdVar1,"not find pmic i2c client\n");
            goto LAB_00103038;
          }
          peVar17 = *(ebc_pmic **)(lVar14 + 0xd8);
          peVar12->pmic = peVar17;
          if (peVar17 != (ebc_pmic *)0x0) {
            _dev_info(pdVar1,"use pmic%d\n",iVar10);
            goto LAB_00103084;
          }
          iVar10 = iVar10 + 1;
          puVar16 = puVar16 + 1;
        } while (iVar10 < local_70);
      }
      iVar10 = -0x205;
      _dev_err(pdVar1,"get drvdata from pmic client failed\n");
      goto LAB_00103038;
    }
  }
  iVar10 = -0x205;
LAB_00103038:
  if (lVar9 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar10;
}



undefined8 FUN_00103bb4(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0x4e) == 0) {
    *(undefined4 *)(param_1 + 0x4e) = 1;
    __pm_stay_awake(param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  (**(code **)(param_1[2] + 0x20))(param_1[2]);
  (**(code **)(param_1[1] + 0x30))(param_1[1],param_1 + 3);
  _dev_info(*param_1,"ebc hw power on\n");
  return 0;
}



int ebc_power_set(ebc *ebc,int power_status)

{
  if ((ebc->info).wake_lock_is_set == 0) {
    (ebc->info).wake_lock_is_set = 1;
    __pm_stay_awake(&(ebc->info).suspend_lock,power_status);
  }
  (ebc->info).ebc_power_status = 1;
  (*ebc->pmic->pmic_power_req)(ebc->pmic,true);
  (*ebc->tcon->enable)(ebc->tcon,&ebc->panel);
  _dev_info(ebc->dev,"ebc hw power on\n");
  return 0;
}



undefined8 ebc_open(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = 0;
  return 0;
}



void refresh_new_image2(u32 *image_new,u32 *image_fb,u32 *image_bg,u64 *frame_count,
                       ebc_info *ebc_info,int buf_mode)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = ebc_info->height;
  iVar9 = ebc_info->width;
  iVar2 = iVar9 + 7;
  if (-1 < iVar9) {
    iVar2 = iVar9;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar3) {
    iVar9 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar6 = 0;
      if (0 < iVar2) {
        do {
          while( true ) {
            uVar5 = frame_count[lVar6];
            uVar7 = 0;
            uVar4 = image_fb[lVar6];
            uVar8 = image_new[lVar6];
            if (((uVar5 & 0xff) == 0) && (uVar7 = 0xf, (uVar4 & 0xf) == 0xe)) {
              uVar8 = uVar8 | 0xf;
              uVar7 = 0;
            }
            if ((uVar5 & 0xff00) == 0) {
              if ((uVar4 & 0xf0) == 0xe0) {
                uVar8 = uVar8 | 0xf0;
              }
              else {
                uVar7 = uVar7 | 0xf0;
              }
            }
            if ((uVar5 & 0xff0000) == 0) {
              if ((uVar4 & 0xf00) == 0xe00) {
                uVar8 = uVar8 | 0xf00;
              }
              else {
                uVar7 = uVar7 | 0xf00;
              }
            }
            if ((uVar5 & 0xff000000) == 0) {
              if ((uVar4 & 0xf000) == 0xe000) {
                uVar8 = uVar8 | 0xf000;
              }
              else {
                uVar7 = uVar7 | 0xf000;
              }
            }
            if ((uVar5 & 0xff00000000) == 0) {
              if ((uVar4 & 0xf0000) == 0xe0000) {
                uVar8 = uVar8 | 0xf0000;
              }
              else {
                uVar7 = uVar7 | 0xf0000;
              }
            }
            if ((uVar5 & 0xff0000000000) == 0) {
              if ((uVar4 & 0xf00000) == 0xe00000) {
                uVar8 = uVar8 | 0xf00000;
              }
              else {
                uVar7 = uVar7 | 0xf00000;
              }
            }
            if ((uVar5 & 0xff000000000000) == 0) {
              if ((uVar4 & 0xf000000) == 0xe000000) {
                uVar8 = uVar8 | 0xf000000;
              }
              else {
                uVar7 = uVar7 | 0xf000000;
              }
            }
            if ((uVar5 & 0xff00000000000000) == 0) break;
LAB_00103d38:
            image_new[lVar6] = uVar8 ^ (uVar4 & image_bg[lVar6] ^ uVar8) & uVar7;
            lVar6 = lVar6 + 1;
            if (iVar2 <= (int)lVar6) goto LAB_00103dbc;
          }
          if ((uVar4 & 0xf0000000) != 0xe0000000) {
            uVar7 = uVar7 | 0xf0000000;
            goto LAB_00103d38;
          }
          image_new[lVar6] =
               (uVar8 | 0xf0000000) ^ (uVar4 & image_bg[lVar6] ^ (uVar8 | 0xf0000000)) & uVar7;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < iVar2);
LAB_00103dbc:
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1;
        image_bg = image_bg + lVar1;
        image_new = image_new + lVar1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  return;
}



void refresh_new_image_auto_32(u32 *image_new,u32 *image_fb,u64 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  
  iVar3 = ebc_info->height;
  iVar10 = ebc_info->width;
  iVar2 = iVar10 + 7;
  if (-1 < iVar10) {
    iVar2 = iVar10;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar3) {
    iVar10 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar8 = 0;
      puVar9 = image_fb;
      if (0 < iVar2) {
        do {
          uVar7 = frame_count[lVar8];
          uVar4 = *puVar9;
          if ((uVar7 & 0xff) == 0) {
            uVar5 = uVar4 >> 4 & 0xf;
            uVar6 = 0xf;
          }
          else {
            uVar6 = 0;
            uVar5 = 0;
          }
          if ((uVar7 & 0xff00) == 0) {
            uVar6 = uVar6 | 0xf0;
            uVar5 = uVar5 | (uint)((ulong)uVar4 >> 8) & 0xf0;
          }
          if ((uVar7 & 0xff0000) == 0) {
            uVar6 = uVar6 | 0xf00;
            uVar5 = uVar5 | uVar4 >> 0xc & 0xf00;
          }
          if ((uVar7 & 0xff000000) == 0) {
            uVar6 = uVar6 | 0xf000;
            uVar5 = uVar5 | (uint)((ulong)uVar4 >> 0x10) & 0xf000;
          }
          uVar4 = puVar9[1];
          if ((uVar7 & 0xff00000000) == 0) {
            uVar6 = uVar6 | 0xf0000;
            uVar5 = uVar5 | (uVar4 & 0xf0) << 0xc;
          }
          if ((uVar7 & 0xff0000000000) == 0) {
            uVar6 = uVar6 | 0xf00000;
            uVar5 = uVar5 | (uVar4 & 0xf000) << 8;
          }
          if ((uVar7 & 0xff000000000000) == 0) {
            uVar6 = uVar6 | 0xf000000;
            uVar5 = uVar5 | (uVar4 & 0xf00000) << 4;
          }
          if ((uVar7 & 0xff00000000000000) == 0) {
            uVar6 = uVar6 | 0xf0000000;
            uVar5 = uVar5 | uVar4 & 0xf0000000;
          }
          image_new[lVar8] = uVar5 | image_new[lVar8] & (uVar6 ^ 0xffffffff);
          lVar8 = lVar8 + 1;
          puVar9 = puVar9 + 2;
        } while ((int)lVar8 < iVar2);
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1 * 2;
        image_new = image_new + lVar1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  return;
}



void refresh_new_image_auto(u32 *image_new,u32 *image_fb,u64 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = ebc_info->height;
  iVar8 = ebc_info->width;
  iVar2 = iVar8 + 7;
  if (-1 < iVar8) {
    iVar2 = iVar8;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar4) {
    iVar8 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar6 = 0;
      if (0 < iVar2) {
        do {
          uVar5 = frame_count[lVar6];
          uVar7 = 0;
          if ((uVar5 & 0xff) == 0) {
            uVar7 = 0xf;
          }
          uVar3 = uVar7 | 0xf0;
          if ((uVar5 & 0xff00) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf00;
          if ((uVar5 & 0xff0000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf000;
          if ((uVar5 & 0xff000000) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf0000;
          if ((uVar5 & 0xff00000000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf00000;
          if ((uVar5 & 0xff0000000000) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf000000;
          if ((uVar5 & 0xff000000000000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf0000000;
          if ((uVar5 & 0xff00000000000000) != 0) {
            uVar3 = uVar7;
          }
          image_new[lVar6] = (image_fb[lVar6] ^ image_new[lVar6]) & uVar3 ^ image_new[lVar6];
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < iVar2);
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1;
        image_new = image_new + lVar1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  return;
}



void FUN_00104044(void)

{
  ebc_info *ebc_info;
  panel_refresh_mode buf_mode;
  ebc *peVar1;
  ebc_buf_s *peVar2;
  u32 *image_new;
  u64 *frame_count;
  
  peVar1 = global_ebc;
  down_write(&auto_buf_sema);
  ebc_info = &peVar1->info;
  peVar2 = (peVar1->info).curr_dsp_buf;
  buf_mode = peVar2->buf_mode;
  if ((buf_mode != EPD_AUTO && buf_mode != EPD_AUTO_DU) && buf_mode != EPD_AUTO_DU4) {
    refresh_new_image2((u32 *)(peVar1->info).auto_image_new,(u32 *)peVar2->virt_addr,
                       (u32 *)(peVar1->info).auto_image_bg,(u64 *)(peVar1->info).auto_frame_count,
                       ebc_info,buf_mode);
    up_write(&auto_buf_sema);
    return;
  }
  frame_count = (u64 *)(peVar1->info).auto_frame_count;
  image_new = (u32 *)(peVar1->info).auto_image_new;
  if (peVar2->needpic != 0x20) {
    refresh_new_image_auto(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
    up_write(&auto_buf_sema);
    return;
  }
  refresh_new_image_auto_32(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
  up_write(&auto_buf_sema);
  return;
}



void new_buffer_refresh(work_struct *work)

{
  ebc_info *ebc_info;
  panel_refresh_mode buf_mode;
  ebc *peVar1;
  ebc_buf_s *peVar2;
  u32 *image_new;
  u64 *frame_count;
  
  peVar1 = global_ebc;
  down_write(&auto_buf_sema);
  ebc_info = &peVar1->info;
  peVar2 = (peVar1->info).curr_dsp_buf;
  buf_mode = peVar2->buf_mode;
  if ((buf_mode != EPD_AUTO && buf_mode != EPD_AUTO_DU) && buf_mode != EPD_AUTO_DU4) {
    refresh_new_image2((u32 *)(peVar1->info).auto_image_new,(u32 *)peVar2->virt_addr,
                       (u32 *)(peVar1->info).auto_image_bg,(u64 *)(peVar1->info).auto_frame_count,
                       ebc_info,buf_mode);
    up_write(&auto_buf_sema);
    return;
  }
  frame_count = (u64 *)(peVar1->info).auto_frame_count;
  image_new = (u32 *)(peVar1->info).auto_image_new;
  if (peVar2->needpic != 0x20) {
    refresh_new_image_auto(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
    up_write(&auto_buf_sema);
    return;
  }
  refresh_new_image_auto_32(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
  up_write(&auto_buf_sema);
  return;
}



void FUN_0010410c(void)

{
  bool bVar1;
  ebc_panel *panel;
  ebc_info *ebc_info;
  panel_refresh_mode pVar2;
  int iVar3;
  long lVar4;
  ebc_info *peVar5;
  ebc *peVar6;
  
  peVar6 = global_ebc;
  panel = &global_ebc->panel;
  ebc_info = &global_ebc->info;
  lVar4 = cRead_8(sp_el0);
  peVar5 = &global_ebc->info;
  do {
    down(&ebc_auto_thread_sem);
    *(undefined8 *)(lVar4 + 0x20) = 2;
    DataMemoryBarrier(2,3);
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    if ((int)pVar2 < 0x11) {
      if ((int)pVar2 < 7) {
        if (pVar2 == EPD_AUTO) goto LAB_00104298;
        if (pVar2 != EPD_OVERLAY) goto LAB_00104254;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        get_overlay_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                          (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                          (peVar6->info).auto_frame_count,ebc_info);
      }
      else {
        (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        if ((peVar6->info).frame_left != 0) {
          direct_mode_data_change_part
                    ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                     (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
        }
      }
    }
    else if (pVar2 + ~EPD_FORCE_FULL < 2) {
LAB_00104298:
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      get_auto_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                     (peVar6->info).auto_frame_count,ebc_info);
    }
    else {
LAB_00104254:
      (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      if ((peVar6->info).frame_left != 0) {
        direct_mode_data_change
                  ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                   (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                   (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
      }
    }
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    bVar1 = pVar2 + ~EPD_FORCE_FULL < 2;
    if (((bVar1 || pVar2 == EPD_AUTO) || !bVar1 && pVar2 == EPD_OVERLAY) &&
       ((peVar6->info).auto_need_refresh == 0)) {
      (peVar6->info).auto_check = 1;
      printk("ebc_info->auto_need_refresh == 0, check again\n");
      new_buffer_refresh(&peVar5->auto_buffer_work);
      iVar3 = (peVar6->panel).current_buffer;
      if (((peVar6->info).curr_dsp_buf)->buf_mode == EPD_OVERLAY) {
        get_overlay_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                          (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,
                          ebc_info);
        (peVar6->info).auto_check = 0;
      }
      else {
        get_auto_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                       (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,ebc_info
                      );
        (peVar6->info).auto_check = 0;
      }
    }
    up(&ebc_auto_thread_sem);
    schedule();
  } while( true );
}



int ebc_auto_tast_function(void *data)

{
  bool bVar1;
  ebc_panel *panel;
  ebc_info *ebc_info;
  panel_refresh_mode pVar2;
  int iVar3;
  long lVar4;
  ebc_info *peVar5;
  ebc *peVar6;
  
  peVar6 = global_ebc;
  panel = &global_ebc->panel;
  ebc_info = &global_ebc->info;
  lVar4 = cRead_8(sp_el0);
  peVar5 = &global_ebc->info;
  do {
    down(&ebc_auto_thread_sem);
    *(undefined8 *)(lVar4 + 0x20) = 2;
    DataMemoryBarrier(2,3);
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    if ((int)pVar2 < 0x11) {
      if ((int)pVar2 < 7) {
        if (pVar2 == EPD_AUTO) goto LAB_00104298;
        if (pVar2 != EPD_OVERLAY) goto LAB_00104254;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        get_overlay_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                          (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                          (peVar6->info).auto_frame_count,ebc_info);
      }
      else {
        (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        if ((peVar6->info).frame_left != 0) {
          direct_mode_data_change_part
                    ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                     (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
        }
      }
    }
    else if (pVar2 + ~EPD_FORCE_FULL < 2) {
LAB_00104298:
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      get_auto_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                     (peVar6->info).auto_frame_count,ebc_info);
    }
    else {
LAB_00104254:
      (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      if ((peVar6->info).frame_left != 0) {
        direct_mode_data_change
                  ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                   (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                   (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
      }
    }
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    bVar1 = pVar2 + ~EPD_FORCE_FULL < 2;
    if (((bVar1 || pVar2 == EPD_AUTO) || !bVar1 && pVar2 == EPD_OVERLAY) &&
       ((peVar6->info).auto_need_refresh == 0)) {
      (peVar6->info).auto_check = 1;
      printk("ebc_info->auto_need_refresh == 0, check again\n");
      new_buffer_refresh(&peVar5->auto_buffer_work);
      iVar3 = (peVar6->panel).current_buffer;
      if (((peVar6->info).curr_dsp_buf)->buf_mode == EPD_OVERLAY) {
        get_overlay_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                          (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,
                          ebc_info);
        (peVar6->info).auto_check = 0;
      }
      else {
        get_auto_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                       (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,ebc_info
                      );
        (peVar6->info).auto_check = 0;
      }
    }
    up(&ebc_auto_thread_sem);
    schedule();
  } while( true );
}



void FUN_0010432c(void)

{
  char **ppcVar1;
  long *plVar2;
  long *plVar3;
  ebc_info *ebc_info;
  timer_list *ptVar4;
  int iVar5;
  int iVar6;
  panel_refresh_mode pVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ebc *ebc;
  bool bVar13;
  bool bVar14;
  int iVar15;
  ebc_buf_s *peVar16;
  ebc_buf_s *peVar17;
  long lVar18;
  ebc_buf_s *peVar19;
  u32 *puVar20;
  workqueue_struct *pwVar21;
  ulong uVar22;
  u64 *frame_count;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  u8 *puVar28;
  int *piVar29;
  char *pcVar30;
  long lVar31;
  ebc_buf_s *peVar32;
  int iStack132;
  undefined auStack120 [40];
  ebc_buf_s eStack80;
  long lStack8;
  
  ebc = global_ebc;
  lStack8 = __stack_chk_guard;
  ebc_info = &global_ebc->info;
  iStack132 = 0;
LAB_0010437c:
  iVar15 = (ebc->info).is_power_off;
joined_r0x00104380:
  if (iVar15 != 0) {
    if ((ebc->info).ebc_power_status == 1) {
      ebc_power_set(ebc,0);
    }
    if (lStack8 == __stack_chk_guard) {
      return;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail(0);
  }
  peVar16 = ebc_dsp_buf_get();
  if ((peVar16 == (ebc_buf_s *)0x0) || (peVar16->phy_addr == 0)) {
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      (ebc->info).ebc_dsp_buf_status = 0;
      goto LAB_0010437c;
    }
    init_wait_entry(auStack120,0);
    lVar31 = 0x3c;
    lVar18 = prepare_to_wait_event(&ebc_thread_wq,auStack120,1);
    bVar14 = false;
    bVar13 = (ebc->info).ebc_dsp_buf_status != 0;
    goto LAB_001048d0;
  }
  pVar7 = peVar16->buf_mode;
  if ((pVar7 + ~EPD_RESET & 0xfffffffd) == 0) {
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
LAB_001043b4:
    mod_timer(&(ebc->info).vdd_timer,jiffies + 0x18000000);
    if ((ebc->info).first_in == 0) {
      (ebc->info).prev_dsp_buf = peVar16;
      peVar19 = peVar16;
    }
    else {
      peVar19 = (ebc->info).prev_dsp_buf;
    }
    pVar7 = peVar19->buf_mode;
    if (peVar16->buf_mode != pVar7) {
      _dev_info((ebc->info).dev,"change display mode from %d to %d\n");
      if ((ebc->info).is_busy_now == 1) {
        _dev_info((ebc->info).dev,"ebc is busy now, waiting prev refresh mode end...\n");
        if ((ebc->info).ebc_irq_status == 0) {
          init_wait_entry(auStack120,0);
          while (lVar18 = prepare_to_wait_event(&ebc_wq,auStack120,1),
                (ebc->info).ebc_irq_status == 0) {
            if (lVar18 != 0) goto __out;
            schedule();
          }
          finish_wait(&ebc_wq,auStack120);
        }
__out:
        _dev_info((ebc->info).dev,"prev refresh mode end\n");
      }
      pVar7 = peVar16->buf_mode;
    }
    switch(pVar7) {
    case EPD_AUTO:
    case EPD_AUTO_DU:
    case EPD_AUTO_DU4:
      goto switchD_001044ec_caseD_0;
    case EPD_OVERLAY:
      if ((ebc->info).overlay_enable == 0) {
        _dev_info((ebc->info).dev,"overlay disabled, drop EPD_OVERLAY frame\n");
        goto LAB_001044c4;
      }
      peVar19 = (ebc->info).prev_dsp_buf;
      (ebc->info).curr_dsp_buf = peVar16;
      (ebc->info).overlay_start = 1;
      pVar7 = peVar19->buf_mode;
      if ((pVar7 < EPD_FULL_GC16 || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
        peVar19 = peVar16;
        if ((pVar7 == EPD_AUTO || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
          memcpy((ebc->info).auto_image_bg,(ebc->info).auto_image_old,
                 (long)(ebc->info).ebc_buf_real_size);
          peVar19 = (ebc->info).curr_dsp_buf;
        }
        goto LAB_00104658;
      }
      if (peVar19->needpic == 0x20) {
        iVar15 = (ebc->info).ebc_buf_real_size;
        piVar27 = (ebc->info).auto_image_bg;
        if (iVar15 < 1) goto LAB_0010463c;
        lVar18 = 0;
        pbVar24 = (byte *)peVar19->virt_addr;
        do {
          *(byte *)((long)piVar27 + lVar18) = pbVar24[1] & 0xf0 | *pbVar24 >> 4;
          lVar18 = lVar18 + 1;
          pbVar24 = pbVar24 + 2;
        } while ((int)lVar18 < iVar15);
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar19->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      iVar15 = (ebc->info).ebc_buf_real_size;
      piVar27 = (ebc->info).auto_image_bg;
LAB_0010463c:
      memcpy((ebc->info).auto_image_new,piVar27,(long)iVar15);
      memcpy((ebc->info).auto_image_old,(ebc->info).auto_image_bg,
             (long)(ebc->info).ebc_buf_real_size);
      peVar19 = (ebc->info).curr_dsp_buf;
LAB_00104658:
      iVar5 = peVar19->win_x1;
      iVar15 = peVar19->win_y1;
      iVar6 = peVar19->win_x2;
      iVar8 = (ebc->info).width;
      iVar10 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      iVar5 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar6 = iVar6 >> 3;
      iVar5 = (iVar5 >> 3) + 1;
      iVar9 = (ebc->info).height;
      pcVar30 = peVar19->virt_addr;
      iVar8 = iVar6 + -1;
      if (iVar5 < iVar6) {
        iVar8 = iVar5;
      }
      iVar5 = iVar9 + -1;
      if (peVar19->win_y2 < iVar9) {
        iVar5 = peVar19->win_y2;
      }
      iVar9 = iVar15 * iVar6;
      piVar27 = (ebc->info).auto_image_new;
      piVar29 = (ebc->info).auto_image_bg;
      puVar28 = (ebc->info).auto_frame_count;
      for (; iVar26 = iVar10 >> 3, iVar15 <= iVar5; iVar15 = iVar15 + 1) {
joined_r0x001046dc:
        if (iVar26 <= iVar8) {
          do {
            lVar31 = (long)iVar26;
            uVar23 = 0;
            lVar18 = (long)iVar9;
            uVar22 = *(ulong *)(puVar28 + lVar31 * 8 + (long)iVar9 * 8);
            uVar25 = piVar27[lVar18 + lVar31];
            uVar11 = *(uint *)(pcVar30 + lVar31 * 4 + lVar18 * 4);
            uVar12 = piVar29[lVar18 + lVar31];
            if (((uVar22 & 0xff) == 0) && (uVar23 = 0xf, (uVar11 & 0xf) == 0xe)) {
              uVar25 = uVar25 | 0xf;
              uVar23 = 0;
            }
            if ((uVar22 & 0xff00) == 0) {
              if ((uVar11 & 0xf0) == 0xe0) {
                uVar25 = uVar25 | 0xf0;
              }
              else {
                uVar23 = uVar23 | 0xf0;
              }
            }
            if ((uVar22 & 0xff0000) == 0) {
              if ((uVar11 & 0xf00) == 0xe00) {
                uVar25 = uVar25 | 0xf00;
              }
              else {
                uVar23 = uVar23 | 0xf00;
              }
            }
            if ((uVar22 & 0xff000000) == 0) {
              if ((uVar11 & 0xf000) == 0xe000) {
                uVar25 = uVar25 | 0xf000;
              }
              else {
                uVar23 = uVar23 | 0xf000;
              }
            }
            if ((uVar22 & 0xff00000000) == 0) {
              if ((uVar11 & 0xf0000) == 0xe0000) {
                uVar25 = uVar25 | 0xf0000;
              }
              else {
                uVar23 = uVar23 | 0xf0000;
              }
            }
            if ((uVar22 & 0xff0000000000) == 0) {
              if ((uVar11 & 0xf00000) == 0xe00000) {
                uVar25 = uVar25 | 0xf00000;
              }
              else {
                uVar23 = uVar23 | 0xf00000;
              }
            }
            if ((uVar22 & 0xff000000000000) == 0) {
              if ((uVar11 & 0xf000000) == 0xe000000) {
                uVar25 = uVar25 | 0xf000000;
              }
              else {
                uVar23 = uVar23 | 0xf000000;
              }
            }
            if ((uVar22 & 0xff00000000000000) == 0) {
              if ((uVar11 & 0xf0000000) == 0xe0000000) goto LAB_00104c80;
              uVar23 = uVar23 | 0xf0000000;
            }
            iVar26 = iVar26 + 1;
            piVar27[lVar18 + lVar31] = uVar25 ^ (uVar11 & uVar12 ^ uVar25) & uVar23;
            if (iVar8 < iVar26) break;
          } while( true );
        }
        iVar9 = iVar9 + iVar6;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).ebc_irq_status = 0;
        (ebc->info).is_busy_now = 1;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,1);
        }
        iVar15 = ebc_lut_update(ebc,0x10);
        if (iVar15 != -1) {
          uVar25 = (ebc->info).lut_data.frame_num;
          (ebc->info).frame_total = (char)uVar25;
          (ebc->info).frame_bw_total = (char)(uVar25 >> 8);
          _dev_info((ebc->info).dev,"overlay mode start, frame_total=%d, bw_frame = %d\n",
                    uVar25 & 0xff,uVar25 >> 8 & 0xff);
          ebc_frame_start(ebc);
        }
      }
      goto one_buffer_end;
    case EPD_FULL_GC16:
    case EPD_FULL_GL16:
    case EPD_FULL_GLR16:
    case EPD_FULL_GLD16:
    case EPD_FULL_GCC16:
    case EPD_PART_GLR16:
    case EPD_PART_GLD16:
    case EPD_A2:
    case EPD_A2_DITHER:
    case EPD_A2_ENTER:
    case EPD_RESET:
    case EPD_SUSPEND:
    case EPD_RESUME:
    case EPD_POWER_OFF:
    case EPD_FORCE_FULL:
      bVar14 = true;
      break;
    case EPD_PART_GC16:
    case EPD_PART_GL16:
    case EPD_PART_GCC16:
    case EPD_DU:
    case EPD_DU4:
      bVar14 = false;
      break;
    default:
      goto switchD_001044ec_caseD_18;
    }
    peVar32 = (ebc->info).prev_dsp_buf;
    pVar7 = peVar32->buf_mode;
    uVar25 = pVar7 + ~EPD_FORCE_FULL;
    peVar19 = (ebc_buf_s *)(ulong)uVar25;
    if ((uVar25 < 2 || pVar7 == EPD_AUTO) || uVar25 >= 2 && pVar7 == EPD_OVERLAY) {
      (ebc->info).prev_dsp_buf = &eStack80;
      eStack80.virt_addr = (char *)(ebc->info).auto_image_old;
      eStack80.needpic = 0x10;
    }
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).curr_dsp_buf = peVar16;
    if (0xe < peVar16->buf_mode + ~EPD_OVERLAY) goto LAB_00104550;
    peVar19 = (ebc->info).prev_dsp_buf;
    if (peVar16->needpic != peVar19->needpic) goto LAB_00104550;
    iVar10 = (ebc->info).ebc_buf_real_size;
    iVar15 = iVar10 << 1;
    if (peVar16->needpic != 0x20) {
      iVar15 = iVar10;
    }
    iVar10 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar10 = iVar15;
    }
    if (iVar10 >> 3 < 1) goto LAB_00104dd0;
    ppcVar1 = &peVar19->virt_addr;
    peVar19 = *(ebc_buf_s **)*ppcVar1;
    if (*(ebc_buf_s **)peVar16->virt_addr != peVar19) goto LAB_00104550;
    peVar19 = (ebc_buf_s *)(((ulong)((iVar10 >> 3) - 1) + 1) * 8);
    peVar17 = (ebc_buf_s *)0x8;
    goto LAB_00104dc8;
  }
  if (resume_count_start == 0) {
    if (*(long *)&(ebc->info).is_early_suspend == 0) {
      if (pVar7 == EPD_FORCE_FULL) {
        (ebc->info).overlay_start = 0;
        goto LAB_001043b4;
      }
      if ((ebc->info).overlay_start == 0 || pVar7 == EPD_OVERLAY) goto LAB_001043b4;
      if (peVar16->needpic == 0x20) {
        iVar15 = (ebc->info).ebc_buf_real_size;
        lVar18 = 0;
        piVar27 = (ebc->info).auto_image_bg;
        pbVar24 = (byte *)peVar16->virt_addr;
        if (0 < iVar15) {
          do {
            *(byte *)((long)piVar27 + lVar18) = pbVar24[1] & 0xf0 | *pbVar24 >> 4;
            lVar18 = lVar18 + 1;
            pbVar24 = pbVar24 + 2;
          } while ((int)lVar18 < iVar15);
        }
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar16->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      ebc_remove_from_dsp_buf_list(peVar16);
      ebc_buf_release(peVar16);
      if ((ebc->info).auto_need_refresh == 0) {
        peVar16 = (ebc->info).curr_dsp_buf;
        puVar20 = (u32 *)peVar16->virt_addr;
        refresh_new_image2((u32 *)(ebc->info).auto_image_new,puVar20,
                           (u32 *)(ebc->info).auto_image_bg,(u64 *)(ebc->info).auto_frame_count,
                           ebc_info,peVar16->buf_mode);
        iVar15 = (int)puVar20;
      }
      else {
        pwVar21 = (ebc->info).auto_buffer_wq;
        queue_work_on(8,pwVar21,&(ebc->info).auto_buffer_work);
        iVar15 = (int)pwVar21;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).is_busy_now = 1;
        (ebc->info).ebc_irq_status = 0;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,iVar15);
        }
        _dev_info((ebc->info).dev,"overlay mode start, update background, frame_total=%d\n",
                  (ebc->info).frame_total);
        ebc_frame_start(ebc);
      }
      goto LAB_0010437c;
    }
    if (pVar7 == EPD_RESUME) {
      (ebc->info).is_early_suspend = 0;
      ebc_notify(3);
      _dev_info((ebc->info).dev,"early resume\n");
      resume_count_start = 1;
      resume_frame_count = 0;
      iVar15 = check_black_percent();
      goto joined_r0x001044bc;
    }
  }
  else {
    if (5 < resume_frame_count) {
      resume_count_start = 0;
    }
    resume_frame_count = resume_frame_count + 1;
    iVar15 = check_black_percent();
joined_r0x001044bc:
    if (iVar15 == 0) goto LAB_001043b4;
  }
LAB_001044c4:
  ebc_remove_from_dsp_buf_list(peVar16);
  ebc_buf_release(peVar16);
  goto LAB_0010437c;
  while( true ) {
    if (lVar18 != 0) goto __out;
    lVar31 = schedule_timeout(lVar31);
    lVar18 = prepare_to_wait_event(&ebc_thread_wq,auStack120,1);
    bVar13 = (ebc->info).ebc_dsp_buf_status != 0;
    bVar14 = lVar31 == 0;
    if (bVar13 && bVar14) break;
LAB_001048d0:
    if ((bool)(bVar13 | bVar14)) break;
  }
  finish_wait(&ebc_thread_wq,auStack120);
__out:
  if ((ebc->info).ebc_dsp_buf_status != 0) goto LAB_0010437c;
  if ((ebc->info).is_busy_now == 1) {
    init_wait_entry(auStack120,0);
    while ((lVar18 = prepare_to_wait_event(&ebc_thread_wq,auStack120,1),
           (ebc->info).is_busy_now != 0 && (iVar15 = (ebc->info).ebc_dsp_buf_status, iVar15 == 0)))
    {
      if (lVar18 != 0) goto LAB_00104fbc;
      schedule();
    }
    iVar15 = (int)register0x00000008 + -0x78;
    finish_wait(&ebc_thread_wq);
    if (((ebc->info).is_busy_now == 0) && ((ebc->info).ebc_power_status == 1)) goto LAB_00104fb0;
LAB_00104fbc:
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      iVar10 = (ebc->info).ebc_power_status;
      (ebc->info).ebc_dsp_buf_status = 0;
      goto joined_r0x00104fcc;
    }
  }
  else if ((ebc->info).ebc_power_status == 1) {
LAB_00104fb0:
    iVar15 = 0;
    ebc_power_set(ebc,0);
    goto LAB_00104fbc;
  }
  init_wait_entry(auStack120,0);
  while( true ) {
    lVar18 = prepare_to_wait_event(&ebc_thread_wq,auStack120,1);
    iVar15 = (ebc->info).ebc_dsp_buf_status;
    if (iVar15 != 0) break;
    if (lVar18 != 0) goto __out;
    schedule();
  }
  iVar15 = (int)register0x00000008 + -0x78;
  finish_wait(&ebc_thread_wq);
__out:
  iVar10 = (ebc->info).ebc_power_status;
  (ebc->info).ebc_dsp_buf_status = 0;
joined_r0x00104fcc:
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar15);
  }
  goto LAB_0010437c;
switchD_001044ec_caseD_18:
  _dev_err((ebc->info).dev,"ebc buffer mode %d error!!!\n");
  ebc_remove_from_dsp_buf_list(peVar16);
  ebc_buf_release(peVar16);
  iVar15 = (ebc->info).is_power_off;
  goto joined_r0x00104380;
  while (plVar3 = (long *)((long)peVar16->virt_addr + (long)peVar17),
        plVar2 = (long *)((long)*ppcVar1 + (long)peVar17), peVar17 = (ebc_buf_s *)&peVar17->phy_addr
        , *plVar3 == *plVar2) {
LAB_00104dc8:
    if (peVar17 == peVar19) goto LAB_00104dd0;
  }
LAB_00104550:
  iVar15 = (int)peVar19;
  if (bVar14) {
    iVar10 = (ebc->info).ebc_power_status;
    iStack132 = 0;
  }
  else {
    iVar10 = (ebc->info).full_mode_num;
    if ((0 < iVar10) && (iVar15 = iStack132 + 1, iStack132 = iVar15, iVar10 <= iVar15)) {
      iStack132 = 0;
      peVar16->buf_mode = EPD_FULL_GC16;
    }
    iVar10 = (ebc->info).ebc_power_status;
  }
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar15);
  }
  iVar15 = ebc_lut_update(ebc,((ebc->info).curr_dsp_buf)->needpic);
  if (iVar15 == 0) {
    uVar25 = (ebc->info).lut_data.frame_num;
    (ebc->info).frame_total = (char)uVar25;
    _dev_info((ebc->info).dev,"frame start, mode = %d, framecount = %d\n",
              ((ebc->info).curr_dsp_buf)->buf_mode,uVar25 & 0xff);
    (ebc->info).is_busy_now = 1;
    ebc_frame_start(ebc);
    ptVar4 = &(ebc->info).frame_timer;
    mod_timer(ptVar4,jiffies + 900);
    if ((ebc->info).ebc_irq_status == 0) {
      init_wait_entry(auStack120,0);
      while (lVar18 = prepare_to_wait_event(&ebc_wq,auStack120,1), (ebc->info).ebc_irq_status == 0)
      {
        if (lVar18 != 0) goto __out;
        schedule();
      }
      finish_wait(&ebc_wq,auStack120);
    }
__out:
    mod_timer(ptVar4,jiffies + 0x18000000);
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).prev_dsp_buf = peVar32;
    pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
    goto joined_r0x00104a70;
  }
  _dev_err((ebc->info).dev,"ebc_lut_update err\n");
  (ebc->info).prev_dsp_buf = peVar32;
one_buffer_end:
  pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
joined_r0x00104a70:
  if (pVar7 == EPD_POWER_OFF) {
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_power_off = 1;
    _dev_info((ebc->info).dev,"power off\n");
    __wake_up_sync(&ebc_poweroff_wq,1,1);
  }
  else if (pVar7 == EPD_SUSPEND) {
    _dev_info((ebc->info).dev,"early suspend\n");
    if ((ebc->info).is_early_suspend == 0) {
      ebc_notify(2);
    }
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_early_suspend = 1;
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
    __wake_up_sync(&ebc_poweroff_wq,1);
  }
  ebc_remove_from_dsp_buf_list(peVar16);
  if ((ebc->info).first_in == 0) {
    (ebc->info).first_in = 1;
  }
  else {
    ebc_buf_release((ebc->info).prev_dsp_buf);
  }
  (ebc->info).prev_dsp_buf = (ebc->info).curr_dsp_buf;
  goto LAB_0010437c;
LAB_00104dd0:
  _dev_info((ebc->info).dev,"check_part_mode==0, no need refresh\n");
  (ebc->info).prev_dsp_buf = peVar32;
  goto one_buffer_end;
LAB_00104c80:
  piVar27[lVar18 + lVar31] =
       (uVar25 | 0xf0000000) ^ (uVar11 & uVar12 ^ (uVar25 | 0xf0000000)) & uVar23;
  iVar26 = iVar26 + 1;
  goto joined_r0x001046dc;
switchD_001044ec_caseD_0:
  down_write(&auto_buf_sema);
  peVar19 = (ebc->info).prev_dsp_buf;
  (ebc->info).curr_dsp_buf = peVar16;
  pVar7 = peVar19->buf_mode;
  bVar14 = pVar7 + ~EPD_FORCE_FULL < 2;
  if ((bVar14 || pVar7 == EPD_AUTO) || !bVar14 && pVar7 == EPD_OVERLAY) {
    frame_count = (u64 *)(ebc->info).auto_frame_count;
    puVar20 = (u32 *)(ebc->info).auto_image_new;
    if (peVar16->needpic == 0x20) {
      refresh_new_image_auto_32(puVar20,(u32 *)peVar16->virt_addr,frame_count,ebc_info);
    }
    else {
      refresh_new_image_auto(puVar20,(u32 *)peVar16->virt_addr,frame_count,ebc_info);
    }
  }
  else {
    if (peVar19->needpic == 0x20) {
      iVar15 = (ebc->info).ebc_buf_real_size;
      piVar27 = (ebc->info).auto_image_old;
      if (0 < iVar15) {
        lVar18 = 0;
        pbVar24 = (byte *)peVar19->virt_addr;
        do {
          *(byte *)((long)piVar27 + lVar18) = pbVar24[1] & 0xf0 | *pbVar24 >> 4;
          lVar18 = lVar18 + 1;
          pbVar24 = pbVar24 + 2;
        } while ((int)lVar18 < iVar15);
        goto LAB_0010483c;
      }
      peVar19 = peVar16;
      if (peVar16->needpic == 0x20) goto LAB_00104b84;
    }
    else {
      memcpy((ebc->info).auto_image_old,peVar19->virt_addr,(long)(ebc->info).ebc_buf_real_size);
LAB_0010483c:
      peVar19 = (ebc->info).curr_dsp_buf;
      if (peVar19->needpic == 0x20) {
        iVar15 = (ebc->info).ebc_buf_real_size;
        lVar18 = 0;
        piVar27 = (ebc->info).auto_image_new;
        pbVar24 = (byte *)peVar19->virt_addr;
        if (0 < iVar15) {
          do {
            *(byte *)((long)piVar27 + lVar18) = pbVar24[1] & 0xf0 | *pbVar24 >> 4;
            lVar18 = lVar18 + 1;
            pbVar24 = pbVar24 + 2;
          } while ((int)lVar18 < iVar15);
        }
        goto LAB_00104b84;
      }
      iVar15 = (ebc->info).ebc_buf_real_size;
    }
    memcpy((ebc->info).auto_image_new,peVar19->virt_addr,(long)iVar15);
  }
LAB_00104b84:
  up_write(&auto_buf_sema);
  if ((ebc->info).is_busy_now == 0) {
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).is_busy_now = 1;
    if ((ebc->info).ebc_power_status == 0) {
      ebc_power_set(ebc,1);
    }
    iVar15 = ebc_lut_update(ebc,0x10);
    if (iVar15 == -1) {
      _dev_err((ebc->info).dev,"ebc_lut_update err\n");
    }
    else {
      uVar25 = (ebc->info).lut_data.frame_num;
      (ebc->info).frame_total = (char)uVar25;
      (ebc->info).frame_bw_total = (char)(uVar25 >> 8);
      _dev_info((ebc->info).dev,"auto mode start, frame_total=%d\n",uVar25 & 0xff);
      ebc_frame_start(ebc);
    }
  }
  goto one_buffer_end;
}



int ebc_thread(void *ptr)

{
  char **ppcVar1;
  long *plVar2;
  long *plVar3;
  ebc_info *ebc_info;
  timer_list *ptVar4;
  int iVar5;
  int iVar6;
  panel_refresh_mode pVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ebc *ebc;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ebc_buf_s *peVar17;
  ebc_buf_s *peVar18;
  long lVar19;
  ebc_buf_s *peVar20;
  u32 *puVar21;
  workqueue_struct *pwVar22;
  ulong uVar23;
  u64 *frame_count;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  u8 *puVar29;
  int *piVar30;
  char *pcVar31;
  long lVar32;
  ebc_buf_s *peVar33;
  int local_84;
  wait_queue_entry __wq_entry;
  ebc_buf_s new_prev_buf;
  
  lVar13 = __stack_chk_guard;
  ebc = global_ebc;
  ebc_info = &global_ebc->info;
  local_84 = 0;
LAB_0010437c:
  iVar16 = (ebc->info).is_power_off;
joined_r0x00104380:
  if (iVar16 != 0) {
    if ((ebc->info).ebc_power_status == 1) {
      ebc_power_set(ebc,0);
    }
    if (lVar13 == __stack_chk_guard) {
      return 0;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  peVar17 = ebc_dsp_buf_get();
  if ((peVar17 == (ebc_buf_s *)0x0) || (peVar17->phy_addr == 0)) {
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      (ebc->info).ebc_dsp_buf_status = 0;
      goto LAB_0010437c;
    }
    init_wait_entry(&__wq_entry,0);
    lVar32 = 0x3c;
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    bVar15 = false;
    bVar14 = (ebc->info).ebc_dsp_buf_status != 0;
    goto LAB_001048d0;
  }
  pVar7 = peVar17->buf_mode;
  if ((pVar7 + ~EPD_RESET & 0xfffffffd) == 0) {
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
LAB_001043b4:
    mod_timer(&(ebc->info).vdd_timer,jiffies + 0x18000000);
    if ((ebc->info).first_in == 0) {
      (ebc->info).prev_dsp_buf = peVar17;
      peVar20 = peVar17;
    }
    else {
      peVar20 = (ebc->info).prev_dsp_buf;
    }
    pVar7 = peVar20->buf_mode;
    if (peVar17->buf_mode != pVar7) {
      _dev_info((ebc->info).dev,"change display mode from %d to %d\n");
      if ((ebc->info).is_busy_now == 1) {
        _dev_info((ebc->info).dev,"ebc is busy now, waiting prev refresh mode end...\n");
        if ((ebc->info).ebc_irq_status == 0) {
          init_wait_entry(&__wq_entry,0);
          while (lVar19 = prepare_to_wait_event(&ebc_wq,&__wq_entry,1),
                (ebc->info).ebc_irq_status == 0) {
            if (lVar19 != 0) goto __out;
            schedule();
          }
          finish_wait(&ebc_wq,&__wq_entry);
        }
__out:
        _dev_info((ebc->info).dev,"prev refresh mode end\n");
      }
      pVar7 = peVar17->buf_mode;
    }
    switch(pVar7) {
    case EPD_AUTO:
    case EPD_AUTO_DU:
    case EPD_AUTO_DU4:
      goto switchD_001044ec_caseD_0;
    case EPD_OVERLAY:
      if ((ebc->info).overlay_enable == 0) {
        _dev_info((ebc->info).dev,"overlay disabled, drop EPD_OVERLAY frame\n");
        goto LAB_001044c4;
      }
      peVar20 = (ebc->info).prev_dsp_buf;
      (ebc->info).curr_dsp_buf = peVar17;
      (ebc->info).overlay_start = 1;
      pVar7 = peVar20->buf_mode;
      if ((pVar7 < EPD_FULL_GC16 || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
        peVar20 = peVar17;
        if ((pVar7 == EPD_AUTO || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
          memcpy((ebc->info).auto_image_bg,(ebc->info).auto_image_old,
                 (long)(ebc->info).ebc_buf_real_size);
          peVar20 = (ebc->info).curr_dsp_buf;
        }
        goto LAB_00104658;
      }
      if (peVar20->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        piVar28 = (ebc->info).auto_image_bg;
        if (iVar16 < 1) goto LAB_0010463c;
        lVar19 = 0;
        pbVar25 = (byte *)peVar20->virt_addr;
        do {
          *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
          lVar19 = lVar19 + 1;
          pbVar25 = pbVar25 + 2;
        } while ((int)lVar19 < iVar16);
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar20->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      iVar16 = (ebc->info).ebc_buf_real_size;
      piVar28 = (ebc->info).auto_image_bg;
LAB_0010463c:
      memcpy((ebc->info).auto_image_new,piVar28,(long)iVar16);
      memcpy((ebc->info).auto_image_old,(ebc->info).auto_image_bg,
             (long)(ebc->info).ebc_buf_real_size);
      peVar20 = (ebc->info).curr_dsp_buf;
LAB_00104658:
      iVar5 = peVar20->win_x1;
      iVar16 = peVar20->win_y1;
      iVar6 = peVar20->win_x2;
      iVar8 = (ebc->info).width;
      iVar10 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      iVar5 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar6 = iVar6 >> 3;
      iVar5 = (iVar5 >> 3) + 1;
      iVar9 = (ebc->info).height;
      pcVar31 = peVar20->virt_addr;
      iVar8 = iVar6 + -1;
      if (iVar5 < iVar6) {
        iVar8 = iVar5;
      }
      iVar5 = iVar9 + -1;
      if (peVar20->win_y2 < iVar9) {
        iVar5 = peVar20->win_y2;
      }
      iVar9 = iVar16 * iVar6;
      piVar28 = (ebc->info).auto_image_new;
      piVar30 = (ebc->info).auto_image_bg;
      puVar29 = (ebc->info).auto_frame_count;
      for (; iVar27 = iVar10 >> 3, iVar16 <= iVar5; iVar16 = iVar16 + 1) {
joined_r0x001046dc:
        if (iVar27 <= iVar8) {
          do {
            lVar32 = (long)iVar27;
            uVar24 = 0;
            lVar19 = (long)iVar9;
            uVar23 = *(ulong *)(puVar29 + lVar32 * 8 + (long)iVar9 * 8);
            uVar26 = piVar28[lVar19 + lVar32];
            uVar11 = *(uint *)(pcVar31 + lVar32 * 4 + lVar19 * 4);
            uVar12 = piVar30[lVar19 + lVar32];
            if (((uVar23 & 0xff) == 0) && (uVar24 = 0xf, (uVar11 & 0xf) == 0xe)) {
              uVar26 = uVar26 | 0xf;
              uVar24 = 0;
            }
            if ((uVar23 & 0xff00) == 0) {
              if ((uVar11 & 0xf0) == 0xe0) {
                uVar26 = uVar26 | 0xf0;
              }
              else {
                uVar24 = uVar24 | 0xf0;
              }
            }
            if ((uVar23 & 0xff0000) == 0) {
              if ((uVar11 & 0xf00) == 0xe00) {
                uVar26 = uVar26 | 0xf00;
              }
              else {
                uVar24 = uVar24 | 0xf00;
              }
            }
            if ((uVar23 & 0xff000000) == 0) {
              if ((uVar11 & 0xf000) == 0xe000) {
                uVar26 = uVar26 | 0xf000;
              }
              else {
                uVar24 = uVar24 | 0xf000;
              }
            }
            if ((uVar23 & 0xff00000000) == 0) {
              if ((uVar11 & 0xf0000) == 0xe0000) {
                uVar26 = uVar26 | 0xf0000;
              }
              else {
                uVar24 = uVar24 | 0xf0000;
              }
            }
            if ((uVar23 & 0xff0000000000) == 0) {
              if ((uVar11 & 0xf00000) == 0xe00000) {
                uVar26 = uVar26 | 0xf00000;
              }
              else {
                uVar24 = uVar24 | 0xf00000;
              }
            }
            if ((uVar23 & 0xff000000000000) == 0) {
              if ((uVar11 & 0xf000000) == 0xe000000) {
                uVar26 = uVar26 | 0xf000000;
              }
              else {
                uVar24 = uVar24 | 0xf000000;
              }
            }
            if ((uVar23 & 0xff00000000000000) == 0) {
              if ((uVar11 & 0xf0000000) == 0xe0000000) goto LAB_00104c80;
              uVar24 = uVar24 | 0xf0000000;
            }
            iVar27 = iVar27 + 1;
            piVar28[lVar19 + lVar32] = uVar26 ^ (uVar11 & uVar12 ^ uVar26) & uVar24;
            if (iVar8 < iVar27) break;
          } while( true );
        }
        iVar9 = iVar9 + iVar6;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).ebc_irq_status = 0;
        (ebc->info).is_busy_now = 1;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,1);
        }
        iVar16 = ebc_lut_update(ebc,0x10);
        if (iVar16 != -1) {
          uVar26 = (ebc->info).lut_data.frame_num;
          (ebc->info).frame_total = (char)uVar26;
          (ebc->info).frame_bw_total = (char)(uVar26 >> 8);
          _dev_info((ebc->info).dev,"overlay mode start, frame_total=%d, bw_frame = %d\n",
                    uVar26 & 0xff,uVar26 >> 8 & 0xff);
          ebc_frame_start(ebc);
        }
      }
      goto one_buffer_end;
    case EPD_FULL_GC16:
    case EPD_FULL_GL16:
    case EPD_FULL_GLR16:
    case EPD_FULL_GLD16:
    case EPD_FULL_GCC16:
    case EPD_PART_GLR16:
    case EPD_PART_GLD16:
    case EPD_A2:
    case EPD_A2_DITHER:
    case EPD_A2_ENTER:
    case EPD_RESET:
    case EPD_SUSPEND:
    case EPD_RESUME:
    case EPD_POWER_OFF:
    case EPD_FORCE_FULL:
      bVar15 = true;
      break;
    case EPD_PART_GC16:
    case EPD_PART_GL16:
    case EPD_PART_GCC16:
    case EPD_DU:
    case EPD_DU4:
      bVar15 = false;
      break;
    default:
      goto switchD_001044ec_caseD_18;
    }
    peVar33 = (ebc->info).prev_dsp_buf;
    pVar7 = peVar33->buf_mode;
    uVar26 = pVar7 + ~EPD_FORCE_FULL;
    peVar20 = (ebc_buf_s *)(ulong)uVar26;
    if ((uVar26 < 2 || pVar7 == EPD_AUTO) || uVar26 >= 2 && pVar7 == EPD_OVERLAY) {
      (ebc->info).prev_dsp_buf = &new_prev_buf;
      new_prev_buf.virt_addr = (char *)(ebc->info).auto_image_old;
      new_prev_buf.needpic = 0x10;
    }
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).curr_dsp_buf = peVar17;
    if (0xe < peVar17->buf_mode + ~EPD_OVERLAY) goto LAB_00104550;
    peVar20 = (ebc->info).prev_dsp_buf;
    if (peVar17->needpic != peVar20->needpic) goto LAB_00104550;
    iVar10 = (ebc->info).ebc_buf_real_size;
    iVar16 = iVar10 << 1;
    if (peVar17->needpic != 0x20) {
      iVar16 = iVar10;
    }
    iVar10 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar10 = iVar16;
    }
    if (iVar10 >> 3 < 1) goto LAB_00104dd0;
    ppcVar1 = &peVar20->virt_addr;
    peVar20 = *(ebc_buf_s **)*ppcVar1;
    if (*(ebc_buf_s **)peVar17->virt_addr != peVar20) goto LAB_00104550;
    peVar20 = (ebc_buf_s *)(((ulong)((iVar10 >> 3) - 1) + 1) * 8);
    peVar18 = (ebc_buf_s *)0x8;
    goto LAB_00104dc8;
  }
  if (resume_count_start == 0) {
    if (*(long *)&(ebc->info).is_early_suspend == 0) {
      if (pVar7 == EPD_FORCE_FULL) {
        (ebc->info).overlay_start = 0;
        goto LAB_001043b4;
      }
      if ((ebc->info).overlay_start == 0 || pVar7 == EPD_OVERLAY) goto LAB_001043b4;
      if (peVar17->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        lVar19 = 0;
        piVar28 = (ebc->info).auto_image_bg;
        pbVar25 = (byte *)peVar17->virt_addr;
        if (0 < iVar16) {
          do {
            *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
            lVar19 = lVar19 + 1;
            pbVar25 = pbVar25 + 2;
          } while ((int)lVar19 < iVar16);
        }
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar17->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      ebc_remove_from_dsp_buf_list(peVar17);
      ebc_buf_release(peVar17);
      if ((ebc->info).auto_need_refresh == 0) {
        peVar17 = (ebc->info).curr_dsp_buf;
        puVar21 = (u32 *)peVar17->virt_addr;
        refresh_new_image2((u32 *)(ebc->info).auto_image_new,puVar21,
                           (u32 *)(ebc->info).auto_image_bg,(u64 *)(ebc->info).auto_frame_count,
                           ebc_info,peVar17->buf_mode);
        iVar16 = (int)puVar21;
      }
      else {
        pwVar22 = (ebc->info).auto_buffer_wq;
        queue_work_on(8,pwVar22,&(ebc->info).auto_buffer_work);
        iVar16 = (int)pwVar22;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).is_busy_now = 1;
        (ebc->info).ebc_irq_status = 0;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,iVar16);
        }
        _dev_info((ebc->info).dev,"overlay mode start, update background, frame_total=%d\n",
                  (ebc->info).frame_total);
        ebc_frame_start(ebc);
      }
      goto LAB_0010437c;
    }
    if (pVar7 == EPD_RESUME) {
      (ebc->info).is_early_suspend = 0;
      ebc_notify(3);
      _dev_info((ebc->info).dev,"early resume\n");
      resume_count_start = 1;
      resume_frame_count = 0;
      iVar16 = check_black_percent();
      goto joined_r0x001044bc;
    }
  }
  else {
    if (5 < resume_frame_count) {
      resume_count_start = 0;
    }
    resume_frame_count = resume_frame_count + 1;
    iVar16 = check_black_percent();
joined_r0x001044bc:
    if (iVar16 == 0) goto LAB_001043b4;
  }
LAB_001044c4:
  ebc_remove_from_dsp_buf_list(peVar17);
  ebc_buf_release(peVar17);
  goto LAB_0010437c;
  while( true ) {
    if (lVar19 != 0) goto __out;
    lVar32 = schedule_timeout(lVar32);
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    bVar14 = (ebc->info).ebc_dsp_buf_status != 0;
    bVar15 = lVar32 == 0;
    if (bVar14 && bVar15) break;
LAB_001048d0:
    if ((bool)(bVar14 | bVar15)) break;
  }
  finish_wait(&ebc_thread_wq,&__wq_entry);
__out:
  if ((ebc->info).ebc_dsp_buf_status != 0) goto LAB_0010437c;
  if ((ebc->info).is_busy_now == 1) {
    init_wait_entry(&__wq_entry,0);
    while ((lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1),
           (ebc->info).is_busy_now != 0 && (iVar16 = (ebc->info).ebc_dsp_buf_status, iVar16 == 0)))
    {
      if (lVar19 != 0) goto LAB_00104fbc;
      schedule();
    }
    iVar16 = (int)register0x00000008 + -0x78;
    finish_wait(&ebc_thread_wq);
    if (((ebc->info).is_busy_now == 0) && ((ebc->info).ebc_power_status == 1)) goto LAB_00104fb0;
LAB_00104fbc:
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      iVar10 = (ebc->info).ebc_power_status;
      (ebc->info).ebc_dsp_buf_status = 0;
      goto joined_r0x00104fcc;
    }
  }
  else if ((ebc->info).ebc_power_status == 1) {
LAB_00104fb0:
    iVar16 = 0;
    ebc_power_set(ebc,0);
    goto LAB_00104fbc;
  }
  init_wait_entry(&__wq_entry,0);
  while( true ) {
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    iVar16 = (ebc->info).ebc_dsp_buf_status;
    if (iVar16 != 0) break;
    if (lVar19 != 0) goto __out;
    schedule();
  }
  iVar16 = (int)register0x00000008 + -0x78;
  finish_wait(&ebc_thread_wq);
__out:
  iVar10 = (ebc->info).ebc_power_status;
  (ebc->info).ebc_dsp_buf_status = 0;
joined_r0x00104fcc:
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar16);
  }
  goto LAB_0010437c;
switchD_001044ec_caseD_18:
  _dev_err((ebc->info).dev,"ebc buffer mode %d error!!!\n");
  ebc_remove_from_dsp_buf_list(peVar17);
  ebc_buf_release(peVar17);
  iVar16 = (ebc->info).is_power_off;
  goto joined_r0x00104380;
  while (plVar3 = (long *)((long)peVar17->virt_addr + (long)peVar18),
        plVar2 = (long *)((long)*ppcVar1 + (long)peVar18), peVar18 = (ebc_buf_s *)&peVar18->phy_addr
        , *plVar3 == *plVar2) {
LAB_00104dc8:
    if (peVar18 == peVar20) goto LAB_00104dd0;
  }
LAB_00104550:
  iVar16 = (int)peVar20;
  if (bVar15) {
    iVar10 = (ebc->info).ebc_power_status;
    local_84 = 0;
  }
  else {
    iVar10 = (ebc->info).full_mode_num;
    if ((0 < iVar10) && (iVar16 = local_84 + 1, local_84 = iVar16, iVar10 <= iVar16)) {
      local_84 = 0;
      peVar17->buf_mode = EPD_FULL_GC16;
    }
    iVar10 = (ebc->info).ebc_power_status;
  }
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar16);
  }
  iVar16 = ebc_lut_update(ebc,((ebc->info).curr_dsp_buf)->needpic);
  if (iVar16 == 0) {
    uVar26 = (ebc->info).lut_data.frame_num;
    (ebc->info).frame_total = (char)uVar26;
    _dev_info((ebc->info).dev,"frame start, mode = %d, framecount = %d\n",
              ((ebc->info).curr_dsp_buf)->buf_mode,uVar26 & 0xff);
    (ebc->info).is_busy_now = 1;
    ebc_frame_start(ebc);
    ptVar4 = &(ebc->info).frame_timer;
    mod_timer(ptVar4,jiffies + 900);
    if ((ebc->info).ebc_irq_status == 0) {
      init_wait_entry(&__wq_entry,0);
      while (lVar19 = prepare_to_wait_event(&ebc_wq,&__wq_entry,1), (ebc->info).ebc_irq_status == 0)
      {
        if (lVar19 != 0) goto __out;
        schedule();
      }
      finish_wait(&ebc_wq,&__wq_entry);
    }
__out:
    mod_timer(ptVar4,jiffies + 0x18000000);
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).prev_dsp_buf = peVar33;
    pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
    goto joined_r0x00104a70;
  }
  _dev_err((ebc->info).dev,"ebc_lut_update err\n");
  (ebc->info).prev_dsp_buf = peVar33;
one_buffer_end:
  pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
joined_r0x00104a70:
  if (pVar7 == EPD_POWER_OFF) {
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_power_off = 1;
    _dev_info((ebc->info).dev,"power off\n");
    __wake_up_sync(&ebc_poweroff_wq,1,1);
  }
  else if (pVar7 == EPD_SUSPEND) {
    _dev_info((ebc->info).dev,"early suspend\n");
    if ((ebc->info).is_early_suspend == 0) {
      ebc_notify(2);
    }
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_early_suspend = 1;
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
    __wake_up_sync(&ebc_poweroff_wq,1);
  }
  ebc_remove_from_dsp_buf_list(peVar17);
  if ((ebc->info).first_in == 0) {
    (ebc->info).first_in = 1;
  }
  else {
    ebc_buf_release((ebc->info).prev_dsp_buf);
  }
  (ebc->info).prev_dsp_buf = (ebc->info).curr_dsp_buf;
  goto LAB_0010437c;
LAB_00104dd0:
  _dev_info((ebc->info).dev,"check_part_mode==0, no need refresh\n");
  (ebc->info).prev_dsp_buf = peVar33;
  goto one_buffer_end;
LAB_00104c80:
  piVar28[lVar19 + lVar32] =
       (uVar26 | 0xf0000000) ^ (uVar11 & uVar12 ^ (uVar26 | 0xf0000000)) & uVar24;
  iVar27 = iVar27 + 1;
  goto joined_r0x001046dc;
switchD_001044ec_caseD_0:
  down_write(&auto_buf_sema);
  peVar20 = (ebc->info).prev_dsp_buf;
  (ebc->info).curr_dsp_buf = peVar17;
  pVar7 = peVar20->buf_mode;
  bVar15 = pVar7 + ~EPD_FORCE_FULL < 2;
  if ((bVar15 || pVar7 == EPD_AUTO) || !bVar15 && pVar7 == EPD_OVERLAY) {
    frame_count = (u64 *)(ebc->info).auto_frame_count;
    puVar21 = (u32 *)(ebc->info).auto_image_new;
    if (peVar17->needpic == 0x20) {
      refresh_new_image_auto_32(puVar21,(u32 *)peVar17->virt_addr,frame_count,ebc_info);
    }
    else {
      refresh_new_image_auto(puVar21,(u32 *)peVar17->virt_addr,frame_count,ebc_info);
    }
  }
  else {
    if (peVar20->needpic == 0x20) {
      iVar16 = (ebc->info).ebc_buf_real_size;
      piVar28 = (ebc->info).auto_image_old;
      if (0 < iVar16) {
        lVar19 = 0;
        pbVar25 = (byte *)peVar20->virt_addr;
        do {
          *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
          lVar19 = lVar19 + 1;
          pbVar25 = pbVar25 + 2;
        } while ((int)lVar19 < iVar16);
        goto LAB_0010483c;
      }
      peVar20 = peVar17;
      if (peVar17->needpic == 0x20) goto LAB_00104b84;
    }
    else {
      memcpy((ebc->info).auto_image_old,peVar20->virt_addr,(long)(ebc->info).ebc_buf_real_size);
LAB_0010483c:
      peVar20 = (ebc->info).curr_dsp_buf;
      if (peVar20->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        lVar19 = 0;
        piVar28 = (ebc->info).auto_image_new;
        pbVar25 = (byte *)peVar20->virt_addr;
        if (0 < iVar16) {
          do {
            *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
            lVar19 = lVar19 + 1;
            pbVar25 = pbVar25 + 2;
          } while ((int)lVar19 < iVar16);
        }
        goto LAB_00104b84;
      }
      iVar16 = (ebc->info).ebc_buf_real_size;
    }
    memcpy((ebc->info).auto_image_new,peVar20->virt_addr,(long)iVar16);
  }
LAB_00104b84:
  up_write(&auto_buf_sema);
  if ((ebc->info).is_busy_now == 0) {
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).is_busy_now = 1;
    if ((ebc->info).ebc_power_status == 0) {
      ebc_power_set(ebc,1);
    }
    iVar16 = ebc_lut_update(ebc,0x10);
    if (iVar16 == -1) {
      _dev_err((ebc->info).dev,"ebc_lut_update err\n");
    }
    else {
      uVar26 = (ebc->info).lut_data.frame_num;
      (ebc->info).frame_total = (char)uVar26;
      (ebc->info).frame_bw_total = (char)(uVar26 >> 8);
      _dev_info((ebc->info).dev,"auto mode start, frame_total=%d\n",uVar26 & 0xff);
      ebc_frame_start(ebc);
    }
  }
  goto one_buffer_end;
}



int ebc_register_notifier(notifier_block *nb)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_chain_register(&ebc_notifier_list,nb);
  return iVar1;
}



int ebc_unregister_notifier(notifier_block *nb)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_chain_unregister(&ebc_notifier_list,nb);
  return iVar1;
}



int ebc_notify(ulong event)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_call_chain(&ebc_notifier_list,event,0);
  return iVar1;
}



int epd_lut_from_mem_init(void *waveform)

{
  int iVar1;
  code *pcVar2;
  
  _mcount();
  iVar1 = rkf_wf_input(waveform);
  if (iVar1 < 0) {
    printk("[lut]: failed to input RKF waveform\n");
    iVar1 = pvi_wf_input(waveform);
    if (iVar1 < 0) {
      printk("[lut]: failed to input PVI waveform\n");
      return iVar1;
    }
    printk("[lut]: PVI waveform\n");
    pcVar2 = pvi_wf_get_lut;
  }
  else {
    printk("[lut]: RKF waveform\n");
    pcVar2 = rkf_wf_get_lut;
  }
  lut_get = pcVar2;
  return 0;
}



int epd_lut_from_file_init(device_conflict *dev,void *waveform,int size)

{
  int iVar1;
  firmware *fw;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  iVar1 = request_firmware_into_buf(&fw,"waveform.bin",dev,waveform,(long)size);
  if (iVar1 == 0) {
    iVar1 = epd_lut_from_mem_init(waveform);
  }
  else {
    _dev_err(dev,"failed to load waveform firmware: %d\n",iVar1);
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



char * epd_lut_get_wf_version(void)

{
  char *pcVar1;
  
  _mcount();
  pcVar1 = rkf_wf_get_version();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = pvi_wf_get_version();
    if (pcVar1 != (char *)0x0) {
      pcVar1 = pvi_wf_get_version();
    }
  }
  else {
    pcVar1 = rkf_wf_get_version();
  }
  return pcVar1;
}



int epd_lut_get(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  int iVar1;
  
  _mcount();
  iVar1 = (*lut_get)(output,lut_type,temperture,needpic);
  return iVar1;
}



int epd_overlay_lut(void)

{
  _mcount();
  return 5;
}



void pvi_lut_init_wf_table(u8 *wf_table,int frame_num)

{
  u8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = waveformdata;
  if (0 < frame_num) {
    iVar6 = 0;
    do {
      iVar4 = iVar6 << 0x10;
      uVar5 = 0;
      do {
        lVar3 = 0;
        do {
          uVar2 = (uint)lVar3;
          lVar3 = lVar3 + 1;
          wf_table[(int)(iVar4 + uVar2)] =
               (byte)((puVar1[(int)(iVar6 * 0x400 + (uVar5 & 0xf0) * 2 + ((uVar2 & 0xffff) >> 4))] &
                      3) << 2) |
               puVar1[(int)((uVar2 & 0xf) + (uVar5 & 0xf) * 0x20 + iVar6 * 0x400)] & 3;
        } while (lVar3 != 0x100);
        iVar4 = iVar4 + 0x100;
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 != 0x100);
      iVar6 = iVar6 + 1;
    } while (frame_num != iVar6);
    return;
  }
  return;
}



int FUN_00105394(uint param_1)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = global_waveform->mode_version;
  if (bVar1 == 0x19) {
LAB_00105538:
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 7;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 5;
    parse_mode_version::pvi_modes[8] = 4;
    parse_mode_version::pvi_modes[7] = 6;
  }
  else if (bVar1 < 0x1a) {
    if (bVar1 == 0x12) {
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 7;
      parse_mode_version::pvi_modes[3] = 3;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 5;
      parse_mode_version::pvi_modes[6] = 6;
      parse_mode_version::pvi_modes[7] = 4;
      parse_mode_version::pvi_modes[8] = 5;
    }
    else if (bVar1 < 0x13) {
      if (bVar1 != 9) goto LAB_001055d8;
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 3;
      parse_mode_version::pvi_modes[6] = 3;
      parse_mode_version::pvi_modes[7] = 4;
      parse_mode_version::pvi_modes[8] = 3;
    }
    else if (bVar1 == 0x16) {
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 4;
      parse_mode_version::pvi_modes[6] = 4;
      parse_mode_version::pvi_modes[7] = 6;
      parse_mode_version::pvi_modes[8] = 5;
    }
    else {
      if (bVar1 == 0x18) goto LAB_00105500;
LAB_001055d8:
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 4;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[8] = 4;
      parse_mode_version::pvi_modes[6] = 5;
      parse_mode_version::pvi_modes[7] = 6;
      printk("pvi : Unknow waveform version %x,%x\n",global_waveform->mode_version,
             global_waveform->wfm_rev);
    }
  }
  else if (bVar1 == 0x23) {
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 5;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 3;
    parse_mode_version::pvi_modes[6] = 3;
    parse_mode_version::pvi_modes[7] = 4;
    parse_mode_version::pvi_modes[8] = 3;
  }
  else if (bVar1 < 0x24) {
    if (bVar1 != 0x20) goto LAB_001055d8;
LAB_00105500:
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 1;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 5;
    parse_mode_version::pvi_modes[7] = 6;
    parse_mode_version::pvi_modes[8] = 4;
  }
  else {
    if (bVar1 == 0x43) goto LAB_00105538;
    if (bVar1 != 0x54) goto LAB_001055d8;
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 1;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 4;
    parse_mode_version::pvi_modes[7] = 5;
    parse_mode_version::pvi_modes[8] = 4;
  }
  if (((param_1 == 5) || (param_1 == 2)) || (param_1 == 7)) {
    piVar2 = parse_mode_version::pvi_modes + 3;
  }
  else if (param_1 < 8) {
    if (param_1 == 3) {
      piVar2 = parse_mode_version::pvi_modes + 2;
    }
    else if (param_1 < 4) {
      piVar2 = parse_mode_version::pvi_modes;
      if (param_1 != 1) {
LAB_001054ac:
        printk("pvi: unspport PVI waveform type");
        return -1;
      }
    }
    else if (param_1 == 4) {
      piVar2 = parse_mode_version::pvi_modes + 1;
    }
    else {
      piVar2 = parse_mode_version::pvi_modes + 7;
      if (param_1 != 6) goto LAB_001054ac;
    }
  }
  else if (param_1 == 9) {
    piVar2 = parse_mode_version::pvi_modes + 5;
  }
  else if (param_1 < 9) {
    piVar2 = parse_mode_version::pvi_modes + 4;
  }
  else if (param_1 == 10) {
    piVar2 = parse_mode_version::pvi_modes + 6;
  }
  else {
    piVar2 = parse_mode_version::pvi_modes + 8;
    if (param_1 != 0xb) goto LAB_001054ac;
  }
  return *piVar2;
}



int get_wf_mode_index(epd_lut_type lut_type)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = global_waveform->mode_version;
  if (bVar1 == 0x19) {
LAB_00105538:
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 7;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 5;
    parse_mode_version::pvi_modes[8] = 4;
    parse_mode_version::pvi_modes[7] = 6;
  }
  else if (bVar1 < 0x1a) {
    if (bVar1 == 0x12) {
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 7;
      parse_mode_version::pvi_modes[3] = 3;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 5;
      parse_mode_version::pvi_modes[6] = 6;
      parse_mode_version::pvi_modes[7] = 4;
      parse_mode_version::pvi_modes[8] = 5;
    }
    else if (bVar1 < 0x13) {
      if (bVar1 != 9) goto LAB_001055d8;
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 3;
      parse_mode_version::pvi_modes[6] = 3;
      parse_mode_version::pvi_modes[7] = 4;
      parse_mode_version::pvi_modes[8] = 3;
    }
    else if (bVar1 == 0x16) {
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 4;
      parse_mode_version::pvi_modes[6] = 4;
      parse_mode_version::pvi_modes[7] = 6;
      parse_mode_version::pvi_modes[8] = 5;
    }
    else {
      if (bVar1 == 0x18) goto LAB_00105500;
LAB_001055d8:
      parse_mode_version::pvi_modes[0] = 0;
      parse_mode_version::pvi_modes[1] = 1;
      parse_mode_version::pvi_modes[4] = 3;
      parse_mode_version::pvi_modes[5] = 4;
      parse_mode_version::pvi_modes[2] = 1;
      parse_mode_version::pvi_modes[3] = 2;
      parse_mode_version::pvi_modes[8] = 4;
      parse_mode_version::pvi_modes[6] = 5;
      parse_mode_version::pvi_modes[7] = 6;
      printk("pvi : Unknow waveform version %x,%x\n",global_waveform->mode_version,
             global_waveform->wfm_rev);
    }
  }
  else if (bVar1 == 0x23) {
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 5;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 3;
    parse_mode_version::pvi_modes[6] = 3;
    parse_mode_version::pvi_modes[7] = 4;
    parse_mode_version::pvi_modes[8] = 3;
  }
  else if (bVar1 < 0x24) {
    if (bVar1 != 0x20) goto LAB_001055d8;
LAB_00105500:
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 1;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 5;
    parse_mode_version::pvi_modes[7] = 6;
    parse_mode_version::pvi_modes[8] = 4;
  }
  else {
    if (bVar1 == 0x43) goto LAB_00105538;
    if (bVar1 != 0x54) goto LAB_001055d8;
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 1;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 4;
    parse_mode_version::pvi_modes[7] = 5;
    parse_mode_version::pvi_modes[8] = 4;
  }
  if (((lut_type == WF_TYPE_AUTO) || (lut_type == WF_TYPE_GRAY16)) || (lut_type == WF_TYPE_GC16)) {
    piVar2 = parse_mode_version::pvi_modes + 3;
  }
  else if (lut_type < WF_TYPE_GL16) {
    if (lut_type == WF_TYPE_GRAY4) {
      piVar2 = parse_mode_version::pvi_modes + 2;
    }
    else if (lut_type < WF_TYPE_GRAY2) {
      piVar2 = parse_mode_version::pvi_modes;
      if (lut_type != WF_TYPE_RESET) {
LAB_001054ac:
        printk("pvi: unspport PVI waveform type");
        return -1;
      }
    }
    else if (lut_type == WF_TYPE_GRAY2) {
      piVar2 = parse_mode_version::pvi_modes + 1;
    }
    else {
      piVar2 = parse_mode_version::pvi_modes + 7;
      if (lut_type != WF_TYPE_A2) goto LAB_001054ac;
    }
  }
  else if (lut_type == WF_TYPE_GLR16) {
    piVar2 = parse_mode_version::pvi_modes + 5;
  }
  else if (lut_type < WF_TYPE_GLR16) {
    piVar2 = parse_mode_version::pvi_modes + 4;
  }
  else if (lut_type == WF_TYPE_GLD16) {
    piVar2 = parse_mode_version::pvi_modes + 6;
  }
  else {
    piVar2 = parse_mode_version::pvi_modes + 8;
    if (lut_type != WF_TYPE_GCC16) goto LAB_001054ac;
  }
  return *piVar2;
}



int decodewaveform(uchar *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uchar uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  u8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar10 = waveformdata;
  iVar2 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar16 = 0xffffffea;
  }
  else {
    uVar12 = 1;
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar11 = 0;
    do {
      uVar14 = (uint)uVar15;
      bVar5 = data[uVar15];
      if (bVar5 == 0xff) {
        if (maxpic != 0x20) {
          return uVar16;
        }
        if (uVar16 == 0) {
          return 0;
        }
        goto LAB_00105894;
      }
      if (bVar5 == 0xfc) {
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 ^ 1;
        bVar5 = data[uVar14];
      }
      iVar7 = uVar16 * 0x400;
      if (uVar12 == 0) {
        iVar3 = iVar7 + uVar13;
        puVar10[iVar7 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
        puVar10[iVar3 + (uVar11 + 1) * 0x20] = bVar5 >> 2 & 3;
        puVar10[iVar3 + (uVar11 + 2) * 0x20] = bVar5 >> 4 & 3;
        puVar10[iVar3 + (uVar11 + 3) * 0x20] = bVar5 >> 6;
        uVar11 = uVar11 + 4;
        uVar15 = (ulong)(uVar14 + 1);
        if ((uint)iVar2 <= uVar11) {
          uVar13 = uVar13 + 1;
          uVar11 = 0;
          if ((uint)iVar2 <= uVar13) {
            uVar16 = uVar16 + 1;
            uVar13 = 0;
            uVar11 = uVar12;
          }
        }
      }
      else {
        iVar3 = iVar7 + uVar13;
        puVar10[iVar7 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
        bVar8 = bVar5 >> 2 & 3;
        puVar10[iVar3 + (uVar11 + 1) * 0x20] = bVar8;
        bVar9 = bVar5 >> 4 & 3;
        puVar10[iVar3 + (uVar11 + 2) * 0x20] = bVar9;
        puVar10[iVar3 + (uVar11 + 3) * 0x20] = bVar5 >> 6;
        uVar11 = uVar11 + 4;
        if ((uint)iVar2 <= uVar11) {
          uVar13 = uVar13 + 1;
          uVar11 = 0;
          if ((uint)iVar2 <= uVar13) {
            uVar16 = uVar16 + 1;
            uVar13 = 0;
          }
        }
        uVar6 = data[uVar14 + 1];
        while (uVar6 != '\0') {
          iVar7 = uVar11 + 1;
          iVar4 = uVar16 * 0x400 + uVar13;
          iVar3 = uVar11 + 2;
          iVar1 = uVar11 + 3;
          puVar10[uVar16 * 0x400 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
          uVar11 = uVar11 + 4;
          puVar10[(uint)(iVar4 + iVar7 * 0x20)] = bVar8;
          uVar6 = uVar6 + 0xff;
          puVar10[(uint)(iVar4 + iVar3 * 0x20)] = bVar9;
          puVar10[(uint)(iVar4 + iVar1 * 0x20)] = bVar5 >> 6;
          if ((uint)iVar2 <= uVar11) {
            uVar13 = uVar13 + 1;
            uVar11 = 0;
            if ((uint)iVar2 <= uVar13) {
              uVar16 = uVar16 + 1;
              uVar13 = 0;
            }
          }
        }
        uVar15 = (ulong)(uVar14 + 2);
        uVar12 = 1;
      }
    } while (uVar16 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
    if (maxpic == 0x20) {
LAB_00105894:
      puVar10 = waveformdata;
      uVar13 = 0;
      do {
        uVar15 = 0;
        iVar2 = uVar13 * 0x400;
        do {
          uVar11 = 0;
          do {
            uVar14 = uVar11 + iVar2;
            uVar12 = uVar11 >> 1;
            uVar11 = uVar11 + 2;
            puVar10[uVar13 * 0x400 + (int)(uVar15 >> 1) * 0x20 + uVar12] = puVar10[uVar14];
          } while (uVar11 != 0x20);
          uVar11 = (int)uVar15 + 2;
          uVar15 = (ulong)uVar11;
          iVar2 = iVar2 + 0x40;
        } while (uVar11 != 0x20);
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 < uVar16);
    }
  }
  return uVar16;
}



int decodewaveform_32(uchar *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  u8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar10 = waveformdata;
  iVar9 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar16 = 0xffffffea;
  }
  else {
    uVar13 = 1;
    uVar15 = 0;
    uVar16 = 0;
    uVar12 = 0;
    uVar11 = 0;
    do {
      uVar14 = (uint)uVar15;
      bVar4 = data[uVar15];
      if (bVar4 == 0xff) {
        return uVar16;
      }
      if (bVar4 == 0xfc) {
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 ^ 1;
        bVar4 = data[uVar14];
      }
      iVar6 = uVar16 * 0x400;
      if (uVar13 == 0) {
        iVar2 = iVar6 + uVar12;
        puVar10[iVar6 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
        puVar10[iVar2 + (uVar11 + 1) * 0x20] = bVar4 >> 2 & 3;
        puVar10[iVar2 + (uVar11 + 2) * 0x20] = bVar4 >> 4 & 3;
        puVar10[iVar2 + (uVar11 + 3) * 0x20] = bVar4 >> 6;
        uVar11 = uVar11 + 4;
        uVar15 = (ulong)(uVar14 + 1);
        if ((uint)iVar9 <= uVar11) {
          uVar12 = uVar12 + 1;
          uVar11 = 0;
          if ((uint)iVar9 <= uVar12) {
            uVar16 = uVar16 + 1;
            uVar12 = 0;
            uVar11 = uVar13;
          }
        }
      }
      else {
        iVar2 = iVar6 + uVar12;
        puVar10[iVar6 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
        bVar7 = bVar4 >> 2 & 3;
        puVar10[iVar2 + (uVar11 + 1) * 0x20] = bVar7;
        bVar8 = bVar4 >> 4 & 3;
        puVar10[iVar2 + (uVar11 + 2) * 0x20] = bVar8;
        puVar10[iVar2 + (uVar11 + 3) * 0x20] = bVar4 >> 6;
        uVar11 = uVar11 + 4;
        if ((uint)iVar9 <= uVar11) {
          uVar12 = uVar12 + 1;
          uVar11 = 0;
          if ((uint)iVar9 <= uVar12) {
            uVar16 = uVar16 + 1;
            uVar12 = 0;
          }
        }
        uVar5 = data[uVar14 + 1];
        while (uVar5 != '\0') {
          iVar6 = uVar11 + 1;
          iVar3 = uVar12 + uVar16 * 0x400;
          iVar2 = uVar11 + 2;
          iVar1 = uVar11 + 3;
          puVar10[uVar16 * 0x400 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
          uVar11 = uVar11 + 4;
          puVar10[(uint)(iVar3 + iVar6 * 0x20)] = bVar7;
          uVar5 = uVar5 + 0xff;
          puVar10[(uint)(iVar3 + iVar2 * 0x20)] = bVar8;
          puVar10[(uint)(iVar3 + iVar1 * 0x20)] = bVar4 >> 6;
          if ((uint)iVar9 <= uVar11) {
            uVar12 = uVar12 + 1;
            uVar11 = 0;
            if ((uint)iVar9 <= uVar12) {
              uVar16 = uVar16 + 1;
              uVar12 = 0;
            }
          }
        }
        uVar15 = (ulong)(uVar14 + 2);
        uVar13 = 1;
      }
    } while (uVar16 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
  }
  return uVar16;
}



uint FUN_00105afc(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  u8 *puVar5;
  u8 *puVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  
  puVar5 = waveformdata;
  iVar1 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar14 = 0xffffffea;
  }
  else {
    bVar8 = true;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar9 = 0x1e;
    if (maxpic != 0x20) {
      uVar9 = 0xf;
    }
    uVar7 = 0;
    do {
      uVar11 = (uint)uVar12;
      bVar4 = *(byte *)(param_1 + uVar12);
      if (bVar4 == 0xff) goto LAB_00105c9c;
      if (bVar4 == 0xfc) {
        uVar11 = uVar11 + 1;
        bVar8 = (bool)(bVar8 ^ 1);
        bVar4 = *(byte *)(param_1 + (ulong)uVar11);
      }
      if (bVar8) {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
        cVar13 = *(char *)(param_1 + (ulong)(uVar11 + 1));
        if (cVar13 != '\0') {
          do {
            iVar2 = uVar14 * 0x400 + uVar10;
            if (uVar10 == 0 || uVar9 == uVar10) {
              puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
              puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
              puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
              puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
            }
            uVar7 = uVar7 + 4;
            cVar13 = cVar13 + -1;
            if ((uint)iVar1 <= uVar7) {
              uVar10 = uVar10 + 1;
              uVar7 = 0;
              if ((uint)iVar1 <= uVar10) {
                uVar14 = uVar14 + 1;
                uVar10 = 0;
              }
            }
          } while (cVar13 != '\0');
        }
        uVar12 = (ulong)(uVar11 + 2);
        bVar8 = true;
      }
      else {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        uVar12 = (ulong)(uVar11 + 1);
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
      }
    } while (uVar14 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
LAB_00105c9c:
    puVar6 = waveformdata;
    puVar5 = waveformdata;
    uVar10 = uVar14;
    if (maxpic == 0x20) {
      if (param_2 < 1) {
        return uVar14;
      }
      uVar9 = 0;
      do {
        uVar12 = 0;
        iVar1 = uVar9 * 0x400;
        do {
          uVar7 = 0;
          do {
            uVar3 = iVar1 + uVar7;
            uVar11 = uVar7 >> 1;
            uVar7 = uVar7 + 2;
            puVar6[uVar9 * 0x400 + (int)(uVar12 >> 1) * 0x20 + uVar11] = puVar6[uVar3];
          } while (uVar7 != 0x20);
          uVar7 = (int)uVar12 + 2;
          uVar12 = (ulong)uVar7;
          iVar1 = iVar1 + 0x40;
        } while (uVar7 != 0x20);
        uVar9 = uVar9 + 1 & 0xff;
        puVar5 = waveformdata;
      } while ((int)uVar9 < param_2);
    }
    for (; puVar6 = waveformdata, uVar10 = uVar10 & 0xff, waveformdata = puVar5,
        (int)uVar10 < param_2; uVar10 = uVar10 + 1) {
      uVar7 = uVar10 * 0x400;
      uVar9 = uVar7 + 0x200;
      do {
        uVar11 = uVar7 + 0xf;
        puVar6[uVar7] = '\0';
        uVar7 = uVar7 + 0x20;
        puVar6[uVar11] = '\0';
      } while (uVar9 != uVar7);
      puVar5 = waveformdata;
      waveformdata = puVar6;
    }
  }
  return uVar14;
}



int decodewaveform_auto(uchar *data,int gray16_frame)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  u8 *puVar5;
  u8 *puVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uchar uVar13;
  uint uVar14;
  
  puVar5 = waveformdata;
  iVar1 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar14 = 0xffffffea;
  }
  else {
    bVar8 = true;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar9 = 0x1e;
    if (maxpic != 0x20) {
      uVar9 = 0xf;
    }
    uVar7 = 0;
    do {
      uVar11 = (uint)uVar12;
      bVar4 = data[uVar12];
      if (bVar4 == 0xff) goto LAB_00105c9c;
      if (bVar4 == 0xfc) {
        uVar11 = uVar11 + 1;
        bVar8 = (bool)(bVar8 ^ 1);
        bVar4 = data[uVar11];
      }
      if (bVar8) {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
        uVar13 = data[uVar11 + 1];
        if (uVar13 != '\0') {
          do {
            iVar2 = uVar14 * 0x400 + uVar10;
            if (uVar10 == 0 || uVar9 == uVar10) {
              puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
              puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
              puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
              puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
            }
            uVar7 = uVar7 + 4;
            uVar13 = uVar13 + 0xff;
            if ((uint)iVar1 <= uVar7) {
              uVar10 = uVar10 + 1;
              uVar7 = 0;
              if ((uint)iVar1 <= uVar10) {
                uVar14 = uVar14 + 1;
                uVar10 = 0;
              }
            }
          } while (uVar13 != '\0');
        }
        uVar12 = (ulong)(uVar11 + 2);
        bVar8 = true;
      }
      else {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        uVar12 = (ulong)(uVar11 + 1);
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
      }
    } while (uVar14 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
LAB_00105c9c:
    puVar6 = waveformdata;
    puVar5 = waveformdata;
    uVar10 = uVar14;
    if (maxpic == 0x20) {
      if (gray16_frame < 1) {
        return uVar14;
      }
      uVar9 = 0;
      do {
        uVar12 = 0;
        iVar1 = uVar9 * 0x400;
        do {
          uVar7 = 0;
          do {
            uVar3 = iVar1 + uVar7;
            uVar11 = uVar7 >> 1;
            uVar7 = uVar7 + 2;
            puVar6[uVar9 * 0x400 + (int)(uVar12 >> 1) * 0x20 + uVar11] = puVar6[uVar3];
          } while (uVar7 != 0x20);
          uVar7 = (int)uVar12 + 2;
          uVar12 = (ulong)uVar7;
          iVar1 = iVar1 + 0x40;
        } while (uVar7 != 0x20);
        uVar9 = uVar9 + 1 & 0xff;
        puVar5 = waveformdata;
      } while ((int)uVar9 < gray16_frame);
    }
    for (; puVar6 = waveformdata, uVar10 = uVar10 & 0xff, waveformdata = puVar5,
        (int)uVar10 < gray16_frame; uVar10 = uVar10 + 1) {
      uVar7 = uVar10 * 0x400;
      uVar9 = uVar7 + 0x200;
      do {
        uVar11 = uVar7 + 0xf;
        puVar6[uVar7] = '\0';
        uVar7 = uVar7 + 0x20;
        puVar6[uVar11] = '\0';
      } while (uVar9 != uVar7);
      puVar5 = waveformdata;
      waveformdata = puVar6;
    }
  }
  return uVar14;
}



undefined8 FUN_00105e24(uint *param_1,epd_lut_type param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  u8 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  
  if (global_waveform == (pvi_waveform *)0x0) {
    return 0xffffffed;
  }
  if ((param_1 == (uint *)0x0) && (lRam0000000000000010 == 0)) {
    return 0xffffffea;
  }
  if (maxpic < param_4) {
    printk("pvi: unsupport, needpic = %d, maxpic = %d\n",param_4);
    return 0xffffffea;
  }
  if ((param_3 / 3 == pvi_wf_get_lut::sftemp / 3) &&
     (pvi_wf_get_lut::stype == param_2 && param_4 == -1)) {
    return 0;
  }
  bVar2 = global_waveform->temperaturenumber;
  if (bVar2 == 0) {
LAB_00105ee8:
    uVar14 = bVar2 - 1;
  }
  else if (param_3 < (int)(uint)*(byte *)&global_waveform[1].checksum) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      if ((uint)bVar2 == uVar14 + 1) goto LAB_00105ee8;
      uVar9 = uVar14 + 1;
    } while ((int)(uint)global_waveform->xwia[(long)(int)(uVar14 + 0x31) + -0x1d] <= param_3);
  }
  waveformdata = (u8 *)(*(long *)(param_1 + 4) + 0x950000);
  pvi_wf_get_lut::sftemp = param_3;
  pvi_wf_get_lut::stype = param_2;
  if (10 < param_2 + 0xffffffff) {
    printk("pvi: unsupport WF type = %d\n",param_2);
    return 0xffffffff;
  }
  iVar8 = get_wf_mode_index(param_2);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  bVar4 = global_waveform->xwia[(long)iVar8 + -0x1d];
  bVar2 = global_waveform->xwia[(long)iVar8 + -0x1b];
  bVar3 = global_waveform->xwia[(long)iVar8 + -0x1c];
  bVar7 = (uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
          ((uint)bVar3 + (uint)bVar2 + (uint)bVar4 & 0xff);
  if (param_4 != 0x20 && param_2 != WF_TYPE_AUTO) {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x22b);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x239);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform(global_waveform->xwia +
                           ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                    (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                   (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  else {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x24f);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x25d);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform_32(global_waveform->xwia +
                              ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                       (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                      (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  if ((int)uVar9 < 0) {
LAB_00105ffc:
    printk("pvi waveform get frame number failed\n");
    return 0xffffffff;
  }
  *param_1 = uVar9;
  puVar6 = waveformdata;
  if (param_2 != WF_TYPE_AUTO) {
    if (param_4 != 0x20 && param_2 != WF_TYPE_AUTO) {
      pvi_lut_init_wf_table(*(u8 **)(param_1 + 4),uVar9);
      return 0;
    }
    lVar12 = *(long *)(param_1 + 4);
    if (uVar9 == 0) {
      return 0;
    }
    uVar14 = 0;
    do {
      iVar8 = uVar14 << 0x10;
      uVar13 = 0;
      do {
        uVar11 = 0;
        do {
          uVar5 = uVar11 >> 3;
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 1;
          *(byte *)(lVar12 + (iVar8 + iVar10)) =
               puVar6[(int)(((uint)uVar5 & 0x1fff) + uVar14 * 0x400 + (int)(uVar13 >> 3) * 0x20)] &
               3;
        } while (uVar11 != 0x100);
        iVar8 = iVar8 + 0x100;
        uVar1 = (int)uVar13 + 1U & 0xffff;
        uVar13 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      uVar14 = uVar14 + 1;
    } while (uVar9 != uVar14);
    return 0;
  }
  iVar8 = get_wf_mode_index(WF_TYPE_GRAY2);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
      ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
    iVar8 = uVar14 * 4 +
            ((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
             (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
            (uint)global_waveform->xwia[(long)iVar8 + -0x1d]);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      iVar8 = decodewaveform_auto(global_waveform->xwia +
                                  ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10
                                           | (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                          (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d),
                                  uVar9);
      uVar14 = iVar8 << 8;
      if (0 < iVar8) goto LAB_001060d4;
    }
    else {
      uVar14 = 0xffffea00;
      printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x281);
    }
  }
  else {
    uVar14 = 0xffffea00;
    printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x273);
  }
  printk("Get GRAY2 waveform data failed during AUTO mode\n");
LAB_001060d4:
  pvi_lut_init_wf_table(*(u8 **)(param_1 + 4),uVar9);
  *param_1 = *param_1 | uVar14;
  return 0;
}



int pvi_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  u8 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  u8 *puVar12;
  ulong uVar13;
  uint uVar14;
  
  if (global_waveform == (pvi_waveform *)0x0) {
    return -0x13;
  }
  if ((output == (epd_lut_data *)0x0) && (lRam0000000000000010 == 0)) {
    return -0x16;
  }
  if (maxpic < needpic) {
    printk("pvi: unsupport, needpic = %d, maxpic = %d\n",needpic);
    return -0x16;
  }
  if ((temperture / 3 == pvi_wf_get_lut::sftemp / 3) &&
     (pvi_wf_get_lut::stype == lut_type && needpic == -1)) {
    return 0;
  }
  bVar2 = global_waveform->temperaturenumber;
  if (bVar2 == 0) {
LAB_00105ee8:
    uVar14 = bVar2 - 1;
  }
  else if (temperture < (int)(uint)*(byte *)&global_waveform[1].checksum) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      if ((uint)bVar2 == uVar14 + 1) goto LAB_00105ee8;
      uVar9 = uVar14 + 1;
    } while ((int)(uint)global_waveform->xwia[(long)(int)(uVar14 + 0x31) + -0x1d] <= temperture);
  }
  waveformdata = output->wf_table + 0x950000;
  pvi_wf_get_lut::sftemp = temperture;
  pvi_wf_get_lut::stype = lut_type;
  if (10 < lut_type + 0xffffffff) {
    printk("pvi: unsupport WF type = %d\n",lut_type);
    return -1;
  }
  iVar8 = get_wf_mode_index(lut_type);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  bVar4 = global_waveform->xwia[(long)iVar8 + -0x1d];
  bVar2 = global_waveform->xwia[(long)iVar8 + -0x1b];
  bVar3 = global_waveform->xwia[(long)iVar8 + -0x1c];
  bVar7 = (uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
          ((uint)bVar3 + (uint)bVar2 + (uint)bVar4 & 0xff);
  if (needpic != 0x20 && lut_type != WF_TYPE_AUTO) {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x22b);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x239);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform(global_waveform->xwia +
                           ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                    (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                   (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  else {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x24f);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x25d);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform_32(global_waveform->xwia +
                              ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                       (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                      (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  if ((int)uVar9 < 0) {
LAB_00105ffc:
    printk("pvi waveform get frame number failed\n");
    return -1;
  }
  output->frame_num = uVar9;
  puVar6 = waveformdata;
  if (lut_type != WF_TYPE_AUTO) {
    if (needpic != 0x20 && lut_type != WF_TYPE_AUTO) {
      pvi_lut_init_wf_table(output->wf_table,uVar9);
      return 0;
    }
    puVar12 = output->wf_table;
    if (uVar9 == 0) {
      return 0;
    }
    uVar14 = 0;
    do {
      iVar8 = uVar14 << 0x10;
      uVar13 = 0;
      do {
        uVar11 = 0;
        do {
          uVar5 = uVar11 >> 3;
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 1;
          puVar12[iVar8 + iVar10] =
               puVar6[(int)(((uint)uVar5 & 0x1fff) + uVar14 * 0x400 + (int)(uVar13 >> 3) * 0x20)] &
               3;
        } while (uVar11 != 0x100);
        iVar8 = iVar8 + 0x100;
        uVar1 = (int)uVar13 + 1U & 0xffff;
        uVar13 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      uVar14 = uVar14 + 1;
    } while (uVar9 != uVar14);
    return 0;
  }
  iVar8 = get_wf_mode_index(WF_TYPE_GRAY2);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
      ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
    iVar8 = uVar14 * 4 +
            ((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
             (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
            (uint)global_waveform->xwia[(long)iVar8 + -0x1d]);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      iVar8 = decodewaveform_auto(global_waveform->xwia +
                                  ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10
                                           | (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                          (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d),
                                  uVar9);
      uVar14 = iVar8 << 8;
      if (0 < iVar8) goto LAB_001060d4;
    }
    else {
      uVar14 = 0xffffea00;
      printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x281);
    }
  }
  else {
    uVar14 = 0xffffea00;
    printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x273);
  }
  printk("Get GRAY2 waveform data failed during AUTO mode\n");
LAB_001060d4:
  pvi_lut_init_wf_table(output->wf_table,uVar9);
  output->frame_num = output->frame_num | uVar14;
  return 0;
}



int pvi_wf_input(void *waveform_file)

{
  byte bVar1;
  
  if (global_waveform != (pvi_waveform *)0x0) {
    return -0x10;
  }
  printk("pvi : input waveform version 0x%x\n",*(undefined *)((long)waveform_file + 0x10));
  bVar1 = *(byte *)((long)waveform_file + 0x10);
  if (bVar1 < 0x1a) {
    if (bVar1 < 0x18) {
      if (bVar1 == 0x12) {
        global_waveform = (pvi_waveform *)waveform_file;
        return 0;
      }
      if (bVar1 != 0x16) {
        if (bVar1 == 9) {
          global_waveform = (pvi_waveform *)waveform_file;
          return 0;
        }
        goto LAB_00106384;
      }
    }
  }
  else {
    if (bVar1 == 0x23) {
      global_waveform = (pvi_waveform *)waveform_file;
      return 0;
    }
    if (bVar1 < 0x24) {
      if (bVar1 != 0x20) goto LAB_00106384;
    }
    else if (bVar1 != 0x43) {
      if (bVar1 == 0x54) {
        global_waveform = (pvi_waveform *)waveform_file;
        return 0;
      }
LAB_00106384:
      printk("pvi : Unknow waveform version 0x%x, 0x%x, may be wrong waveform file\n",bVar1,
             *(undefined *)((long)waveform_file + 0x16));
      return -8;
    }
  }
  maxpic = 0x20;
  global_waveform = (pvi_waveform *)waveform_file;
  return 0;
}



char * pvi_wf_get_version(void)

{
  pvi_waveform *ppVar1;
  long lVar2;
  
  ppVar1 = global_waveform;
  if (global_waveform != (pvi_waveform *)0x0) {
    lVar2 = 0;
    do {
      pvi_wf_get_version::spi_id_buffer[lVar2] = ppVar1[1].xwia[lVar2 + -0xc];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x1f);
    pvi_wf_get_version::spi_id_buffer[31] = '\0';
    return pvi_wf_get_version::spi_id_buffer;
  }
  return (char *)0x0;
}



uint * decode_wf_data(uchar *pbuf,uint length)

{
  uint *__dest;
  
  __dest = (uint *)__kmalloc((ulong)length,0x6080c0);
  if (__dest != (uint *)0x0) {
    memcpy(__dest,pbuf + 4,(ulong)length);
  }
  return __dest;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int parse_wf_gray16(void)

{
  byte bVar1;
  int iVar2;
  uint *in_x0;
  char *pcVar3;
  uint *puVar4;
  uint **in_x1;
  long lVar5;
  int in_w2;
  uint in_w3;
  
  if (in_w3 == 3) {
    pcVar3 = global_waveform->gl16_temp_list;
    puVar4 = global_waveform->gl16_list;
  }
  else if (in_w3 < 4) {
    if (in_w3 == 1) {
      pcVar3 = global_waveform->du_temp_list;
      puVar4 = global_waveform->du_list;
    }
    else {
      pcVar3 = global_waveform->reset_temp_list;
      puVar4 = global_waveform->reset_list;
      if (1 < in_w3) {
        pcVar3 = global_waveform->gc16_temp_list;
        puVar4 = global_waveform->gc16_list;
      }
    }
  }
  else if (in_w3 == 5) {
    pcVar3 = global_waveform->gld16_temp_list;
    puVar4 = global_waveform->gld16_list;
  }
  else if (in_w3 < 5) {
    pcVar3 = global_waveform->glr16_temp_list;
    puVar4 = global_waveform->glr16_list;
  }
  else {
    pcVar3 = global_waveform->a2_temp_list;
    puVar4 = global_waveform->a2_list;
    if (in_w3 != 6) {
      pcVar3 = (char *)0x0;
      goto LAB_00106514;
    }
  }
  if (in_w2 < 0) {
    in_w2 = 0;
  }
  lVar5 = 0;
  if (0x32 < in_w2) {
    in_w2 = 0x32;
  }
  do {
    if (in_w2 < (int)(uint)(byte)pcVar3[lVar5]) {
      lVar5 = lVar5 << 2;
      goto LAB_0010650c;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x32);
  lVar5 = 0;
LAB_0010650c:
  pcVar3 = global_waveform->format + ((ulong)*(uint *)((long)puVar4 + lVar5) - 4);
LAB_00106514:
  bVar1 = *pcVar3;
  *in_x0 = (uint)bVar1;
  puVar4 = decode_wf_data((uchar *)pcVar3,(uint)bVar1 << 6);
  *in_x1 = puVar4;
  iVar2 = -0x16;
  if (puVar4 != (uint *)0x0) {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_00106584(rkf_waveform *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  
  uVar11 = 0xfffffff0;
  if (global_waveform == (rkf_waveform *)0x0) {
    iVar6 = strncmp(param_1->format,"rkf waveform",0xc);
    if (iVar6 == 0) {
      uVar3 = param_1->length;
      if ((int)uVar3 < 0x40001) {
        uVar4 = *(uint *)(param_1->format + (long)(int)uVar3 + -4);
        memset(crc32_table,0,0x400);
        lVar10 = 0;
        do {
          uVar8 = (int)lVar10 << 0x16;
          uVar9 = 8;
          uVar7 = 0;
          do {
            uVar2 = uVar8 ^ uVar7;
            uVar1 = uVar7 << 1;
            uVar7 = uVar7 << 1;
            if ((int)uVar2 < 0) {
              uVar7 = uVar1 ^ 0x4c10db7;
            }
            uVar8 = uVar8 << 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          *(uint *)((long)crc32_table + lVar10) = uVar7;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x400);
        if (uVar3 != 0) {
          lVar10 = 0;
          do {
            lVar5 = lVar10 + -4;
            lVar10 = lVar10 + 1;
            uVar9 = crc32_table[(uint)(byte)param_1->format[lVar5] ^ uVar9 >> 0x18] ^ uVar9 << 8;
          } while ((uint)lVar10 < uVar3);
        }
        if (uVar4 == uVar9) {
          printk("rkf file version: %s\n",param_1->version);
          global_waveform = param_1;
          return 0;
        }
        printk("[EINK]: waveform crc err readcrc = %x crccheck = %x\n",uVar4);
      }
      printk("rkf: failed to check crc RKF waveform\n");
      return 0xffffffff;
    }
    printk("rkf: check format failed\n");
    uVar11 = 0xffffffff;
    printk("rkf: failed to check RKF file format\n");
  }
  return uVar11;
}



int rkf_wf_input(void *waveform_file)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  iVar6 = -0x10;
  if (global_waveform == (rkf_waveform *)0x0) {
    iVar6 = strncmp((char *)((long)waveform_file + 4),"rkf waveform",0xc);
    if (iVar6 == 0) {
                    // WARNING: Load size is inaccurate
      uVar4 = *waveform_file;
      if ((int)uVar4 < 0x40001) {
        uVar5 = *(uint *)((long)waveform_file + (long)(int)uVar4);
        memset(crc32_table,0,0x400);
        lVar10 = 0;
        do {
          uVar8 = (int)lVar10 << 0x16;
          uVar9 = 8;
          uVar7 = 0;
          do {
            uVar3 = uVar8 ^ uVar7;
            uVar1 = uVar7 << 1;
            uVar7 = uVar7 << 1;
            if ((int)uVar3 < 0) {
              uVar7 = uVar1 ^ 0x4c10db7;
            }
            uVar8 = uVar8 << 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          *(uint *)((long)crc32_table + lVar10) = uVar7;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x400);
        if (uVar4 != 0) {
          lVar10 = 0;
          do {
            pbVar2 = (byte *)((long)waveform_file + lVar10);
            lVar10 = lVar10 + 1;
            uVar9 = crc32_table[(uint)*pbVar2 ^ uVar9 >> 0x18] ^ uVar9 << 8;
          } while ((uint)lVar10 < uVar4);
        }
        if (uVar5 == uVar9) {
          printk("rkf file version: %s\n",(long)waveform_file + 0x14);
          global_waveform = (rkf_waveform *)waveform_file;
          return 0;
        }
        printk("[EINK]: waveform crc err readcrc = %x crccheck = %x\n",uVar5);
      }
      printk("rkf: failed to check crc RKF waveform\n");
      return -1;
    }
    printk("rkf: check format failed\n");
    iVar6 = -1;
    printk("rkf: failed to check RKF file format\n");
  }
  return iVar6;
}



char * rkf_wf_get_version(void)

{
  char *pcVar1;
  
  pcVar1 = global_waveform->full_version;
  if (global_waveform == (rkf_waveform *)0x0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// WARNING: Type propagation algorithm not settling

int rkf_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  if (global_waveform == (rkf_waveform *)0x0) {
    return -0x13;
  }
  if (output == (epd_lut_data *)0x0) {
    return -0x16;
  }
  if ((temperture / 5 == rkf_wf_get_lut::sftemp / 5) && (rkf_wf_get_lut::stype == lut_type)) {
    return 0;
  }
  rkf_wf_get_lut::sftemp = temperture;
  rkf_wf_get_lut::stype = lut_type;
  if (output->data != (uint *)0x0) {
    kfree();
    output->data = (uint *)0x0;
  }
  if (lut_type == WF_TYPE_GRAY16) goto LAB_00106b88;
  if (lut_type == WF_TYPE_GCC16) {
LAB_00106b68:
    iVar7 = parse_wf_gray16();
    goto joined_r0x00106b7c;
  }
  if (lut_type == WF_TYPE_A2) {
    lVar8 = 0;
    iVar7 = rkf_wf_get_lut::sftemp;
    if (rkf_wf_get_lut::sftemp < 0) {
      iVar7 = 0;
    }
    if (0x32 < iVar7) {
      iVar7 = 0x32;
    }
    do {
      if (iVar7 < (int)(uint)(byte)global_waveform->a2_temp_list[lVar8]) {
        lVar8 = lVar8 << 2;
        goto LAB_00106bf8;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x32);
    lVar8 = 0;
LAB_00106bf8:
    uVar14 = (ulong)*(uint *)((long)global_waveform->a2_list + lVar8);
    pcVar6 = global_waveform->format;
    bVar3 = global_waveform->format[uVar14 - 4];
    output->frame_num = (uint)bVar3;
    puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
    output->data = puVar9;
    if (puVar9 == (uint *)0x0) {
      return -1;
    }
  }
  else {
    if (lut_type < WF_TYPE_GC16) {
      if (lut_type != WF_TYPE_GRAY4) {
        if (lut_type < WF_TYPE_GRAY2) {
          if (lut_type != WF_TYPE_RESET) {
            return -1;
          }
          lVar8 = 0;
          iVar7 = rkf_wf_get_lut::sftemp;
          if (rkf_wf_get_lut::sftemp < 0) {
            iVar7 = 0;
          }
          if (0x32 < iVar7) {
            iVar7 = 0x32;
          }
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->reset_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106ab4;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106ab4:
          uVar14 = (ulong)*(uint *)((long)global_waveform->reset_list + lVar8);
          bVar3 = global_waveform->format[uVar14 - 4];
          uVar18 = bVar3 + 0xf >> 4;
          puVar9 = decode_wf_data((uchar *)(global_waveform->format + (uVar14 - 4)),uVar18 << 2);
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          output->frame_num = (uint)bVar3;
          puVar10 = (uint *)__kmalloc(uVar18 << 10,0x6080c0);
          if (puVar10 == (uint *)0x0) {
            output->data = (uint *)0x0;
            kfree(puVar9);
            return -1;
          }
          if (uVar18 != 0) {
            lVar8 = 0;
            do {
              uVar2 = puVar9[lVar8];
              iVar7 = (int)lVar8 << 8;
              uVar11 = 0;
              do {
                uVar1 = (int)uVar2 >> (uVar11 & 0x1f) & 3;
                uVar13 = 0;
                uVar16 = uVar1;
                do {
                  uVar4 = uVar13 & 0x1f;
                  uVar13 = uVar13 + 2;
                  uVar16 = uVar16 | uVar1 << (ulong)uVar4;
                } while (uVar13 != 0x20);
                iVar17 = iVar7 + 0x10;
                do {
                  puVar10[iVar7] = uVar16;
                  iVar7 = iVar7 + 1;
                } while (iVar7 != iVar17);
                uVar11 = uVar11 + 2;
              } while (uVar11 != 0x20);
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar18);
          }
          output->data = puVar10;
        }
        else {
          if (lut_type == WF_TYPE_GRAY2) {
            lVar8 = 0;
            iVar7 = rkf_wf_get_lut::sftemp;
            if (rkf_wf_get_lut::sftemp < 0) {
              iVar7 = 0;
            }
            if (0x32 < iVar7) {
              iVar7 = 0x32;
            }
            do {
              if (iVar7 < (int)(uint)(byte)global_waveform->du_temp_list[lVar8]) {
                lVar8 = lVar8 << 2;
                goto LAB_00106a44;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0x32);
            lVar8 = 0;
LAB_00106a44:
            uVar14 = (ulong)*(uint *)((long)global_waveform->du_list + lVar8);
            uVar18 = (uint)(byte)global_waveform->format[uVar14 - 4];
            puVar9 = decode_wf_data((uchar *)(global_waveform->format + (uVar14 - 4)),
                                    (uint)(byte)global_waveform->format[uVar14 - 4] << 6);
            output->data = puVar9;
            if (puVar9 == (uint *)0x0) {
              return -1;
            }
            output->frame_num = uVar18;
            goto LAB_001068dc;
          }
          if (lut_type != WF_TYPE_AUTO) {
            return -1;
          }
          lVar8 = 0;
          iVar7 = rkf_wf_get_lut::sftemp;
          if (rkf_wf_get_lut::sftemp < 0) {
            iVar7 = 0;
          }
          if (0x32 < iVar7) {
            iVar7 = 0x32;
          }
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->gc16_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106804;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106804:
          uVar14 = (ulong)*(uint *)((long)global_waveform->gc16_list + lVar8);
          pcVar6 = global_waveform->format;
          bVar3 = global_waveform->format[uVar14 - 4];
          output->frame_num = (uint)bVar3;
          puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
          output->data = puVar9;
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          lVar8 = 0;
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->du_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106850;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106850:
          uVar14 = (ulong)*(uint *)((long)global_waveform->du_list + lVar8);
          pcVar6 = global_waveform->format;
          bVar3 = global_waveform->format[uVar14 - 4];
          output->frame_num = output->frame_num | (uint)bVar3 << 8;
          puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          if ((uint)*(byte *)&output->frame_num < (uint)bVar3) {
            printk("%s: frame_num err, du frame = %d, gc16 frame = %d\n","decode_wf_auto",bVar3);
          }
          else {
            uVar18 = 0;
            puVar15 = output->data;
            puVar10 = puVar9;
            if (bVar3 != 0) {
              do {
                lVar8 = 0;
                do {
                  *(uint *)((long)puVar15 + lVar8) =
                       *(uint *)((long)puVar10 + lVar8) & 0xc0000003 |
                       *(uint *)((long)puVar15 + lVar8) & 0x3ffffffc;
                  lVar8 = lVar8 + 4;
                } while (lVar8 != 0x40);
                uVar18 = uVar18 + 1;
                puVar10 = puVar10 + 0x10;
                puVar15 = puVar15 + 0x10;
              } while (uVar18 != bVar3);
            }
          }
        }
        kfree(puVar9);
        uVar18 = output->frame_num;
        goto LAB_001068dc;
      }
LAB_00106b88:
      iVar7 = parse_wf_gray16();
    }
    else if (lut_type == WF_TYPE_GL16) {
      iVar7 = parse_wf_gray16();
    }
    else {
      if (lut_type < WF_TYPE_GL16) goto LAB_00106b88;
      if (lut_type == WF_TYPE_GLR16) goto LAB_00106b68;
      if (lut_type != WF_TYPE_GLD16) {
        return -1;
      }
      iVar7 = parse_wf_gray16();
    }
joined_r0x00106b7c:
    if (iVar7 != 0) {
      return -1;
    }
  }
  uVar18 = output->frame_num;
LAB_001068dc:
  if ((uVar18 & 0xff) != 0) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      puVar9 = output->data;
      uVar14 = 0;
      iVar17 = iVar7;
      do {
        uVar12 = 0;
        do {
          uVar5 = uVar12 >> 3;
          uVar11 = (uint)uVar12;
          uVar12 = (ulong)(uVar11 + 1);
          output->wf_table[iVar17 + uVar11] =
               (byte)((*(uint *)((long)puVar9 + (uVar14 >> 4) * 4 + lVar8) >>
                       (ulong)((uint)uVar5 & 0x1e) & 3) << 2) |
               (byte)(*(uint *)((long)puVar9 + (uVar14 & 0xf) * 4 + lVar8) >>
                     (ulong)((uVar11 & 0xf) << 1)) & 3;
        } while (uVar11 + 1 != 0x100);
        uVar11 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar11;
        iVar17 = iVar17 + 0x100;
      } while (uVar11 != 0x100);
      iVar7 = iVar7 + 0x10000;
      lVar8 = lVar8 + 0x40;
    } while ((uVar18 & 0xff) << 0x10 != iVar7);
  }
  return 0;
}



int ebc_buf_release(ebc_buf_s *release_buf)

{
  _mcount();
  if (release_buf != (ebc_buf_s *)0x0) {
    if (release_buf->status == buf_osd) {
      kfree(release_buf);
    }
    else {
      release_buf->status = buf_idle;
      if (ebc_buf_info.use_buf_is_empty == 1) {
        ebc_buf_info.use_buf_is_empty = 0;
        __wake_up_sync(&ebc_buf_wq,1);
      }
    }
  }
  return 0;
}



int ebc_remove_from_dsp_buf_list(ebc_buf_s *remove_buf)

{
  int pos;
  
  _mcount();
  mutex_lock(0x10d2f8);
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    pos = buf_list_get_pos(ebc_buf_info.dsp_buf_list,(int *)remove_buf);
    buf_list_remove(ebc_buf_info.dsp_buf_list,pos);
  }
  mutex_unlock(0x10d2f8);
  return 0;
}



int ebc_add_to_dsp_buf_list(ebc_buf_s *dsp_buf)

{
  panel_refresh_mode pVar1;
  bool bVar2;
  int iVar3;
  ebc_buf_s *release_buf;
  
  _mcount();
  mutex_lock(0x10d2f8);
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    if ((((dsp_buf->needpic != 0x20) && (dsp_buf->buf_mode != EPD_OVERLAY)) &&
        ((iVar3 = (ebc_buf_info.dsp_buf_list)->nb_elt, 5 < dsp_buf->buf_mode + ~EPD_DU4 ||
         ((ebc_buf_info.dsp_buf_list)->maxelements <= iVar3)))) && (1 < iVar3)) {
      bVar2 = false;
LAB_00106e28:
      iVar3 = iVar3 + -1;
      if (iVar3 != 0) {
        release_buf = (ebc_buf_s *)buf_list_get(ebc_buf_info.dsp_buf_list,iVar3);
        pVar1 = release_buf->buf_mode;
        if ((pVar1 != EPD_OVERLAY) && (release_buf->needpic != 0x20)) {
          if ((EPD_AUTO_DU4 < pVar1) || ((0xc0fffdU >> ((ulong)pVar1 & 0x3f) & 1) == 0)) {
            if (!bVar2) {
              bVar2 = true;
              goto LAB_00106e28;
            }
            if (pVar1 + ~EPD_RESET < 3) goto LAB_00106e28;
          }
          buf_list_remove(ebc_buf_info.dsp_buf_list,iVar3);
          ebc_buf_release(release_buf);
        }
        goto LAB_00106e28;
      }
    }
    iVar3 = buf_list_add(ebc_buf_info.dsp_buf_list,(int *)dsp_buf,-1);
    if (iVar3 == -1) {
      ebc_buf_release(dsp_buf);
      mutex_unlock(0x10d2f8);
      return -1;
    }
    if (dsp_buf->status != buf_osd) {
      dsp_buf->status = buf_dsp;
    }
  }
  mutex_unlock(0x10d2f8);
  return 0;
}



int ebc_get_dsp_list_enum_num(void)

{
  _mcount();
  return (ebc_buf_info.dsp_buf_list)->nb_elt;
}



ebc_buf_s * ebc_find_buf_by_phy_addr(ulong phy_addr)

{
  int iVar1;
  ebc_buf_s *peVar2;
  int pos;
  
  _mcount();
  if (ebc_buf_info.buf_list == (buf_list_s *)0x0) {
LAB_00106ee8:
    peVar2 = (ebc_buf_s *)0x0;
  }
  else {
    pos = 0;
    do {
      if ((ebc_buf_info.buf_list)->nb_elt <= pos) goto LAB_00106ee8;
      iVar1 = pos + 1;
      peVar2 = (ebc_buf_s *)buf_list_get(ebc_buf_info.buf_list,pos);
      pos = iVar1;
    } while ((peVar2 == (ebc_buf_s *)0x0) || (peVar2->phy_addr != phy_addr));
  }
  return peVar2;
}



ebc_buf_s * ebc_dsp_buf_get(void)

{
  ebc_buf_s *peVar1;
  
  _mcount();
  mutex_lock(0x10d2f8);
  peVar1 = (ebc_buf_s *)ebc_buf_info.dsp_buf_list;
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    if ((ebc_buf_info.dsp_buf_list)->nb_elt < 1) {
      peVar1 = (ebc_buf_s *)0x0;
    }
    else {
      peVar1 = (ebc_buf_s *)buf_list_get(ebc_buf_info.dsp_buf_list,0);
    }
  }
  mutex_unlock(0x10d2f8);
  return peVar1;
}



ebc_buf_s * ebc_osd_buf_get(void)

{
  _mcount();
  return ebc_buf_info.osd_buf;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ebc_buf_s * ebc_osd_buf_clone(void)

{
  ebc_buf_s *peVar1;
  ebc_buf_s *peVar2;
  
  _mcount();
  peVar2 = (ebc_buf_s *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
  peVar1 = ebc_buf_info.osd_buf;
  if (peVar2 != (ebc_buf_s *)0x0) {
    peVar2->virt_addr = (ebc_buf_info.osd_buf)->virt_addr;
    peVar2->phy_addr = peVar1->phy_addr;
    peVar2->status = buf_osd;
  }
  return peVar2;
}



ebc_buf_s * ebc_empty_buf_get(char *tid_name)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int pos;
  ebc_buf_s *peVar4;
  wait_queue_entry __wq_entry;
  
  _mcount();
  lVar1 = __stack_chk_guard;
  peVar4 = (ebc_buf_s *)0x0;
  mutex_lock(0x10d330,0);
__out:
  do {
    do {
      if (ebc_buf_info.buf_list == (buf_list_s *)0x0) {
OUT:
        mutex_unlock(0x10d330);
        if (lVar1 - __stack_chk_guard == 0) {
          return peVar4;
        }
                    // WARNING: Subroutine does not return
        __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
      }
      pos = 0;
      while (pos < (ebc_buf_info.buf_list)->nb_elt) {
        iVar2 = pos + 1;
        peVar4 = (ebc_buf_s *)buf_list_get(ebc_buf_info.buf_list,pos);
        pos = iVar2;
        if (peVar4 != (ebc_buf_s *)0x0) {
          if (peVar4->status == buf_idle) {
            peVar4->status = buf_user;
            *(undefined8 *)peVar4->tid_name = *(undefined8 *)tid_name;
            *(undefined8 *)(peVar4->tid_name + 7) = *(undefined8 *)(tid_name + 7);
            goto OUT;
          }
          if ((peVar4->status == buf_user) &&
             (iVar2 = strncmp(peVar4->tid_name,tid_name,0xf), iVar2 == 0)) {
            printk("[%s]: one tid only can get one buf at one time\n",tid_name);
            goto OUT;
          }
        }
      }
      ebc_buf_info.use_buf_is_empty = 1;
      _cond_resched();
    } while (ebc_buf_info.use_buf_is_empty != 1);
    init_wait_entry(&__wq_entry,0);
    while (lVar3 = prepare_to_wait_event(&ebc_buf_wq,&__wq_entry,1),
          ebc_buf_info.use_buf_is_empty == 1) {
      if (lVar3 != 0) goto __out;
      schedule();
    }
    finish_wait(&ebc_buf_wq,&__wq_entry);
  } while( true );
}



ulong ebc_phy_buf_base_get(void)

{
  _mcount();
  return ebc_buf_info.phy_mem_base;
}



char * ebc_virt_buf_base_get(void)

{
  _mcount();
  return ebc_buf_info.virt_mem_base;
}



int ebc_buf_state_show(char *buf)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint pos;
  
  _mcount();
  iVar1 = sprintf(buf,"dsp_buf num = %d\n",(ulong)(uint)(ebc_buf_info.dsp_buf_list)->nb_elt);
  if (ebc_buf_info.buf_list != (buf_list_s *)0x0) {
    for (pos = 0; (int)pos < (ebc_buf_info.buf_list)->nb_elt; pos = pos + 1) {
      puVar3 = (uint *)buf_list_get(ebc_buf_info.buf_list,pos);
      iVar2 = sprintf(buf + iVar1,"ebc_buf[%d]: s = %d, m = %d, tid = %s\n",(ulong)pos,
                      (ulong)*puVar3,(ulong)puVar3[10],puVar3 + 6);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}



int ebc_buf_uninit(void)

{
  int *piVar1;
  int pos;
  
  _mcount();
  ebc_buf_info.buf_total_num = 0;
  if (ebc_buf_info.buf_list != (buf_list_s *)0x0) {
    pos = (ebc_buf_info.buf_list)->nb_elt;
    while (pos = pos + -1, -1 < pos) {
      piVar1 = buf_list_get(ebc_buf_info.buf_list,pos);
      if (piVar1 != (int *)0x0) {
        kfree();
      }
      buf_list_remove(ebc_buf_info.buf_list,pos);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int ebc_buf_init(ulong phy_start,char *mem_start,int men_len,int dest_buf_len,int max_buf_num)

{
  buf_list_s *li;
  int iVar1;
  int iVar2;
  int *el;
  ebc_buf_s *peVar3;
  
  _mcount();
  if ((-1 < max_buf_num) && (mem_start != (char *)0x0)) {
    __mutex_init(0x10d2f8,"&ebc_buf_info.dsp_buf_lock",&vcom);
    __mutex_init(0x10d330,"&ebc_buf_info.ebc_buf_lock",&vcom);
    iVar1 = buf_list_init(&ebc_buf_info.buf_list,100);
    if (iVar1 == 0) {
      iVar1 = buf_list_init(&ebc_buf_info.dsp_buf_list,100);
      if (iVar1 == 0) {
        ebc_buf_info.buf_total_num = 0;
        ebc_buf_info.phy_mem_base = phy_start;
        ebc_buf_info.virt_mem_base = mem_start;
        iVar1 = dest_buf_len;
        do {
          if (men_len < iVar1) break;
          el = (int *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
          li = ebc_buf_info.buf_list;
          if (el == (int *)0x0) goto LAB_00107484;
          *el = 0;
          *(ulong *)(el + 2) = phy_start;
          *(char **)(el + 4) = mem_start;
          el[0xb] = dest_buf_len;
          iVar2 = buf_list_add(li,el,-1);
          if (iVar2 == -1) goto LAB_00107484;
          ebc_buf_info.use_buf_is_empty = 0;
          mem_start = mem_start + dest_buf_len;
          phy_start = phy_start + (long)dest_buf_len;
          iVar1 = iVar1 + dest_buf_len;
        } while ((ebc_buf_info.buf_list)->nb_elt != max_buf_num);
        ebc_buf_info.buf_total_num = (ebc_buf_info.buf_list)->nb_elt;
        if (men_len < iVar1) {
          return 0;
        }
        peVar3 = (ebc_buf_s *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
        if (peVar3 != (ebc_buf_s *)0x0) {
          peVar3->status = buf_osd;
          peVar3->phy_addr = phy_start;
          peVar3->virt_addr = mem_start;
          peVar3->len = dest_buf_len;
          ebc_buf_info.osd_buf = peVar3;
          return 0;
        }
LAB_00107484:
        ebc_buf_uninit();
        buf_list_uninit(ebc_buf_info.dsp_buf_list);
      }
      buf_list_uninit(ebc_buf_info.buf_list);
    }
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int buf_list_init(buf_list_t **li,int maxelements)

{
  buf_list_t *pbVar1;
  int **ppiVar2;
  ulong __n;
  
  _mcount();
  pbVar1 = (buf_list_t *)kmem_cache_alloc_trace(_DAT_0010e350,0x6000c0,0x18);
  *li = pbVar1;
  if (pbVar1 != (buf_list_t *)0x0) {
    pbVar1->nb_elt = 0;
    pbVar1->array_elements = (int **)0x0;
    pbVar1->maxelements = maxelements;
    __n = -(ulong)((uint)maxelements >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)maxelements << 3;
    ppiVar2 = (int **)__kmalloc(__n,0x6000c0);
    pbVar1->array_elements = ppiVar2;
    ppiVar2 = (*li)->array_elements;
    if (ppiVar2 != (int **)0x0) {
      memset(ppiVar2,0,__n);
      return 0;
    }
    kfree(*li);
  }
  return -0xc;
}



int buf_list_uninit(buf_list_t *li)

{
  _mcount();
  if (li != (buf_list_t *)0x0) {
    if (li->array_elements != (int **)0x0) {
      memset(li->array_elements,0,(long)li->maxelements << 3);
      kfree(li->array_elements);
      li->array_elements = (int **)0x0;
    }
    kfree(li);
  }
  return 0;
}



int buf_list_eol(buf_list_t *li,int i)

{
  uint uVar1;
  
  _mcount();
  if (((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (i < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(li->nb_elt <= i);
  }
  return uVar1;
}



int * buf_list_get(buf_list_t *li,int pos)

{
  _mcount();
  if (li != (buf_list_t *)0x0) {
    if (li->array_elements == (int **)0x0) {
      return (int *)0x0;
    }
    if ((-1 < pos) && (pos < li->nb_elt)) {
      return li->array_elements[pos];
    }
  }
  return (int *)0x0;
}



int buf_list_remove(buf_list_t *li,int pos)

{
  int iVar1;
  
  _mcount();
  if ((((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (pos < 0)) ||
     (li->nb_elt <= pos)) {
    iVar1 = -1;
  }
  else {
    while( true ) {
      iVar1 = li->nb_elt + -1;
      if (iVar1 <= pos) break;
      li->array_elements[pos] = li->array_elements[pos + 1];
      pos = pos + 1;
    }
    li->nb_elt = iVar1;
  }
  return iVar1;
}



int buf_list_add(buf_list_t *li,int *el,int pos)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _mcount();
  if ((li != (buf_list_t *)0x0) && (li->array_elements != (int **)0x0)) {
    uVar3 = li->nb_elt;
    if ((-1 < pos) && (pos < (int)uVar3)) {
      uVar6 = (ulong)(uVar3 - 1);
      uVar4 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      uVar5 = -(ulong)(uVar3 - 1 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
      for (; uVar3 = pos, pos <= (int)uVar6; uVar6 = (ulong)((int)uVar6 - 1)) {
        puVar1 = (undefined8 *)((long)li->array_elements + uVar5);
        uVar5 = uVar5 - 8;
        *(undefined8 *)((long)li->array_elements + uVar4) = *puVar1;
        uVar4 = uVar4 - 8;
      }
    }
    if ((int)uVar3 < li->maxelements) {
      li->array_elements[(int)uVar3] = el;
      iVar2 = li->nb_elt + 1;
      li->nb_elt = iVar2;
      return iVar2;
    }
  }
  return -1;
}



int * buf_list_find(buf_list_t *list,int *node,anon_subr_int_int_ptr_int_ptr *cmp_func)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  _mcount();
  if ((list != (buf_list_t *)0x0) && (list->array_elements != (int **)0x0)) {
    for (iVar2 = 0; iVar2 < list->nb_elt; iVar2 = iVar2 + 1) {
      piVar3 = list->array_elements[iVar2];
      iVar1 = (*cmp_func)(node,piVar3);
      if (iVar1 == 0) {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}



int buf_list_get_pos(buf_list_t *list,int *node)

{
  long lVar1;
  
  _mcount();
  if (((list != (buf_list_t *)0x0) && (list->array_elements != (int **)0x0)) && (0 < list->nb_elt))
  {
    lVar1 = 0;
    do {
      if (list->array_elements[lVar1] == node) {
        return (int)lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < list->nb_elt);
  }
  return -1;
}



int buf_list_set(buf_list_t *li,int *el,int pos)

{
  int iVar1;
  
  _mcount();
  if ((((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (pos < 0)) ||
     (li->nb_elt <= pos)) {
    iVar1 = -1;
  }
  else {
    li->array_elements[pos] = el;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

int ebc_pmic_set_vcom(ebc_pmic_conflict *pmic,int value)

{
  long lVar1;
  int iVar2;
  char data [64];
  
  _mcount();
  lVar1 = __stack_chk_guard;
  data._0_8_ = 0;
  data._8_8_ = 0;
  data._16_8_ = 0;
  data._24_8_ = 0;
  data._32_8_ = 0;
  data._40_8_ = 0;
  data._48_8_ = 0;
  data._56_8_ = 0;
  if (value - 1U < 0x13f6) {
    _dev_info(pmic->dev,"set chip vcom to: %dmV\n",value);
    (*pmic->pmic_set_vcom)(pmic,value);
    data._0_8_ = 0;
    data._8_8_ = 0;
    data._16_8_ = 0;
    data._24_8_ = 0;
    data._32_8_ = 0;
    data._40_8_ = 0;
    data._48_8_ = 0;
    data._56_8_ = 0;
    sprintf(data,"%d",(ulong)(uint)value);
    _dev_info(pmic->dev,"store vcom %d to vendor storage\n",value);
    iVar2 = rk_vendor_write(0x11,data,0x40);
    if (iVar2 < 0) {
      _dev_err(pmic->dev,"%s failed to write vendor storage\n","ebc_pmic_set_vcom");
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -1;
    _dev_err(pmic->dev,"vcom value should be %d~%d\n",0,0x13f6);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar2;
}



void ebc_pmic_verity_vcom(ebc_pmic_conflict *pmic)

{
  int iVar1;
  int iVar2;
  
  _mcount();
  iVar2 = vcom;
  if (vcom - 1U < 0x13f6) {
    iVar1 = (*pmic->pmic_get_vcom)(pmic);
    if (iVar2 != iVar1) {
      _dev_info(pmic->dev,"chip_vcom %d != vendor_vcom %d, set vcom from vendor\n",iVar1,iVar2);
      iVar2 = (*pmic->pmic_set_vcom)(pmic,iVar2);
      if (iVar2 != 0) {
        _dev_err(pmic->dev,"set vcom value failed\n");
      }
    }
  }
  else {
    _dev_err(pmic->dev,"invaild vcom value %d from vendor storage\n",vcom);
  }
  return;
}



int tps65185_remove(i2c_client_conflict *client)

{
  _mcount();
  if ((client->dev).links.consumers.next[1].prev[8].next != (list_head *)0x0) {
    destroy_workqueue();
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

int papyrus_hw_getreg(papyrus_sess *sess,uint8_t regaddr,uint8_t *val)

{
  long lVar1;
  int iVar2;
  i2c_client_conflict *piVar3;
  int iVar4;
  uint8_t local_31 [9];
  i2c_msg msgs [2];
  
  local_31[0] = regaddr;
  _mcount();
  lVar1 = __stack_chk_guard;
  piVar3 = sess->client;
  msgs[0].addr = piVar3->addr;
  msgs[0]._2_4_ = 0x10000;
  msgs[0].buf = local_31;
  msgs[1].addr = piVar3->addr;
  msgs[1]._2_4_ = 0x10001;
  msgs[1].buf = val;
  iVar2 = i2c_transfer(piVar3->adapter,msgs,2);
  if (iVar2 < 0) {
    _dev_err(&sess->client->dev,"i2c read error: %d\n",iVar2);
    iVar4 = iVar2;
  }
  else if (iVar2 == 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = -5;
    _dev_err(&sess->client->dev,"i2c read N mismatch: %d\n",iVar2);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar4;
}



int papyrus_hw_read_temperature(ebc_pmic *pmic,int *t)

{
  int iVar1;
  uint8_t local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  iVar1 = papyrus_hw_getreg((papyrus_sess *)pmic->drvpar,'\0',&local_9);
  *t = (int)(char)local_9;
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1,strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



int papyrus_hw_setreg(papyrus_sess *sess,uint8_t regaddr,uint8_t val)

{
  long lVar1;
  int iVar2;
  int iVar3;
  i2c_msg msgs [1];
  uint8_t txbuf [2];
  
  _mcount();
  lVar1 = __stack_chk_guard;
  msgs[0].addr = sess->client->addr;
  msgs[0]._2_4_ = 0x20000;
  msgs[0].buf = txbuf;
  txbuf[0] = regaddr;
  txbuf[1] = val;
  iVar2 = i2c_transfer(sess->client->adapter,msgs,1);
  if (iVar2 < 0) {
    _dev_err(&sess->client->dev,"i2c send error: %d\n",iVar2);
    iVar3 = iVar2;
  }
  else if (iVar2 == 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = -5;
    _dev_err(&sess->client->dev,"i2c send N mismatch: %d\n",iVar2);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar3;
}



int papyrus_hw_vcom_set(ebc_pmic *pmic,int vcom_mv)

{
  byte val;
  uint8_t val_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  papyrus_sess *sess;
  byte local_9;
  long local_8;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  local_8 = __stack_chk_guard;
  local_9 = 0;
  mutex_lock(&sess->power_lock,0);
  gpiod_direction_output(sess->wake_up_pin,1);
  msleep(10);
  val_00 = (uint8_t)(vcom_mv / 10);
  sess->vcom1 = val_00;
  sess->vcom2 = (byte)((uint)(vcom_mv / 10) >> 8) & 1;
  uVar1 = papyrus_hw_setreg(sess,'\x03',val_00);
  uVar2 = papyrus_hw_setreg(sess,'\x04',sess->vcom2);
  val = sess->vcom2 | 0x40;
  sess->vcom2 = val;
  uVar3 = papyrus_hw_setreg(sess,'\x04',val);
  uVar3 = uVar1 | uVar2 | uVar3;
  local_9 = 0;
  do {
    uVar1 = papyrus_hw_getreg(sess,'\a',&local_9);
    uVar3 = uVar3 | uVar1;
    if (uVar3 != 0) {
      _dev_err(&sess->client->dev,"papyrus: I2C error: %d\n",uVar3);
      break;
    }
    msleep(0x32);
  } while ((local_9 & 1) == 0);
  mutex_unlock(&sess->power_lock);
  if (local_8 - __stack_chk_guard == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
}



int papyrus_hw_vcom_get(ebc_pmic *pmic)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  papyrus_sess *sess;
  byte local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  sess = (papyrus_sess *)pmic->drvpar;
  local_9 = 0;
  mutex_lock(&sess->power_lock,0);
  gpiod_direction_output(sess->wake_up_pin,0);
  msleep(10);
  gpiod_direction_output(sess->wake_up_pin,1);
  msleep(10);
  uVar3 = papyrus_hw_getreg(sess,'\x03',&local_9);
  bVar2 = local_9;
  uVar4 = papyrus_hw_getreg(sess,'\x04',&local_9);
  uVar5 = (uint)local_9;
  if ((uVar3 | uVar4) != 0) {
    _dev_err(&sess->client->dev,"papyrus: I2C error: %d\n");
  }
  mutex_unlock(&sess->power_lock);
  iVar1 = ((uVar5 & 1) * 0x100 + (uint)bVar2) * 10;
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1,strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



void papyrus_hw_power_req(ebc_pmic *pmic,bool up)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  gpio_desc *pgVar9;
  papyrus_sess *sess;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  if (up != false) {
    mutex_lock(&sess->power_lock);
  }
  if (papyrus_need_reconfig == false) {
    if (up != false) {
      pgVar9 = sess->pwr_up_pin;
      if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
        gpiod_direction_output(pgVar9,1);
      }
      enable_irq(sess->irq);
      return;
    }
    disable_irq(sess->irq);
    pgVar9 = sess->pwr_up_pin;
    if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
      gpiod_direction_output(pgVar9,0);
    }
  }
  else {
    if (up == false) {
      disable_irq(sess->irq);
      sess->enable_reg_shadow = 'o';
      uVar2 = papyrus_hw_setreg(sess,'\x01','o');
      usleep_range(2000,3000);
      bVar1 = sess->enable_reg_shadow & 0xdf;
      sess->enable_reg_shadow = bVar1;
      uVar3 = papyrus_hw_setreg(sess,'\x01',bVar1);
      if ((uVar2 | uVar3) != 0) {
        _dev_err(&sess->client->dev,"i2c error: %d\n");
      }
    }
    else {
      uVar2 = papyrus_hw_setreg(sess,'\x02',sess->vadj);
      uVar3 = papyrus_hw_setreg(sess,'\t',sess->upseq0);
      uVar4 = papyrus_hw_setreg(sess,'\n',sess->upseq1);
      uVar5 = papyrus_hw_setreg(sess,'\v',sess->dwnseq0);
      uVar6 = papyrus_hw_setreg(sess,'\f',sess->dwnseq1);
      bVar1 = sess->enable_reg_shadow | 0x20;
      sess->enable_reg_shadow = bVar1;
      uVar7 = papyrus_hw_setreg(sess,'\x01',bVar1);
      usleep_range(2000,3000);
      sess->enable_reg_shadow = 0xbf;
      uVar8 = papyrus_hw_setreg(sess,'\x01',0xbf);
      if ((uVar8 | uVar6 | uVar7 | uVar4 | uVar5 | uVar2 | uVar3) != 0) {
        _dev_err(&sess->client->dev,"i2c error: %d\n");
      }
      pgVar9 = sess->pwr_up_pin;
      if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
        gpiod_direction_output(pgVar9,1);
      }
      enable_irq(sess->irq);
    }
    papyrus_need_reconfig = false;
    if (up != false) {
      papyrus_need_reconfig = false;
      return;
    }
  }
  mutex_unlock(&sess->power_lock);
  return;
}



void papyrus_pm_sleep(ebc_pmic *pmic)

{
  ulong uVar1;
  void *pvVar2;
  
  _mcount();
  pvVar2 = pmic->drvpar;
  cancel_delayed_work_sync((long)pvVar2 + 0x88);
  mutex_lock((long)pvVar2 + 0x48);
  gpiod_direction_output(*(undefined8 *)((long)pvVar2 + 0x40),0);
  gpiod_direction_output(*(undefined8 *)((long)pvVar2 + 0x38),0);
  uVar1 = *(ulong *)((long)pvVar2 + 0x28);
  if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
    gpiod_direction_output(uVar1,0);
  }
  papyrus_need_reconfig = true;
  mutex_unlock((long)pvVar2 + 0x48);
  return;
}



void papyrus_tmp_work(work_struct *work)

{
  _mcount();
  papyrus_hw_setreg((papyrus_sess *)&work[-3].entry,'\r',0x80);
  queue_delayed_work_on(8,work[-1].android_kabi_reserved2,work,3000);
  return;
}



void papyrus_pm_resume(ebc_pmic *pmic)

{
  gpio_desc *pgVar1;
  papyrus_sess *sess;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  mutex_lock(&sess->power_lock);
  pgVar1 = sess->pwr_en_pin;
  if ((pgVar1 != (gpio_desc *)0x0) && (pgVar1 < (gpio_desc *)0xfffffffffffff001)) {
    gpiod_direction_output(pgVar1,1);
    usleep_range(2000,3000);
  }
  gpiod_direction_output(sess->wake_up_pin,1);
  gpiod_direction_output(sess->vcom_ctl_pin,1);
  usleep_range(2000,3000);
  mutex_unlock(&sess->power_lock);
  papyrus_hw_setreg(sess,'\r',0x80);
  queue_delayed_work_on(8,sess->tmp_monitor_wq,&sess->tmp_delay_work,3000);
  return;
}



// WARNING: Type propagation algorithm not settling

int tps65185_probe(i2c_client_conflict *client,i2c_device_id *id)

{
  device *pdVar1;
  u32 uVar2;
  int iVar3;
  uint uVar4;
  list_head *plVar5;
  papyrus_sess *sess;
  gpio_desc *pgVar6;
  device *pdVar7;
  undefined8 uVar8;
  workqueue_struct *pwVar9;
  char *pcVar10;
  ulong uVar11;
  byte local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  pdVar1 = &client->dev;
  uVar2 = (*client->adapter->algo->functionality)(client->adapter);
  if ((uVar2 & 1) == 0) {
    pcVar10 = "i2c check functionality failed.";
  }
  else {
    plVar5 = (list_head *)devm_kmalloc(pdVar1,0x50,0x6080c0);
    if (plVar5 == (list_head *)0x0) {
      _dev_err(pdVar1,"%s:%d: kzalloc failed\n","tps65185_probe",0x270);
      iVar3 = -0xc;
      goto LAB_00108370;
    }
    sess = (papyrus_sess *)devm_kmalloc(pdVar1,0x110,0x6080c0);
    if (sess == (papyrus_sess *)0x0) {
      _dev_err(pdVar1,"%s:%d: kzalloc failed\n","papyrus_probe",0x216);
      goto LAB_001083c8;
    }
    sess->client = client;
    __mutex_init((mutex *)(&sess->enable_reg_shadow + 0x38),"&sess->power_lock",&__key_1);
    (&sess->enable_reg_shadow)[1] = '\x03';
    *(undefined2 *)(&sess->enable_reg_shadow + 2) = 0x9c;
    *(undefined4 *)(&sess->enable_reg_shadow + 4) = 0x1e00e1;
    pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"poweren",7);
    *(gpio_desc **)(&sess->enable_reg_shadow + 0x18) = pgVar6;
    if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
      _dev_err(pdVar1,"tsp65185: failed to find poweren pin, no defined\n");
    }
    pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"wakeup",7);
    *(gpio_desc **)(&sess->enable_reg_shadow + 0x28) = pgVar6;
    pdVar7 = pdVar1;
    if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
      pcVar10 = "tsp65185: failed to find wakeup pin\n";
LAB_00108470:
      _dev_err(pdVar7,pcVar10);
    }
    else {
      pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"vcomctl",7);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x30) = pgVar6;
      if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
        pcVar10 = "tsp65185: failed to find vcom_ctl pin\n";
        goto LAB_00108470;
      }
      pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"powerup",7);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x20) = pgVar6;
      if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
        _dev_err(pdVar1,"tsp65185: no pwr_up pin find\n");
      }
      pgVar6 = (gpio_desc *)devm_gpiod_get(pdVar1,&DAT_0010b7de,1);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x10) = pgVar6;
      if (pgVar6 < (gpio_desc *)0xfffffffffffff001) {
        uVar8 = gpiod_to_irq();
        *(int *)(&sess->enable_reg_shadow + 8) = (int)uVar8;
        if ((int)uVar8 < 0) {
          _dev_err(pdVar1,"Unable to get irq number for int pin\n");
          iVar3 = *(int *)(&sess->enable_reg_shadow + 8);
          goto LAB_00108510;
        }
        irq_modify_status(uVar8,0,0x1000);
        iVar3 = devm_request_threaded_irq
                          (pdVar1,*(int *)(&sess->enable_reg_shadow + 8),0,papyrus_irq,0x2008,
                           "tps65185",sess);
        if (iVar3 == 0) {
          pgVar6 = *(gpio_desc **)(&sess->enable_reg_shadow + 0x18);
          if ((pgVar6 != (gpio_desc *)0x0) && (pgVar6 < (gpio_desc *)0xfffffffffffff001)) {
            gpiod_direction_output(pgVar6,1,0);
            usleep_range(2000,3000);
          }
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x28),0);
          msleep(0x6e);
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x28),1);
          pgVar6 = *(gpio_desc **)(&sess->enable_reg_shadow + 0x20);
          if ((pgVar6 != (gpio_desc *)0x0) && (pgVar6 < (gpio_desc *)0xfffffffffffff001)) {
            gpiod_direction_output(pgVar6,0);
          }
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x30),1);
          msleep(0x32);
          uVar4 = papyrus_hw_getreg(sess,'\x10',&local_9);
          uVar11 = (ulong)uVar4;
          if (uVar4 == 0) {
            uVar11 = (ulong)local_9;
          }
          else {
            _dev_err(&sess->client->dev,"i2c error: %d\n",uVar4);
            if ((int)uVar4 < 0) {
              pcVar10 = "get id failed";
              pdVar7 = &sess->client->dev;
              goto LAB_00108470;
            }
          }
          _dev_info(&sess->client->dev,"detected device with ID=%02x (TPS6518%dr%dp%d)\n",uVar11,
                    (uint)uVar11 & 0xf,uVar11 >> 6 & 3,uVar11 >> 4 & 3);
          sess->enable_reg_shadow = '\0';
          iVar3 = papyrus_hw_setreg(sess,'\x01','\0');
          if (iVar3 != 0) goto LAB_001083c8;
          papyrus_hw_setreg(sess,'\r',0x80);
          plVar5[4].next = (list_head *)papyrus_hw_vcom_get;
          plVar5[4].prev = (list_head *)papyrus_hw_vcom_set;
          plVar5[3].next = (list_head *)papyrus_pm_resume;
          plVar5[2].prev = (list_head *)papyrus_pm_sleep;
          plVar5[2].next = (list_head *)papyrus_hw_power_req;
          plVar5[1].prev = (list_head *)sess;
          plVar5[3].prev = (list_head *)papyrus_hw_read_temperature;
          pwVar9 = (workqueue_struct *)
                   __alloc_workqueue_key(&DAT_0010b8a5,0xa000e,1,0,0,"tps-tmp-monitor-wq");
          sess->tmp_monitor_wq = pwVar9;
          (((delayed_work *)(&sess->tmp_monitor_wq + 1))->work).data = (atomic_long_t)0xfffffffe0;
          ((list_head *)(&sess->tmp_monitor_wq + 2))->next =
               (list_head *)(&sess->tmp_monitor_wq + 2);
          ((list_head *)(&sess->tmp_monitor_wq + 2))->prev =
               (list_head *)(&sess->tmp_monitor_wq + 2);
          *(code **)&sess->tmp_delay_work = papyrus_tmp_work;
          init_timer_key((timer_list *)&sess->tmp_delay_work,&delayed_work_timer_fn,0x200000,0,0);
          queue_delayed_work_on
                    (8,sess->tmp_monitor_wq,(delayed_work *)(&sess->tmp_monitor_wq + 1),3000);
          goto LAB_00108744;
        }
        _dev_err(pdVar1,"Failed to enable IRQ, error: %d\n");
      }
      else {
        _dev_err(pdVar1,"tsp65185: failed to find int pin\n");
        iVar3 = *(int *)(&sess->enable_reg_shadow + 0x10);
LAB_00108510:
        if (iVar3 == 0) {
LAB_00108744:
          plVar5->next = (list_head *)pdVar1;
          strcpy((char *)&plVar5->prev,"tps65185");
          (client->dev).links.consumers.next = plVar5;
          _dev_info(pdVar1,"tps65185 probe ok.\n");
          iVar3 = 0;
          goto LAB_00108370;
        }
      }
    }
LAB_001083c8:
    pcVar10 = "tps65185 hw init failed.";
  }
  _dev_err(pdVar1,pcVar10);
  iVar3 = -0x13;
LAB_00108370:
  if (local_8 - __stack_chk_guard == 0) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar3,strcpy,local_8 - __stack_chk_guard,0);
}



irqreturn_t papyrus_irq(int irq,void *dev_id)

{
  long lVar1;
  int iVar2;
  papyrus_hw_state hwst;
  
  _mcount();
  lVar1 = __stack_chk_guard;
  iVar2 = papyrus_hw_getreg((papyrus_sess *)dev_id,'\a',&hwst.int_status1);
  if (iVar2 != 0) {
    _dev_err(*(long *)((long)dev_id + 8) + 0x20,"i2c error: %d\n",iVar2);
  }
  iVar2 = papyrus_hw_getreg((papyrus_sess *)dev_id,'\b',&hwst.int_status2);
  if (iVar2 != 0) {
    _dev_err(*(long *)((long)dev_id + 8) + 0x20,"i2c error: %d\n",iVar2);
  }
  _dev_info(*(long *)((long)dev_id + 8) + 0x20,"%s: (INT1 = %02x, INT2 = %02x)\n","papyrus_irq",
            hwst.int_status1,hwst.int_status2);
  if ((hwst.int_status2 & 0xfa | hwst.int_status1 & 4) != 0) {
    papyrus_hw_setreg((papyrus_sess *)dev_id,'\x01',*(uint8_t *)((long)dev_id + 0x10));
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



bool tcon_is_volatile_reg(device *dev,uint reg)

{
  bool bVar1;
  
  _mcount();
  if (reg < 9) {
    bVar1 = (1 << ((ulong)reg & 0x3f) & 0x111U) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



int ebc_tcon_remove(platform_device_conflict *pdev)

{
  _mcount();
  __pm_runtime_disable(&pdev->dev,1);
  return 0;
}



void tcon_image_addr_set(ebc_tcon *tcon,u32 pre_image_addr,u32 cur_image_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x24,pre_image_addr);
  regmap_write(tcon->regmap_base,0x28,cur_image_addr);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



void tcon_frame_addr_set(ebc_tcon *tcon,u32 frame_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x58,frame_addr);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



int tcon_lut_data_set(ebc_tcon *tcon,uint *lut_data,int frame_count,int lut_32)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  _mcount();
  if ((frame_count < 0x101 || lut_32 != 0) && (frame_count < 0x41 || lut_32 == 0)) {
    lVar4 = 0;
    iVar2 = frame_count << 4;
    if (lut_32 != 0) {
      iVar2 = frame_count << 6;
    }
    while( true ) {
      iVar3 = (int)lVar4;
      if (iVar2 <= iVar3) break;
      puVar1 = lut_data + lVar4;
      lVar4 = lVar4 + 1;
      regmap_write(tcon->regmap_base,iVar3 * 4 + 0x1000,*puVar1);
    }
    regmap_write(tcon->regmap_base,0x50,1);
    iVar2 = 0;
  }
  else {
    _dev_err(tcon->dev,"frame count over flow\n");
    iVar2 = -1;
  }
  return iVar2;
}



void tcon_dsp_mode_set(ebc_tcon *tcon,int update_mode,int display_mode,int three_win_mode,
                      int eink_mode)

{
  _mcount();
  regmap_update_bits_base
            (tcon->regmap_base,8,0x30000000,
             (uint)(display_mode != 0) << 0x1c | (uint)(update_mode != 0) << 0x1d,0,0,0);
  regmap_update_bits_base(tcon->regmap_base,4,0x80,(ulong)(three_win_mode != 0) << 7,0,0,0);
  regmap_update_bits_base(tcon->regmap_base,0,0x2001,(ulong)(eink_mode != 0) << 0xd,0,0,0);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



void tcon_frame_start(ebc_tcon *tcon,int frame_total)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x3c,0xd0);
  regmap_update_bits_base(tcon->regmap_base,0,0x3fd,(frame_total - 1U & 0xff) << 2,0,0,0);
  regmap_write(tcon->regmap_base,0x50,1);
  regmap_update_bits_base(tcon->regmap_base,0,1,1,0,0,0);
  return;
}



void tcon_disable(ebc_tcon *tcon)

{
  clk *pcVar1;
  
  _mcount();
  disable_irq(tcon->irq);
  regmap_update_bits_base(tcon->regmap_base,0,0x80000001,0x80000000,0,0,0);
  __pm_runtime_idle(tcon->dev,4);
  pcVar1 = tcon->dclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  pcVar1 = tcon->hclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  return;
}



int tcon_enable(ebc_tcon *tcon,ebc_panel *panel)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  clk *pcVar5;
  
  _mcount();
  pcVar5 = tcon->hclk;
  iVar3 = clk_prepare(pcVar5);
  if ((iVar3 == 0) && (iVar3 = clk_enable(pcVar5), iVar3 != 0)) {
    clk_unprepare(pcVar5);
  }
  pcVar5 = tcon->dclk;
  iVar3 = clk_prepare(pcVar5);
  if ((iVar3 == 0) && (iVar3 = clk_enable(pcVar5), iVar3 != 0)) {
    clk_unprepare(pcVar5);
  }
  __pm_runtime_resume(tcon->dev,4);
  regmap_write(tcon->regmap_base,0xc,
               (panel->ldl + panel->lel + panel->lsl + panel->lbl & 0xfff) << 0x10 |
               panel->lsl + 2 & 0xff);
  iVar3 = panel->lsl + panel->lbl;
  regmap_write(tcon->regmap_base,0x10,(iVar3 + panel->ldl & 0x7ff) << 0x10 | iVar3 - 1U & 0xff);
  regmap_write(tcon->regmap_base,0x14,
               (panel->fdl + panel->fel + panel->fsl + panel->fbl & 0x7ff) << 0x10 |
               panel->fsl & 0xff);
  uVar1 = panel->fsl + panel->fbl;
  regmap_write(tcon->regmap_base,0x18,(uVar1 + panel->fdl & 0x7ff) << 0x10 | uVar1 & 0xff);
  regmap_write(tcon->regmap_base,0x1c,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x2c,(uint)*(ushort *)&panel->vir_width | panel->vir_height << 0x10
              );
  regmap_write(tcon->regmap_base,0x30,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x34,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x38,
               (panel->fsl + panel->fbl & 0x7ff) << 0x10 | panel->lsl + panel->lbl & 0xfff);
  regmap_write(tcon->regmap_base,0x20,0xf841fc0);
  uVar1 = panel->lsl + panel->gdck_sta;
  uVar2 = panel->panel_16bit;
  if (uVar2 != 0) {
    uVar2 = 0x40;
  }
  regmap_write(tcon->regmap_base,4,
               (uVar1 & 0xff) << 8 | uVar2 | (uVar1 + panel->lgonl & 0x7ff) << 0x10 | 0x80000003);
  regmap_write(tcon->regmap_base,0,(panel->ldl & 0x3ff) << 0x10 | 0x1000);
  uVar4 = 0x88000000;
  if (panel->panel_16bit == 0) {
    uVar4 = 0xc8000000;
  }
  regmap_write(tcon->regmap_base,8,uVar4);
  regmap_write(tcon->regmap_base,0x50,1);
  enable_irq(tcon->irq);
  return 0;
}



// WARNING: Type propagation algorithm not settling

int ebc_tcon_probe(platform_device_conflict *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  undefined8 *puVar3;
  list_head *plVar4;
  list_head *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  
  _mcount();
  pdVar1 = &pdev->dev;
  plVar2 = (list_head *)devm_kmalloc(pdVar1,0x70,0x6080c0);
  if (plVar2 == (list_head *)0x0) {
    plVar4 = (list_head *)0xfffffff4;
  }
  else {
    puVar3 = (undefined8 *)platform_get_resource(pdev,0x200,0);
    plVar4 = (list_head *)devm_ioremap_resource(pdVar1,puVar3);
    plVar2->prev = plVar4;
    if (plVar4 < (list_head *)0xfffffffffffff001) {
      *(int *)&plVar2[1].next = ((int)puVar3[1] + 1) - (int)*puVar3;
      ebc_regmap_config.max_register = ((int)puVar3[1] - (int)*puVar3) - 3;
      ebc_regmap_config.name = "rockchip,ebc_tcon";
      plVar4 = (list_head *)__devm_regmap_init_mmio_clk(pdVar1,0,plVar4,&ebc_regmap_config,0,0);
      plVar2[2].prev = plVar4;
      if (plVar4 < (list_head *)0xfffffffffffff001) {
        plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b91e);
        plVar2[1].prev = plVar5;
        if (plVar5 < (list_head *)0xfffffffffffff001) {
          plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b941,plVar5);
          plVar2[2].next = plVar5;
          if (plVar5 < (list_head *)0xfffffffffffff001) {
            uVar6 = platform_get_irq(pdev,0,plVar5);
            *(int *)((long)&plVar2[1].next + 4) = (int)uVar6;
            if ((int)uVar6 < 0) {
              _dev_err(pdVar1,"No IRQ resource!\n");
              plVar4 = (list_head *)(ulong)*(uint *)((long)&plVar2[1].next + 4);
              goto LAB_00108f7c;
            }
            irq_modify_status(uVar6,0,0x1000);
            pcVar8 = (pdev->dev).init_name;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (pdev->dev).kobj.name;
            }
            uVar7 = devm_request_threaded_irq
                              (pdVar1,*(undefined4 *)((long)&plVar2[1].next + 4),tcon_irq_hanlder,0,
                               0,pcVar8,plVar2);
            plVar4 = (list_head *)(uVar7 & 0xffffffff);
            if (-1 < (int)uVar7) {
              plVar2[3].next = (list_head *)tcon_enable;
              plVar2[3].prev = (list_head *)tcon_disable;
              plVar2[4].next = (list_head *)tcon_dsp_mode_set;
              plVar2[4].prev = (list_head *)tcon_image_addr_set;
              plVar2[5].next = (list_head *)tcon_frame_addr_set;
              (pdev->dev).links.consumers.next = plVar2;
              plVar2[5].prev = (list_head *)tcon_lut_data_set;
              plVar4 = (list_head *)0x0;
              plVar2->next = (list_head *)pdVar1;
              plVar2[6].next = (list_head *)tcon_frame_start;
              pm_runtime_enable(pdVar1);
              goto LAB_00108f7c;
            }
            plVar5 = (list_head *)(uVar7 & 0xffffffff);
            pcVar8 = "failed to requeset irq: %d\n";
          }
          else {
            plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
            pcVar8 = "failed to get dclk clock: %d\n";
          }
        }
        else {
          plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
          pcVar8 = "failed to get hclk clock: %d\n";
        }
        _dev_err(pdVar1,pcVar8,plVar5);
      }
    }
    else {
      plVar4 = (list_head *)((ulong)plVar4 & 0xffffffff);
    }
  }
LAB_00108f7c:
  return (int)plVar4;
}



irqreturn_t tcon_irq_hanlder(int irq,void *dev_id)

{
  uint value;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  regmap_read(*(undefined8 *)((long)dev_id + 0x28),0x3c,&value);
  if ((value >> 1 & 1) != 0) {
    regmap_update_bits_base(*(undefined8 *)((long)dev_id + 0x28),0x3c,0x200,0x200,0,0,0);
    if (*(code **)((long)dev_id + 0x68) != (code *)0x0) {
      (**(code **)((long)dev_id + 0x68))();
    }
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



int eink_tcon_remove(platform_device_conflict *pdev)

{
  _mcount();
  __pm_runtime_disable(&pdev->dev,1);
  return 0;
}



void tcon_image_addr_set(eink_tcon *tcon,u32 pre_image_buf_addr,u32 cur_image_buf_addr,
                        u32 image_process_buf_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0xc,pre_image_buf_addr);
  regmap_write(tcon->regmap_base,0x10,cur_image_buf_addr);
  regmap_write(tcon->regmap_base,0x14,image_process_buf_addr);
  return;
}



void tcon_frame_start(eink_tcon *tcon)

{
  _mcount();
  regmap_write(tcon->regmap_base,0,1);
  return;
}



void tcon_disable(eink_tcon *tcon)

{
  clk *pcVar1;
  
  _mcount();
  disable_irq(tcon->irq);
  __pm_runtime_idle(tcon->dev,4);
  pcVar1 = tcon->hclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  pcVar1 = tcon->pclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  return;
}



int tcon_enable(eink_tcon *tcon,ebc_panel *panel)

{
  int iVar1;
  clk *pcVar2;
  eink_reg_data *peVar3;
  eink_reg_data *peVar4;
  eink_reg_data *peVar5;
  
  _mcount();
  pcVar2 = tcon->pclk;
  iVar1 = clk_prepare(pcVar2);
  if ((iVar1 == 0) && (iVar1 = clk_enable(pcVar2), iVar1 != 0)) {
    clk_unprepare(pcVar2);
  }
  pcVar2 = tcon->hclk;
  iVar1 = clk_prepare(pcVar2);
  if ((iVar1 == 0) && (iVar1 = clk_enable(pcVar2), iVar1 != 0)) {
    clk_unprepare(pcVar2);
  }
  __pm_runtime_resume(tcon->dev,4);
  peVar3 = PANEL_1872x1404_INIT;
  if ((panel->width == 0x4b0) && (peVar3 = PANEL_1200x825_INIT, panel->height != 0x339)) {
    peVar3 = PANEL_1872x1404_INIT;
  }
  peVar4 = peVar3;
  do {
    peVar5 = peVar4 + 1;
    regmap_write(tcon->regmap_base,peVar4->addr,peVar4->value);
    peVar4 = peVar5;
  } while (peVar5 != peVar3 + 0x15);
  enable_irq(tcon->irq);
  return 0;
}



// WARNING: Type propagation algorithm not settling

int eink_tcon_probe(platform_device_conflict *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  undefined8 *puVar3;
  list_head *plVar4;
  list_head *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  
  _mcount();
  pdVar1 = &pdev->dev;
  plVar2 = (list_head *)devm_kmalloc(pdVar1,0x58,0x6080c0);
  if (plVar2 == (list_head *)0x0) {
    plVar4 = (list_head *)0xfffffff4;
  }
  else {
    puVar3 = (undefined8 *)platform_get_resource(pdev,0x200,0);
    plVar4 = (list_head *)devm_ioremap_resource(pdVar1,puVar3);
    plVar2->prev = plVar4;
    if (plVar4 < (list_head *)0xfffffffffffff001) {
      *(int *)&plVar2[1].next = ((int)puVar3[1] + 1) - (int)*puVar3;
      eink_regmap_config.max_register = ((int)puVar3[1] - (int)*puVar3) - 3;
      eink_regmap_config.name = "rockchip,eink_tcon";
      plVar4 = (list_head *)__devm_regmap_init_mmio_clk(pdVar1,0,plVar4,&eink_regmap_config,0,0);
      plVar2[2].prev = plVar4;
      if (plVar4 < (list_head *)0xfffffffffffff001) {
        plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b9b1);
        plVar2[1].prev = plVar5;
        if (plVar5 < (list_head *)0xfffffffffffff001) {
          plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b9d4,plVar5);
          plVar2[2].next = plVar5;
          if (plVar5 < (list_head *)0xfffffffffffff001) {
            uVar6 = platform_get_irq(pdev,0,plVar5);
            *(int *)((long)&plVar2[1].next + 4) = (int)uVar6;
            if ((int)uVar6 < 0) {
              _dev_err(pdVar1,"No IRQ resource!\n");
              plVar4 = (list_head *)(ulong)*(uint *)((long)&plVar2[1].next + 4);
              goto LAB_00109468;
            }
            irq_modify_status(uVar6,0,0x1000);
            pcVar8 = (pdev->dev).init_name;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (pdev->dev).kobj.name;
            }
            uVar7 = devm_request_threaded_irq
                              (pdVar1,*(undefined4 *)((long)&plVar2[1].next + 4),tcon_irq_hanlder,0,
                               0,pcVar8,plVar2);
            plVar4 = (list_head *)(uVar7 & 0xffffffff);
            if (-1 < (int)uVar7) {
              plVar2[3].next = (list_head *)tcon_enable;
              plVar2[3].prev = (list_head *)tcon_disable;
              (pdev->dev).links.consumers.next = plVar2;
              plVar4 = (list_head *)0x0;
              plVar2[4].next = (list_head *)tcon_image_addr_set;
              plVar2->next = (list_head *)pdVar1;
              plVar2[4].prev = (list_head *)tcon_frame_start;
              pm_runtime_enable(pdVar1);
              goto LAB_00109468;
            }
            plVar5 = (list_head *)(uVar7 & 0xffffffff);
            pcVar8 = "failed to requeset irq: %d\n";
          }
          else {
            plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
            pcVar8 = "failed to get dclk clock: %d\n";
          }
        }
        else {
          plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
          pcVar8 = "failed to get hclk clock: %d\n";
        }
        _dev_err(pdVar1,pcVar8,plVar5);
      }
    }
    else {
      plVar4 = (list_head *)((ulong)plVar4 & 0xffffffff);
    }
  }
LAB_00109468:
  return (int)plVar4;
}



irqreturn_t tcon_irq_hanlder(int irq,void *dev_id)

{
  uint value;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  regmap_read(*(undefined8 *)((long)dev_id + 0x28),0x28,&value);
  if ((value & 1) != 0) {
    regmap_update_bits_base(*(undefined8 *)((long)dev_id + 0x28),0x30,1,1,0,0,0);
    if (*(code **)((long)dev_id + 0x50) != (code *)0x0) {
      (**(code **)((long)dev_id + 0x50))();
    }
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



void ebc_exit(void)

{
  platform_driver_unregister(&ebc_driver);
  return;
}



void tps65185_driver_exit(void)

{
  i2c_del_driver(&tps65185_driver);
  return;
}



void ebc_tcon_driver_exit(void)

{
  platform_driver_unregister(&ebc_tcon_driver);
  return;
}



void eink_tcon_driver_exit(void)

{
  platform_driver_unregister(&eink_tcon_driver);
  return;
}



int ebc_init(void)

{
  int iVar1;
  
  iVar1 = __platform_driver_register(&ebc_driver,0);
  return iVar1;
}



int tps65185_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = i2c_register_driver(0,&tps65185_driver);
  return iVar1;
}



int ebc_tcon_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = __platform_driver_register(&ebc_tcon_driver,0);
  return iVar1;
}



int eink_tcon_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = __platform_driver_register(&eink_tcon_driver,0);
  return iVar1;
}


