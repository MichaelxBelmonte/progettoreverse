// Function: FUN_00e8c420
// Address: 00e8c420
// Size: 1232 bytes
// Class: GNModelObject
// String references:
//   "GNModelObject"

void FUN_00e8c420(uint32_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  void* in_ECX;
  int64_t **pplVar3;
  uint uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *plVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  
  lVar2 = this_ptr[6];
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0xc);
    uVar7 = (uint64_t)uVar4;
    if ((int)uVar4 < 1) {
      bVar9 = false;
      iVar5 = *(int *)(lVar2 + 0xc);
    }
    else {
      bVar9 = false;
      while( true ) {
        uVar4 = uVar4 - 1;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (uint64_t)uVar4 * 8);
        in_ECX = uVar4;
        if ((*(int64_t *)(lVar2 + 0x10) == arg1) &&
           ((*param_2 == 0 || (*(int64_t *)(lVar2 + 0x20) == *param_2)))) {
          param_1 = FUN_00d23620();
          in_ECX = 1;
          if (*(int64_t **)(lVar2 + 0x18) == this_ptr) {
            bVar9 = true;
          }
        }
        if ((int64_t)uVar7 < 2) break;
        uVar7 = uVar7 - 1;
        lVar2 = this_ptr[6];
      }
      lVar2 = this_ptr[6];
      iVar5 = *(int *)(lVar2 + 0xc);
    }
    if (iVar5 == 0) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      param_1 = FUN_00d50b20();
      this_ptr[6] = 0;
      if (lVar2 != 0) {
        param_1 = FUN_00d50b20();
      }
    }
    if (((int64_t *)*param_2 == (int64_t *)0x0) || (!bVar9)) {
                                              (**(code **)(*this_ptr + 0x298))(param_1,arg1);
      return;
    }
    cVar1 = (**(code **)(*(int64_t *)*param_2 + 0x370))();
    if (cVar1 != '\0') {
      (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Da,*param_2);
      plVar8 = local_78;
      bVar9 = local_70 != '\0';
      local_80 = local_78;
      if (bVar9) {
        local_70 = '\0';
      }
      if (local_78 != (int64_t *)0x0) {
        cVar1 = FUN_00d77de0();
        if (cVar1 == '\0') {
          if ((g_028a8d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            g_028a8ce8 = FUN_00d4fe50();
            g_028a8cd0 = "GNModelObject";
            g_028a8cd8 = 0x38;
            in_ECX = 0xe8b770;
            g_028a8ce0 = FUN_00e8b770;
            g_028a8cf0 = 0;
            ram_00000000028a8cf8 = 0;
            g_028a8d00 = 0;
            ram_00000000028a8d08 = 0;
            g_028a8d10 = 0;
            ram_00000000028a8d18 = 0;
            g_028a8d20 = 0;
            ram_00000000028a8d28 = 0;
            g_028a8d30 = 0;
            ram_00000000028a8d38 = 0;
            g_028a8d40 = 0;
            ram_00000000028a8d48 = 0;
            g_028a8d50 = 0;
            ram_00000000028a8d58 = 0;
            g_028a8d60 = 0;
            ram_00000000028a8d68 = 0;
            g_028a8d70 = 0;
            ram_00000000028a8d78 = 0;
            g_028a8d80 = 0;
            ram_00000000028a8d88 = 0;
            g_028a8d90 = 0;
            ___cxa_guard_release();
          }
          (**(code **)(*plVar8 + 0x360))();
          cVar1 = FUN_00e85ea0();
          plVar8 = local_80;
          plVar6 = local_80;
          if (cVar1 == '\0') {
            plVar6 = g_02802688;
          }
          if (plVar6 != (int64_t *)0x0) {
            _pthread_getspecific(in_ECX);
            FUN_00e8c420();
          }
        }
        else {
          local_70 = '\0';
          local_78 = (int64_t *)0x0;
          local_68 = plVar8;
          local_60 = 0xffffffff;
          local_58 = 0;
          uVar10 = extraout_XMM0_Da_00;
          iVar5 = 0;
          while( true ) {
            if (iVar5 != 0) {
              if (iVar5 < 1) {
                iVar5 = -iVar5;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar5);
                uVar10 = FUN_00d23690(uVar10,iVar5);
                local_58 = local_58 + iVar5;
                iVar5 = 0;
              }
              local_60 = CONCAT44(iVar5,(int)local_60);
            }
            lVar2 = (int64_t)(int)local_60;
            iVar5 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar5);
            if (*(int *)((int64_t)local_68 + 0xc) <= iVar5) break;
            plVar8 = *(int64_t **)(local_68[2] + 8 + lVar2 * 8);
            local_78 = plVar8;
            local_88 = plVar8;
            if ((g_028a8d98 == '\0') &&
               (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_02, iVar5 != 0)) {
              g_028a8ce8 = FUN_00d4fe50();
              g_028a8cd0 = "GNModelObject";
              g_028a8cd8 = 0x38;
              g_028a8ce0 = FUN_00e8b770;
              g_028a8cf0 = 0;
              ram_00000000028a8cf8 = 0;
              g_028a8d00 = 0;
              ram_00000000028a8d08 = 0;
              g_028a8d10 = 0;
              ram_00000000028a8d18 = 0;
              g_028a8d20 = 0;
              ram_00000000028a8d28 = 0;
              g_028a8d30 = 0;
              ram_00000000028a8d38 = 0;
              g_028a8d40 = 0;
              ram_00000000028a8d48 = 0;
              g_028a8d50 = 0;
              ram_00000000028a8d58 = 0;
              g_028a8d60 = 0;
              ram_00000000028a8d68 = 0;
              g_028a8d70 = 0;
              ram_00000000028a8d78 = 0;
              g_028a8d80 = 0;
              ram_00000000028a8d88 = 0;
              g_028a8d90 = 0;
              uVar10 = ___cxa_guard_release();
            }
            pplVar3 = &g_02802688;
            if (plVar8 != (int64_t *)0x0) {
              (**(code **)(*plVar8 + 0x360))();
              cVar1 = FUN_00e85ea0();
              pplVar3 = &local_88;
              uVar10 = extraout_XMM0_Da_01;
              if (cVar1 == '\0') {
                pplVar3 = &g_02802688;
              }
            }
            if (*pplVar3 != (int64_t *)0x0) {
              _pthread_getspecific((void*)pplVar3);
              uVar10 = FUN_00e8c420();
            }
            iVar5 = local_60._4_4_;
          }
          FUN_00e8cae0();
          plVar8 = local_80;
        }
      }
      if ((bVar9) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

