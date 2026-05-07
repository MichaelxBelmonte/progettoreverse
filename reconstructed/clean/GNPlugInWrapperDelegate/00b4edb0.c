// Function: FUN_00b4edb0
// Address: 00b4edb0
// Size: 1511 bytes
// Class: GNPlugInWrapperDelegate
// String references:
//   "GNPlugInWrapperDelegate"

uint64_t FUN_00b4edb0(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint8_t in_DL;
  int iVar7;
  uint64_t uVar8;
  int64_t arg1;
  int64_t this_ptr;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint64_t local_f8;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t *plStack_80;
  int64_t *local_48;
  char local_40;
  
  FUN_00da7190();
  if ((arg1 != 0) && (*(int64_t *)(this_ptr + 0x20) != 0)) {
    FUN_01e53c20();
    lVar5 = local_88;
    if (((char)plStack_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_e0 = '\0';
      local_e8 = 0;
      FUN_01d3a910();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      plStack_80 = (int64_t *)0x0;
      FUN_01e53c20();
      local_f8 = FUN_01e3f820();
      uStack_f0 = (uint32_t)param_2;
      uStack_ec = (uint32_t)((uint64_t)param_2 >> 0x20);
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d8b770();
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_00097dd0();
      *plVar4 = (int64_t)&g_026b3fa8;
      plVar4[2] = (int64_t)&g_026b4980;
      *(void*)(plVar4 + 0x3a) = 0;
      (*g_026b3fc0)();
      _objc_alloc();
      lVar5 = (*PTR__objc_msgSend_024a9998)();
      local_d8 = *(int64_t *)(this_ptr + 0x18);
      local_d0 = '\0';
      (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      uVar2 = (**(code **)(*plVar4 + 0x978))();
      cVar1 = (**(code **)(*plVar4 + 0x980))();
      iVar3 = (uVar2 & 0xff) * 2;
      iVar7 = iVar3 + 0x10;
      if (cVar1 == '\0') {
        iVar7 = iVar3;
      }
      uVar10 = (*PTR__objc_msgSend_024a9998)(iVar3,iVar7);
      uVar10 = (*PTR__objc_msgSend_024a9998)(uVar10,1);
      uVar10 = (*PTR__objc_msgSend_024a9998)(uVar10,in_DL);
      uVar10 = (*PTR__objc_msgSend_024a9998)(uVar10,1);
      (*PTR__objc_msgSend_024a9998)(uVar10,1);
      FUN_01f25900(uStack_f0);
      uVar10 = (*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)(uVar10,lVar5);
      (*PTR__objc_release_024a99a0)();
      local_88 = lVar5;
      plStack_80 = plVar4;
      FUN_01f09f50(0,&local_f8);
      FUN_01e53c20();
      (**(code **)(*local_48 + 0x528))();
      FUN_01e4cf40();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int64_t **)(this_ptr + 0x30) != (int64_t *)0x0) {
        cVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x20))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x20))();
          if ((cVar1 != '\0') && ((g_028a5118 == (int64_t *)0x0 || (g_028a5121 == '\0')))) {
            FUN_00e8cb50();
            if (g_028a5118 == (int64_t *)0x0) {
              plVar6 = (int64_t *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*plVar6 + 0x18))();
              bVar9 = g_028a5118 == (int64_t *)0x0;
              g_028a5118 = plVar6;
              if (bVar9) {
LAB_00b4f101:
                if (g_028a5120 == '\0') {
                  g_028a5120 = '\x01';
                  FUN_00e8cb90();
                }
              }
              else {
                FUN_00d50b20();
                if (g_028a5118 != (int64_t *)0x0) goto LAB_00b4f101;
              }
              FUN_01d88e40();
              g_028a5121 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028a5121 = '\x01';
              FUN_00e8cb70();
            }
          }
          if (g_028a5118 != (int64_t *)0x0) {
            uVar10 = FUN_00d50b00();
            local_c0 = '\0';
            local_c8 = plVar4;
            FUN_00b4f6a0(uVar10,&local_c8);
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      (**(code **)(*plVar4 + 0x988))();
      plVar6 = *(int64_t **)(this_ptr + 0x28);
      if (plVar6 != plVar4) {
        FUN_00d50b00();
        *(int64_t **)(this_ptr + 0x28) = plVar4;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      local_b0 = '\0';
      local_b8 = plVar4;
      (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x4c8))((int)g_023dccec,g_023dccf4);
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_01d8c720();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      // [STATIC_INIT: property registration]
      if (local_48 == (int64_t *)0x0) {
        lVar5 = 0;
      }
      else {
        uVar10 = (**(code **)(*local_48 + 0x360))();
        lVar5 = FUN_00e86120(uVar10,1);
      }
      local_a0 = '\0';
      local_a8 = plVar4;
      (**(code **)(*(int64_t *)((int64_t)local_48 + lVar5) + 0x28))();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = 0;
      local_90 = '\0';
      FUN_01d3a930();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar8 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
      goto LAB_00b4f335;
    }
  }
  uVar8 = 0;
LAB_00b4f335:
  FUN_00da71b0();
  return uVar8 & 0xffffffff;
}

