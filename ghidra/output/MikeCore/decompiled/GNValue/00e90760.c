// Function: FUN_00e90760
// Address: 00e90760
// Size: 1212 bytes
// Class: GNValue


ulonglong FUN_00e90760(undefined8 param_1,undefined8 param_2,mach_vm_size_t param_3,int param_4)

{
  mach_vm_address_t *source_address;
  mach_vm_address_t *address;
  kern_return_t kVar1;
  ulonglong uVar2;
  longlong lVar3;
  segment_command *psVar4;
  void *pvVar5;
  mach_vm_address_t mVar6;
  boolean_t unaff_EBX;
  void *pvVar7;
  mach_vm_address_t *unaff_RSI;
  ulonglong unaff_RDI;
  mach_vm_size_t size;
  vm_prot_t unaff_R12D;
  mach_vm_address_t *pmVar8;
  vm_prot_t unaff_R13D;
  mach_vm_address_t *pmVar9;
  vm_inherit_t unaff_R14D;
  mem_entry_name_port_t object;
  void *pvVar10;
  
  if (unaff_RSI == (mach_vm_address_t *)0x0) {
    FUN_00e905a0();
    return 0;
  }
  if (unaff_RDI == 0) {
    uVar2 = FUN_00e8fc40();
    return uVar2;
  }
  if ((unaff_RDI & 0x10) == 0) {
    lVar3 = *(longlong *)(unaff_RDI & 0xffffffffffff0000);
    pvVar7 = (void *)0x0;
    source_address = (mach_vm_address_t *)(&DAT_028026d8)[(longlong)*(int *)(lVar3 + 4) * 7];
  }
  else {
    pvVar7 = (void *)(unaff_RDI - 0x10);
    lVar3 = *(longlong *)(unaff_RDI - 0x10);
    source_address = *(mach_vm_address_t **)(unaff_RDI - 8);
  }
  psVar4 = (segment_command *)0x0;
  if ((((((((unaff_RSI <= DAT_028026e0) ||
           (psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 1),
           unaff_RSI <= DAT_02802718)) ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 2), unaff_RSI <= DAT_02802750
          )) || ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 3),
                 unaff_RSI <= DAT_02802788 ||
                 (psVar4 = (segment_command *)&MACH_HEADER.cputype, unaff_RSI <= DAT_028027c0)))) ||
        ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 1),
         unaff_RSI <= DAT_028027f8 ||
         ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 2),
          unaff_RSI <= DAT_02802830 ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 3),
          unaff_RSI <= DAT_02802868)))))) ||
       ((psVar4 = (segment_command *)&MACH_HEADER.cpusubtype, unaff_RSI <= DAT_028028a0 ||
        ((((((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 1),
             unaff_RSI <= DAT_028028d8 ||
             (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 2),
             unaff_RSI <= DAT_02802910)) ||
            (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 3),
            unaff_RSI <= DAT_02802948)) ||
           (((psVar4 = (segment_command *)&MACH_HEADER.filetype, unaff_RSI <= DAT_02802980 ||
             (psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 1),
             unaff_RSI <= DAT_028029b8)) ||
            ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 2),
             unaff_RSI <= DAT_028029f0 ||
             ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 3),
              unaff_RSI <= DAT_02802a28 ||
              (psVar4 = (segment_command *)&MACH_HEADER.ncmds, unaff_RSI <= DAT_02802a60)))))))) ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 1), unaff_RSI <= DAT_02802a98
          )) || (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 2),
                  unaff_RSI <= DAT_02802ad0 ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 3),
                  unaff_RSI <= DAT_02802b08)) ||
                 (psVar4 = (segment_command *)&MACH_HEADER.sizeofcmds, unaff_RSI <= DAT_02802b40))))
        )))) || (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 1),
                  unaff_RSI <= DAT_02802b78 ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 2),
                  unaff_RSI <= DAT_02802bb0)) ||
                 (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 3),
                   unaff_RSI <= DAT_02802be8 ||
                   ((psVar4 = (segment_command *)&MACH_HEADER.flags, unaff_RSI <= DAT_02802c20 ||
                    (psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 1),
                    unaff_RSI <= DAT_02802c58)))) ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 2),
                  unaff_RSI <= DAT_02802c90)))))) ||
     (((((psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 3), unaff_RSI <= DAT_02802cc8
         || (psVar4 = (segment_command *)&MACH_HEADER.reserved, unaff_RSI <= DAT_02802d00)) ||
        (psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 1),
        unaff_RSI <= DAT_02802d38)) ||
       ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 2),
        unaff_RSI <= DAT_02802d70 ||
        (psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 3),
        unaff_RSI <= DAT_02802da8)))) ||
      ((psVar4 = &segment_command_00000020, unaff_RSI <= DAT_02802de0 ||
       ((psVar4 = (segment_command *)((longlong)&segment_command_00000020.cmd + 1),
        unaff_RSI <= DAT_02802e18 ||
        (psVar4 = (segment_command *)((longlong)&segment_command_00000020.cmd + 2),
        unaff_RSI <= DAT_02802e50)))))))) {
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) == (int)psVar4)) {
      if ((&DAT_028026ec)[(longlong)psVar4 * 0x38] == '\0') {
        *(mach_vm_address_t **)((longlong)pvVar7 + 8) = unaff_RSI + 2;
        return unaff_RDI;
      }
      return unaff_RDI;
    }
LAB_00e90a9a:
    uVar2 = FUN_00e8fc40();
    pmVar9 = source_address + -2;
    if ((unaff_RDI & 0x10) == 0) {
      pmVar9 = source_address;
    }
    if (unaff_RSI < pmVar9) {
      pmVar9 = unaff_RSI;
    }
    _memcpy(psVar4,pmVar9,(size_t)param_3);
    FUN_00e905a0();
    return uVar2;
  }
  if (lVar3 != 0) goto LAB_00e90a9a;
  pmVar8 = (mach_vm_address_t *)
           ((ulonglong)(&UNK_0000400f + (longlong)unaff_RSI) & 0xffffffffffffc000);
  mVar6 = (longlong)source_address - (longlong)pmVar8;
  pmVar9 = source_address;
  if (mVar6 == 0) goto LAB_00e90a68;
  if (pmVar8 <= source_address) {
    if (0xffff < mVar6) {
      _mach_vm_deallocate(0x22,mVar6,param_3);
      pmVar9 = pmVar8;
    }
    goto LAB_00e90a68;
  }
  pmVar9 = source_address + 0x2000;
  address = (mach_vm_address_t *)0x10000;
  if ((mach_vm_address_t *)0xffff <
      (mach_vm_address_t *)((longlong)pmVar8 - (longlong)source_address)) {
    pmVar9 = pmVar8;
    address = (mach_vm_address_t *)((longlong)pmVar8 - (longlong)source_address);
  }
  lVar3 = (longlong)source_address + (longlong)pvVar7;
  object = 0xe90b2b;
  kVar1 = _mach_vm_allocate(lVar3 == 0 | 0xfa000000,address,param_3,param_4);
  if ((kVar1 == 0) && (lVar3 != 0)) goto LAB_00e90a68;
  pmVar9 = (mach_vm_address_t *)((longlong)pmVar9 + 0x3fffU & 0xffffffffffffc000);
  pvVar10 = (void *)0x0;
  pvVar7 = (void *)0x0;
  pvVar5 = (void *)((longlong)&MACH_HEADER.reserved + 3);
  size = 0xfa000001;
  mVar6 = 0;
  kVar1 = _mach_vm_map(0x1f,pmVar9,0xfa000001,0,1,object,0,unaff_EBX,unaff_R12D,unaff_R13D,
                       unaff_R14D);
  if ((kVar1 == 0) && (pvVar7 = pvVar10, pvVar10 != (void *)0x0)) {
    if (source_address < (mach_vm_address_t *)0x10000) goto LAB_00e90bfa;
LAB_00e90be4:
    pvVar5 = pvVar7;
    kVar1 = _mach_vm_copy((vm_map_t)pvVar7,(mach_vm_address_t)source_address,size,mVar6);
    pvVar10 = pvVar7;
    if (kVar1 != 0) goto LAB_00e90bfa;
  }
  else {
    FUN_00e8f250();
    pvVar10 = pvVar7;
    if ((mach_vm_address_t *)0xffff < source_address) goto LAB_00e90be4;
LAB_00e90bfa:
    _memcpy(pvVar5,source_address,(size_t)size);
    pvVar7 = pvVar10;
  }
  _mach_vm_deallocate((vm_map_t)pvVar5,(mach_vm_address_t)source_address,size);
LAB_00e90a68:
  *(mach_vm_address_t **)((longlong)pvVar7 + 8) = pmVar9;
  return (longlong)pvVar7 + 0x10;
}


