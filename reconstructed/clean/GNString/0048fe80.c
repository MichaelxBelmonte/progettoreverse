// Function: FUN_0048fe80
// Address: 0048fe80
// Size: 2015 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0048fe80(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint32_t uVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  void* pVar10;
  int64_t *plVar11;
  uint64_t unaff_RBX;
  int64_t *plVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t **pplVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar13 = this_ptr;
    plVar12 = this_ptr;
    do {
      (**(code **)(*plVar13 + 0x370))();
      plVar11 = local_48;
      if (local_48 == plVar13) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
           (plVar11 = plVar13, local_40[0] != '\0')) goto LAB_0048ff27;
      }
      else {
        plVar12 = plVar11;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar8 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar8 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_0048ff27:
          local_38[0] = '\x01';
          pcVar8 = local_40;
        }
        *pcVar8 = '\0';
        plVar13 = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar11 = &g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar11 = (int64_t *)&stack0xffffffffffffff98;
        if (cVar5 == '\0') {
          plVar11 = &g_02802688;
        }
      }
      if (*plVar11 != 0) {
        if ((local_38[0] == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar13 != (int64_t *)0x0);
    pVar10 = (void*)plVar11;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) {
      unaff_RBX = 0;
      goto LAB_0049053c;
    }
    FUN_00749e90();
    plVar13 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    lVar1 = this_ptr[0x23];
    if (lVar1 == 0) {
      bVar2 = true;
      unaff_RBX = 0;
    }
    else {
      FUN_00d50b00();
      local_80 = lVar1;
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar11 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = true;
      if (plVar11 == (int64_t *)0x0) {
LAB_004901f0:
        unaff_RBX = 0;
      }
      else {
        uVar6 = (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x920))();
        FUN_01d701d0(extraout_XMM0_Da,uVar6);
        if (local_40[0] == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_004901f0;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == (int64_t *)0x0) goto LAB_004901f0;
        uVar6 = FUN_01d66da0();
        local_100 = g_02726cf0;
        if (g_02726cf0 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_f8 = '\x01';
        pplVar14 = &local_48;
        uVar6 = FUN_000175c0(uVar6,&local_100);
        plVar11 = local_48;
        if ((g_026fd0c0 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_01, iVar7 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          uVar6 = ___cxa_guard_release();
        }
        if (plVar11 == (int64_t *)0x0) {
          pplVar14 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar6 = extraout_XMM0_Da_00;
          if (cVar5 == '\0') {
            pplVar14 = (int64_t **)&g_02802688;
          }
        }
        lVar1 = local_80;
        local_78 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (local_78 != (int64_t *)0x0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar14 + 1) = 0;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        lVar3 = g_026f6fb0;
        if (g_026f6fb0 != 0) {
          uVar6 = FUN_00d50b00();
        }
        plVar11 = g_026f6fb8;
        local_f0 = lVar3;
        local_e8 = '\x01';
        if (g_026f6fb8 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        local_e0 = plVar11;
        local_d8 = '\x01';
        FUN_01f6ca30(uVar6,&local_e0);
        plVar4 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        iVar7 = (**(code **)(*plVar4 + 0x5e0))();
        if (iVar7 == 0) {
          FUN_0048b260();
          uVar6 = FUN_019532c0();
          local_70 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              uVar6 = FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
          local_d0 = local_70;
          local_c8 = '\0';
          local_b8 = '\0';
          local_c0 = lVar1;
          FUN_004f9d80(uVar6,&local_c0);
          plVar11 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (*(int *)((int64_t)plVar11 + 0xc) != 0) {
            local_a8 = '\0';
            local_a0 = local_78;
            local_98 = '\0';
            local_90 = plVar11;
            local_88 = '\0';
            local_b0 = lVar1;
            FUN_00784900(&local_90,&local_a0);
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          bVar2 = false;
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          FUN_0048a720();
          plVar12 = plVar11;
        }
        FUN_00d50b20();
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        unaff_RBX = CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar2) goto LAB_0049053c;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_0049053c:
  return unaff_RBX & 0xffffffff;
}

