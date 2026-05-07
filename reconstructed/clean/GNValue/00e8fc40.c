// Function: FUN_00e8fc40
// Address: 00e8fc40
// Size: 883 bytes
// Class: GNValue

void* FUN_00e8fc40(void* param_1)

{
  kern_return_t kVar1;
  void *pvVar2;
  void*puVar3;
  int64_t lVar4;
  vm_prot_t unaff_EBX;
  vm_inherit_t unaff_EBP;
  uint64_t this_ptr;
  int64_t lVar5;
  vm_prot_t unaff_R14D;
  mem_entry_name_port_t object;
  memory_object_offset_t in_stack_ffffffffffffffd8;
  void*puVar6;
  
  if (this_ptr == 0) {
    puVar3 = (void*)0x0;
  }
  else {
    object = 0xe8fc62;
    pvVar2 = _pthread_getspecific(param_1);
    lVar4 = 0;
    if (pvVar2 == (void *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(int64_t *)((int64_t)pvVar2 + 0x58);
    }
    if (((((((((this_ptr <= g_028026e0) || (lVar4 = 1, this_ptr <= g_02802718)) ||
             (lVar4 = 2, this_ptr <= g_02802750)) ||
            ((lVar4 = 3, this_ptr <= g_02802788 || (lVar4 = 4, this_ptr <= g_028027c0)))) ||
           ((lVar4 = 5, this_ptr <= g_028027f8 ||
            ((lVar4 = 6, this_ptr <= g_02802830 || (lVar4 = 7, this_ptr <= g_02802868)))))) ||
          (lVar4 = 8, this_ptr <= g_028028a0)) ||
         (((((lVar4 = 9, this_ptr <= g_028028d8 || (lVar4 = 10, this_ptr <= g_02802910)) ||
            (lVar4 = 0xb, this_ptr <= g_02802948)) ||
           (((lVar4 = 0xc, this_ptr <= g_02802980 || (lVar4 = 0xd, this_ptr <= g_028029b8)) ||
            ((lVar4 = 0xe, this_ptr <= g_028029f0 ||
             ((lVar4 = 0xf, this_ptr <= g_02802a28 || (lVar4 = 0x10, this_ptr <= g_02802a60)))
             ))))) ||
          ((lVar4 = 0x11, this_ptr <= g_02802a98 ||
           (((lVar4 = 0x12, this_ptr <= g_02802ad0 || (lVar4 = 0x13, this_ptr <= g_02802b08))
            || (lVar4 = 0x14, this_ptr <= g_02802b40)))))))) ||
        ((((lVar4 = 0x15, this_ptr <= g_02802b78 || (lVar4 = 0x16, this_ptr <= g_02802bb0)) ||
          (((lVar4 = 0x17, this_ptr <= g_02802be8 ||
            ((lVar4 = 0x18, this_ptr <= g_02802c20 || (lVar4 = 0x19, this_ptr <= g_02802c58)))
            ) || (lVar4 = 0x1a, this_ptr <= g_02802c90)))) ||
         ((((lVar4 = 0x1b, this_ptr <= g_02802cc8 || (lVar4 = 0x1c, this_ptr <= g_02802d00))
           || (lVar4 = 0x1d, this_ptr <= g_02802d38)) ||
          ((lVar4 = 0x1e, this_ptr <= g_02802d70 || (lVar4 = 0x1f, this_ptr <= g_02802da8)))))
         ))) || ((lVar4 = 0x20, this_ptr <= g_02802de0 ||
                 ((lVar4 = 0x21, this_ptr <= g_02802e18 ||
                  (lVar4 = 0x22, this_ptr <= g_02802e50)))))) {
      if (lVar5 != 0) {
        puVar3 = (void*)FUN_00e8ffc0();
        return puVar3;
      }
      puVar3 = (void*)FUN_00e901e0(lVar4,&g_028026d0 + lVar4 * 7);
      return puVar3;
    }
    puVar6 = (void*)0x0;
    kVar1 = _mach_vm_map(0x1f,(mach_vm_address_t *)
                              ((uint64_t)(&UNK_0000400f + this_ptr) & 0xffffffffffffc000),
                         0xfa000001,0,1,object,in_stack_ffffffffffffffd8,0,unaff_EBX,unaff_R14D,
                         unaff_EBP);
    puVar3 = (void*)0x0;
    if (kVar1 == 0) {
      puVar3 = puVar6;
    }
    if (puVar3 == (void*)0x0) {
      FUN_00e8f250();
    }
    *puVar3 = 0;
    puVar3[1] = (mach_vm_address_t *)((uint64_t)(&UNK_0000400f + this_ptr) & 0xffffffffffffc000);
    puVar3 = puVar3 + 2;
    FUN_00e314f0();
  }
  return puVar3;
}

