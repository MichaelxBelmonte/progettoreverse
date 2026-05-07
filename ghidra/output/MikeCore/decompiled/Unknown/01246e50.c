// Function: FUN_01246e50
// Address: 01246e50
// Size: 6034 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0124801a) */
/* WARNING: Removing unreachable block (ram,0x01248026) */
/* WARNING: Removing unreachable block (ram,0x01248313) */
/* WARNING: Removing unreachable block (ram,0x0124831f) */
/* WARNING: Removing unreachable block (ram,0x01247e98) */
/* WARNING: Removing unreachable block (ram,0x01247ea4) */
/* WARNING: Removing unreachable block (ram,0x01247610) */
/* WARNING: Removing unreachable block (ram,0x0124761c) */
/* WARNING: Removing unreachable block (ram,0x01246f9e) */
/* WARNING: Removing unreachable block (ram,0x01246faa) */
/* WARNING: Removing unreachable block (ram,0x012471fc) */
/* WARNING: Removing unreachable block (ram,0x01247208) */
/* WARNING: Removing unreachable block (ram,0x0124839b) */
/* WARNING: Removing unreachable block (ram,0x012483a7) */
/* WARNING: Removing unreachable block (ram,0x0124832d) */
/* WARNING: Removing unreachable block (ram,0x01248339) */
/* WARNING: Removing unreachable block (ram,0x0124807c) */
/* WARNING: Removing unreachable block (ram,0x01248088) */
/* WARNING: Removing unreachable block (ram,0x0124852a) */
/* WARNING: Removing unreachable block (ram,0x01248536) */

void FUN_01246e50(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *unaff_R12;
  undefined7 uVar13;
  longlong *plVar14;
  longlong *unaff_R15;
  ulonglong uVar15;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  int local_a4;
  longlong *local_a0;
  char local_98;
  ulonglong local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  plVar11 = (longlong *)*param_2;
  if (plVar11 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_98 = 0;
  cVar3 = *(char *)(param_2 + 1);
  if (cVar3 != '\0') {
    FUN_00d50b00();
  }
  local_a0 = plVar11;
  local_98 = cVar3;
  FUN_01407af0();
  FUN_0177f010();
  local_108 = local_88;
  local_100 = 0;
  if (local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_100 = '\x01';
  pplVar10 = &local_108;
  FUN_0140f410(pplVar10,&local_a0);
  plVar11 = local_78;
  pVar9 = (pthread_key_t)pplVar10;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
LAB_01246fd6:
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_00d45870();
    FUN_00d50b20();
    if (local_a4 == -0x80000000) goto LAB_01246fd6;
  }
  if (unaff_RSI[3] != 0) {
    unaff_R15 = &DAT_02802558;
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = unaff_RSI[2];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_01738be0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 != local_a4) {
      FUN_0173b7c0();
      unaff_R12 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI[2] == 0) {
        FUN_0176f970();
        if (local_70 == '\0') {
          if (local_78 == (longlong *)0x0) {
            local_40 = (longlong *)0x0;
          }
          else {
            local_40 = local_78;
            FUN_00d50b00();
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_40 = local_78;
        }
      }
      else {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        local_78 = local_50;
        local_70 = 0;
        local_40 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_70 = '\0';
          if (local_48 != '\0') {
            local_70 = '\0';
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\0';
          local_70 = '\0';
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b720();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      local_f8 = local_78;
      local_f0 = 0;
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_f0 = '\x01';
      FUN_0173b680();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0174e010();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      local_e8 = local_50;
      local_e0 = 0;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_e0 = '\x01';
      (**(code **)(*unaff_RSI + 0x388))();
      plVar11 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d99300();
        FUN_00d95590();
        local_d8 = local_88;
        local_d0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_d0 = '\x01';
        FUN_00d91bc0();
        plVar11 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        FUN_00d95590();
        local_c8 = local_88;
        local_c0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_c0 = '\x01';
        FUN_00d91bc0();
        unaff_R15 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar3 = (**(code **)(*unaff_R15 + 0x50))();
        if (cVar3 != '\0') {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d51d20();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (unaff_R12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto joined_r0x012485b0;
        }
        FUN_00d50b20();
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d95590();
  local_b8 = local_50;
  local_b0 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_b0 = '\x01';
  pVar9 = 6;
  FUN_00d97d10(6,&local_b8);
  plVar14 = local_78;
  cVar3 = local_98;
  plVar11 = local_a0;
  if (local_a0 == local_78) {
    if ((local_98 != '\0') || (local_78 == (longlong *)0x0)) goto LAB_012477c7;
    if (local_70 == '\0') {
      FUN_00d50b00();
      goto LAB_012477c0;
    }
LAB_01247751:
    local_98 = '\x01';
    local_70 = '\0';
  }
  else {
    unaff_R15 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),local_98);
    if (local_70 != '\0') {
      local_a0 = local_78;
      if ((local_98 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01247751;
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar14;
    if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_012477c0:
    local_98 = '\x01';
LAB_012477c7:
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00d8c7a0();
  plVar11 = local_a0;
  lVar8 = DAT_027be638;
  if (iVar5 == 0) {
LAB_0124791b:
    FUN_0173be50();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      uVar6 = 0;
joined_r0x012479cf:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (undefined7)((ulonglong)unaff_R12 >> 8);
      if (local_70 == '\0') {
        FUN_00d50b00();
        uVar6 = (uint)CONCAT71(uVar13,1);
        goto joined_r0x012479cf;
      }
      local_70 = '\0';
      uVar6 = (uint)CONCAT71(uVar13,1);
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_027be638 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_017281b0();
      FUN_00d99300();
      plVar11 = local_88;
      if (local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_78 = plVar11;
      local_70 = '\0';
      cVar4 = FUN_00d23d70();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') goto LAB_0124791b;
    plVar11 = (longlong *)0x0;
    uVar6 = 0;
  }
  plVar14 = local_a0;
  lVar8 = DAT_027be640;
  if (DAT_027be640 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar14 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    FUN_01728850();
    FUN_00d99300();
    plVar14 = local_88;
    if (local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_78 = plVar14;
    local_70 = '\0';
    cVar4 = FUN_00d23d70();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar15 = (ulonglong)uVar6;
  }
  else {
    FUN_0173c130();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar14 = local_78;
    cVar3 = (char)uVar6;
    uVar13 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if (local_78 == plVar11) {
      plVar14 = plVar11;
      if ((cVar3 == '\0') && (local_78 != (longlong *)0x0)) {
        if (local_70 != '\0') goto LAB_01247be7;
        uVar15 = CONCAT71(uVar13,1);
        FUN_00d50b00();
      }
      else {
        uVar15 = (ulonglong)uVar6;
      }
LAB_01247d1a:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar15 = CONCAT71(uVar13,1);
        if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01247d1a;
      }
      if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01247be7:
      local_70 = '\0';
      uVar15 = CONCAT71(uVar13,1);
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = plVar14;
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar11 == (longlong *)0x0) {
    FUN_00d99300();
    plVar14 = local_78;
    cVar3 = local_98;
    plVar11 = local_a0;
    if (local_a0 == local_78) {
      if ((local_98 != '\0') || (local_78 == (longlong *)0x0)) goto LAB_01247dfb;
      if (local_70 == '\0') {
        FUN_00d50b00();
        goto LAB_01247df4;
      }
LAB_01247dbb:
      local_98 = '\x01';
    }
    else {
      if (local_70 != '\0') {
        local_a0 = local_78;
        if ((local_98 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01247dbb;
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_a0 = plVar14;
      if ((cVar3 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01247df4:
      local_98 = '\x01';
LAB_01247dfb:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar8 = unaff_RSI[2];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_01243e50();
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) {
      FUN_016ab300();
      FUN_016ac650();
      plVar11 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_70 = '\0';
        local_78 = (longlong *)0x0;
        local_68 = plVar11;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        plVar14 = (longlong *)0x0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar5 = -local_60._4_4_;
            }
            else {
              iVar5 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar5);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar5 = 0;
            }
            local_60 = CONCAT44(iVar5,(int)local_60);
          }
          lVar8 = (longlong)(int)local_60;
          iVar5 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (*(int *)((longlong)local_68 + 0xc) <= iVar5) break;
          local_78 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
          FUN_00d99300();
          plVar1 = local_50;
          if (((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          cVar3 = FUN_00d90eb0();
          uVar12 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
          if (cVar3 == '\0') {
            uVar6 = FUN_00d90870();
            uVar12 = (ulonglong)uVar6;
          }
          if ((char)uVar12 == '\0') {
            plVar11 = (longlong *)(uVar15 & 0xffffffff);
          }
          else {
            local_90 = uVar15;
            local_40 = plVar14;
            FUN_016ab300();
            FUN_016ac710();
            plVar2 = local_50;
            if (local_48 == '\0') {
              if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
                 (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar8 = unaff_RSI[2];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_01243e50();
            plVar14 = local_50;
            uVar13 = (undefined7)(uVar12 >> 8);
            if (local_50 == local_40) {
              plVar14 = local_40;
              if (((char)local_90 == '\0') && (local_50 != (longlong *)0x0)) {
                plVar11 = (longlong *)CONCAT71(uVar13,1);
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  plVar14 = local_40;
                }
              }
              else if ((local_48 == '\0') || (local_50 == (longlong *)0x0)) {
                plVar11 = (longlong *)(local_90 & 0xffffffff);
              }
              else {
                FUN_00d50b20();
                plVar11 = (longlong *)(local_90 & 0xffffffff);
                plVar14 = local_40;
              }
            }
            else if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (longlong *)CONCAT71(uVar13,1);
              if ((char)local_90 != '\0') {
                if (local_40 == (longlong *)0x0) goto LAB_012484dd;
                FUN_00d50b20();
              }
            }
            else {
              plVar11 = (longlong *)CONCAT71(uVar13,1);
              if (((char)local_90 == '\0') || (local_40 == (longlong *)0x0)) {
LAB_012484dd:
                plVar11 = (longlong *)CONCAT71(uVar13,1);
              }
              else {
                FUN_00d50b20();
              }
            }
            local_40 = plVar14;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            plVar14 = local_40;
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar15 = (ulonglong)plVar11 & 0xffffffff;
        }
        plVar11 = local_68;
        FUN_00018280();
        pVar9 = (pthread_key_t)plVar11;
        FUN_00d50b20();
        if (plVar14 != (longlong *)0x0) goto LAB_01247eb2;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x012485b0;
    }
  }
LAB_01247eb2:
  local_90 = uVar15;
  FUN_0173b7c0();
  plVar11 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RSI[2] == 0) {
    FUN_0176f970();
    plVar14 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (longlong *)0x0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar14 = local_50;
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_78 = plVar14;
      local_70 = '\0';
      if (local_48 != '\0') {
        local_70 = '\0';
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_78 = local_50;
      local_48 = '\0';
      local_70 = '\0';
    }
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b720();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b680();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174e010();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  uVar15 = local_90;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar15 != '\0') {
    FUN_00d50b20();
  }
joined_r0x012485b0:
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


