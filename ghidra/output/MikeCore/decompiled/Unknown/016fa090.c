// Function: FUN_016fa090
// Address: 016fa090
// Size: 2315 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_016fa090(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  pthread_key_t pVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  double local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  double local_e0;
  longlong local_d8;
  char local_d0;
  undefined4 local_c4;
  ulonglong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_38;
  
  local_140 = *unaff_RSI;
  local_138 = 0;
  FUN_016ebbb0(param_1,&local_140);
  lVar12 = local_40;
  pVar10 = (pthread_key_t)param_1;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_016fa0f8;
    }
  }
  else if (local_40 != 0) {
LAB_016fa0f8:
    local_54 = 0xffffffff;
    pvVar6 = _pthread_getspecific(pVar10);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar10 = (pthread_key_t)lVar12;
    }
    uVar8 = FUN_01909dc0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = (double)FUN_018fcb10();
    local_48 = FUN_00e7bcc0();
    local_130 = *unaff_RSI;
    local_128 = 0;
    FUN_016f5090();
    uVar18 = FUN_00e7bdb0();
    local_e8 = FUN_00e7c8b0(uVar18,1);
    local_40 = (ulonglong)local_40._4_4_ << 0x20;
    pVar10 = (pthread_key_t)(local_e8 >> 0x20);
    if ((local_e8 >> 0x20 == 0) || (cVar4 = FUN_00e7c630(), cVar4 == '\0')) {
      local_48 = local_e8;
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_54;
    local_40 = FUN_0165cf20(puVar11,0);
    pVar10 = (pthread_key_t)puVar11;
    FUN_00e7c280();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar18 = FUN_0165d690();
    local_c0 = FUN_016cbad0(uVar18,0);
    uVar18 = extraout_XMM0_Qa;
    if (local_48._4_4_ != 0) {
      if (local_c0 >> 0x20 == 0) {
        local_40 = *(ulonglong *)(unaff_RDI + 0x68);
      }
      else {
        cVar4 = FUN_00e7c020();
        if (cVar4 == '\0') {
          local_40 = *(ulonglong *)(unaff_RDI + 0x68);
          iVar9 = local_48._4_4_;
        }
        else {
          local_40 = *(ulonglong *)(unaff_RDI + 0x68);
          iVar9 = (int)(local_c0 >> 0x20);
          local_48 = local_c0;
        }
        uVar18 = extraout_XMM0_Qa_00;
        if (iVar9 == 0) goto LAB_016fa35c;
      }
      if (local_40 >> 0x20 != 0) {
        cVar4 = FUN_00e7c020();
        uVar18 = extraout_XMM0_Qa_01;
        if (cVar4 != '\0') {
          local_48 = *(ulonglong *)(unaff_RDI + 0x68);
        }
      }
    }
LAB_016fa35c:
    local_120 = *unaff_RSI;
    local_118 = 0;
    uVar18 = FUN_016f9740(uVar18,local_48);
    local_110 = *unaff_RSI;
    local_108 = 0;
    FUN_016d0130(uVar18,&local_110);
    uVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_f0 = uVar8;
    local_40 = FUN_00e7c4f0();
    FUN_00e7bac0();
    uVar5 = FUN_00e7cea0();
    pVar10 = *(pthread_key_t *)(uVar3 + 0xc);
    uVar15 = (pVar10 - 1) - uVar5;
    uVar16 = 1;
    if (1 < (int)pVar10) {
      uVar16 = pVar10 - 1;
    }
    uVar2 = uVar15;
    if ((int)uVar15 < 0) {
      uVar2 = 0;
    }
    if ((int)uVar15 >= 0) {
      uVar16 = uVar5;
    }
    lVar12 = *(longlong *)(*(longlong *)(uVar3 + 0x10) + (ulonglong)uVar2 * 8);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar12;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d0 = '\0';
    local_d8 = lVar12;
    local_b8 = (double)FUN_018fde50();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_a8 = (double)FUN_00e7c860();
    uVar5 = *(int *)(uVar3 + 0xc) - uVar16;
    local_f8 = (ulonglong)uVar5;
    lVar12 = *(longlong *)(uVar3 + 0x10);
    lVar7 = *(longlong *)(lVar12 + (longlong)(int)uVar5 * 8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = (double)FUN_01907950();
    pVar10 = (pthread_key_t)lVar12;
    local_100 = local_e0 - local_100;
    if (local_100 <= DAT_023e16a0) {
      local_98 = 0;
      bVar17 = false;
      local_50 = 0;
    }
    else {
      local_a0 = (double)FUN_016cd860();
      local_50 = 0;
      local_b0 = (double)FUN_00e7c860();
      FUN_00c8e690();
      local_50 = local_40;
      lVar13 = local_40;
      if ((((local_38 == '\0') && (local_40 != 0)) &&
          (FUN_00d50b00(), lVar13 = local_50, local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      bVar17 = lVar13 != 0;
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_01907950();
      lVar13 = local_50;
      pVar10 = (pthread_key_t)lVar12;
      puVar1 = *(undefined8 **)(local_50 + 0x10);
      *puVar1 = uVar8;
      local_98 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
      if (1 < (int)uVar16) {
        local_a8 = (DAT_023b4df8 / local_b8) * local_a8 * (double)(int)uVar16;
        dVar19 = DAT_024119d0;
        if (local_a0 * _DAT_023b1e98 <= DAT_024119d0) {
          dVar19 = local_a0 * _DAT_023b1e98;
        }
        local_b0 = (local_b0 * DAT_023b4df8) / dVar19;
        uVar14 = 1;
        local_a0 = (double)(int)uVar16;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = (double)FUN_01907950();
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar19 = (double)FUN_01907950();
          pVar10 = (pthread_key_t)lVar12;
          dVar20 = (double)(int)uVar14 / local_a0;
          dVar21 = local_a8 * dVar20 + local_b8;
          dVar21 = ((local_100 * dVar20 + dVar19) - dVar21) * dVar20 * dVar20 + dVar21;
          if (local_e0 - dVar21 < local_b0) {
            local_98 = 0;
            goto LAB_016fa83d;
          }
          *(double *)(*(longlong *)(lVar13 + 0x10) + uVar14 * 8) = dVar21;
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
        uVar14 = 1;
        do {
          pVar10 = (pthread_key_t)*(undefined8 *)(uVar3 + 0x10);
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907cc0(*(undefined8 *)(*(longlong *)(local_50 + 0x10) + uVar14 * 8));
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
      }
    }
LAB_016fa83d:
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar10 = 0;
    FUN_0165cf20(0,0);
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = FUN_0165cf20(0,0);
    local_c4 = 1;
    uVar8 = FUN_00e7c260();
    FUN_016d62b0(uVar8,local_40);
    if ((bVar17) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = local_98;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_016fa991;
  }
  uVar14 = 0;
LAB_016fa991:
  return uVar14 & 0xffffffff;
}


