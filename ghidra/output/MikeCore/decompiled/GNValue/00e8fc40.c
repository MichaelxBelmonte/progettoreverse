// Function: FUN_00e8fc40
// Address: 00e8fc40
// Size: 883 bytes
// Class: GNValue


undefined8 * FUN_00e8fc40(pthread_key_t param_1)

{
  kern_return_t kVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  vm_prot_t unaff_EBX;
  vm_inherit_t unaff_EBP;
  ulonglong unaff_RDI;
  longlong lVar5;
  vm_prot_t unaff_R14D;
  mem_entry_name_port_t object;
  memory_object_offset_t in_stack_ffffffffffffffd8;
  undefined8 *puVar6;
  
  if (unaff_RDI == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    object = 0xe8fc62;
    pvVar2 = _pthread_getspecific(param_1);
    lVar4 = 0;
    if (pvVar2 == (void *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)((longlong)pvVar2 + 0x58);
    }
    if (((((((((unaff_RDI <= DAT_028026e0) || (lVar4 = 1, unaff_RDI <= DAT_02802718)) ||
             (lVar4 = 2, unaff_RDI <= DAT_02802750)) ||
            ((lVar4 = 3, unaff_RDI <= DAT_02802788 || (lVar4 = 4, unaff_RDI <= DAT_028027c0)))) ||
           ((lVar4 = 5, unaff_RDI <= DAT_028027f8 ||
            ((lVar4 = 6, unaff_RDI <= DAT_02802830 || (lVar4 = 7, unaff_RDI <= DAT_02802868)))))) ||
          (lVar4 = 8, unaff_RDI <= DAT_028028a0)) ||
         (((((lVar4 = 9, unaff_RDI <= DAT_028028d8 || (lVar4 = 10, unaff_RDI <= DAT_02802910)) ||
            (lVar4 = 0xb, unaff_RDI <= DAT_02802948)) ||
           (((lVar4 = 0xc, unaff_RDI <= DAT_02802980 || (lVar4 = 0xd, unaff_RDI <= DAT_028029b8)) ||
            ((lVar4 = 0xe, unaff_RDI <= DAT_028029f0 ||
             ((lVar4 = 0xf, unaff_RDI <= DAT_02802a28 || (lVar4 = 0x10, unaff_RDI <= DAT_02802a60)))
             ))))) ||
          ((lVar4 = 0x11, unaff_RDI <= DAT_02802a98 ||
           (((lVar4 = 0x12, unaff_RDI <= DAT_02802ad0 || (lVar4 = 0x13, unaff_RDI <= DAT_02802b08))
            || (lVar4 = 0x14, unaff_RDI <= DAT_02802b40)))))))) ||
        ((((lVar4 = 0x15, unaff_RDI <= DAT_02802b78 || (lVar4 = 0x16, unaff_RDI <= DAT_02802bb0)) ||
          (((lVar4 = 0x17, unaff_RDI <= DAT_02802be8 ||
            ((lVar4 = 0x18, unaff_RDI <= DAT_02802c20 || (lVar4 = 0x19, unaff_RDI <= DAT_02802c58)))
            ) || (lVar4 = 0x1a, unaff_RDI <= DAT_02802c90)))) ||
         ((((lVar4 = 0x1b, unaff_RDI <= DAT_02802cc8 || (lVar4 = 0x1c, unaff_RDI <= DAT_02802d00))
           || (lVar4 = 0x1d, unaff_RDI <= DAT_02802d38)) ||
          ((lVar4 = 0x1e, unaff_RDI <= DAT_02802d70 || (lVar4 = 0x1f, unaff_RDI <= DAT_02802da8)))))
         ))) || ((lVar4 = 0x20, unaff_RDI <= DAT_02802de0 ||
                 ((lVar4 = 0x21, unaff_RDI <= DAT_02802e18 ||
                  (lVar4 = 0x22, unaff_RDI <= DAT_02802e50)))))) {
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)FUN_00e8ffc0();
        return puVar3;
      }
      puVar3 = (undefined8 *)FUN_00e901e0(lVar4,&DAT_028026d0 + lVar4 * 7);
      return puVar3;
    }
    puVar6 = (undefined8 *)0x0;
    kVar1 = _mach_vm_map(0x1f,(mach_vm_address_t *)
                              ((ulonglong)(&UNK_0000400f + unaff_RDI) & 0xffffffffffffc000),
                         0xfa000001,0,1,object,in_stack_ffffffffffffffd8,0,unaff_EBX,unaff_R14D,
                         unaff_EBP);
    puVar3 = (undefined8 *)0x0;
    if (kVar1 == 0) {
      puVar3 = puVar6;
    }
    if (puVar3 == (undefined8 *)0x0) {
      FUN_00e8f250();
    }
    *puVar3 = 0;
    puVar3[1] = (mach_vm_address_t *)((ulonglong)(&UNK_0000400f + unaff_RDI) & 0xffffffffffffc000);
    puVar3 = puVar3 + 2;
    FUN_00e314f0();
  }
  return puVar3;
}


