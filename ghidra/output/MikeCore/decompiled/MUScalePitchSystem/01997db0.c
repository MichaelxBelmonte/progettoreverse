// Function: FUN_01997db0
// Address: 01997db0
// Size: 2255 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01997e60) */
/* WARNING: Removing unreachable block (ram,0x01997e69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01997db0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  longlong local_138;
  undefined1 local_130;
  undefined1 local_128 [16];
  undefined1 local_110;
  float local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  longlong *local_f0;
  char local_e8;
  int local_dc;
  float local_d8;
  float local_d4;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  fVar9 = (float)(**(code **)(&UNK_00001448 + *unaff_RDI))();
  if (((!NAN((double)unaff_RDI[0x55])) &&
      (uVar10 = (**(code **)(*unaff_RDI + 0x938))(), !NAN(*(float *)(unaff_RDI + 0x56)))) &&
     ((fVar9 != 0.0 || (NAN(fVar9))))) {
    (**(code **)(*unaff_RDI + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    if (((int)unaff_RDI[0x4e] == 4) || ((int)unaff_RDI[0x4e] == 2)) {
      FUN_01cfc6a0(DAT_0241b634 * fVar9 + DAT_02394234);
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_40;
      FUN_01d488d0();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    plVar7 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_40;
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar7 + 0x3a8))();
    fVar11 = (float)(**(code **)(*unaff_RDI + 3000))();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_b0 + 0x378))();
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_40;
    FUN_01d48a10();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    local_108 = (float)FUN_01d43b70();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_128 = ZEXT416((uint)(DAT_023908e0 * fVar11));
    fVar12 = DAT_023b1608 + DAT_023908e0 * fVar11;
    fVar15 = DAT_02390d34;
    if (DAT_02390d34 <= fVar12) {
      fVar15 = fVar12;
    }
    if (fVar15 < local_108) {
      local_108 = fVar15;
      FUN_01d48ad0();
      FUN_01d44d80();
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_40;
      FUN_01d48a10();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x4c] == 0) {
      local_d4 = 0.0;
    }
    else {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = 1;
      local_d4 = (float)FUN_01998b60();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    auVar13 = roundss(ZEXT416(uVar10),ZEXT416(uVar10),9);
    auVar13._0_4_ = auVar13._0_4_ + DAT_023b1698;
    local_dc = iVar3 + 6;
    fVar11 = fVar11 * DAT_02394240;
    local_128 = insertps(_DAT_023b16c0,local_128._0_4_,0x10);
    local_d8 = DAT_0241b638 * fVar9 + DAT_02394234;
    iVar3 = iVar3 + -7;
    plVar7 = (longlong *)0x0;
    bVar1 = false;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = local_40;
        plVar8 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pVar6 = (pthread_key_t)param_1;
      iVar3 = iVar3 + 1;
      (**(code **)(*plVar8 + 0x3a0))();
      (**(code **)(*unaff_RDI + 0xbf8))();
      uStack_100 = extraout_XMM0_Qb;
      local_108 = extraout_XMM0_Da;
      uStack_104 = extraout_XMM0_Db;
      pvVar4 = _pthread_getspecific(pVar6);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar2 = (**(code **)(*plVar8 + 0x3b8))();
      if (cVar2 == '\0') {
        FUN_01cfc6a0();
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        local_80 = local_40;
        FUN_01d488d0();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01cfc6a0();
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = local_40;
        FUN_01d488d0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar5 = DAT_027e1380;
      if (DAT_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar5;
      local_130 = 1;
      param_1 = &local_138;
      FUN_01998ff0(param_1,iVar3,0);
      if (plVar7 == local_40) {
        if ((bVar1) || (plVar7 == (longlong *)0x0)) goto joined_r0x01998593;
        plVar8 = plVar7;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_019985b0;
        }
LAB_01998544:
        local_38 = '\0';
        bVar1 = true;
        plVar7 = plVar8;
      }
      else {
        if (local_38 != '\0') {
          plVar8 = local_40;
          if ((bVar1) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01998544;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar8 = local_40;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019985b0:
        bVar1 = true;
        plVar7 = plVar8;
joined_r0x01998593:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      auVar14._4_4_ = uStack_104;
      auVar14._0_4_ = (local_108 - local_d4) - fVar11;
      auVar14._8_4_ = (undefined4)uStack_100;
      auVar14._12_4_ = uStack_100._4_4_;
      auVar14 = insertps(auVar13,auVar14,0x10);
      local_e8 = '\0';
      local_f0 = plVar7;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar14._0_8_,local_128._0_4_);
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (iVar3 < local_dc);
    if ((bVar1) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


