// Function: FUN_01511080
// Address: 01511080
// Size: 3077 bytes
// Class: MUPercussivePitchSystem


undefined8 FUN_01511080(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  pthread_key_t pVar11;
  undefined8 uVar13;
  char *pcVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  uint local_5c;
  longlong *local_58;
  longlong *local_50;
  int local_44;
  char local_38 [8];
  ulonglong uVar12;
  
  lVar8 = *unaff_RSI;
  if (lVar8 == 0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x78) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 0;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x78);
  }
  if (lVar8 == 0) {
    return 0;
  }
  FUN_00d50b00();
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511220;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    if (*(longlong *)(lVar7 + 0x80) != 0) goto LAB_0151120c;
LAB_01511220:
    bVar1 = true;
  }
  else {
    if (*(longlong *)(lVar8 + 0x80) == 0) goto LAB_01511220;
LAB_0151120c:
    FUN_00d50b00();
    FUN_00d50b20();
    bVar1 = false;
  }
  FUN_00d50b20();
  if (bVar1) {
    return 0;
  }
  plVar16 = (longlong *)(unaff_RDI + 0x78);
  lVar8 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return 1;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x78) == 0);
    lVar8 = *(longlong *)(lVar7 + 0x78);
  }
  else {
    lVar8 = *plVar16;
  }
  if (lVar8 == 0) {
    return 1;
  }
  FUN_00d50b00();
  plVar17 = (longlong *)(unaff_RDI + 0x80);
  lVar8 = unaff_RDI;
  plVar15 = plVar17;
  local_50 = plVar16;
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01511378;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    plVar15 = (longlong *)(lVar7 + 0x80);
  }
  if (*plVar15 == 0) {
LAB_01511378:
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    bVar1 = false;
  }
  FUN_00d50b20();
  if (bVar1) {
    return 1;
  }
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x78) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        local_60 = 1;
        goto LAB_015113e4;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x78) == 0);
    lVar7 = *(longlong *)(lVar9 + 0x78);
  }
  else {
    lVar7 = *(longlong *)(lVar8 + 0x78);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_60 = 0;
LAB_015113e4:
  local_78 = lVar7;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_44 = FUN_018232b0();
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    local_58 = (longlong *)0x0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        goto LAB_0151156e;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x80) == 0);
    plVar16 = *(longlong **)(lVar9 + 0x80);
  }
  else {
    plVar16 = *(longlong **)(lVar8 + 0x80);
  }
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar12 = 0;
  local_58 = plVar16;
LAB_0151156e:
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  plVar16 = local_50;
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = local_58;
  }
  iVar3 = FUN_0124ae30();
  if (local_44 == iVar3) {
    local_5c = (uint)uVar12;
    if (*plVar16 == 0) {
      local_50 = (longlong *)0x0;
      lVar8 = unaff_RDI;
      do {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        if (lVar7 == 0) {
          local_44 = 1;
          goto LAB_01511635;
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar7;
      } while (*(longlong *)(lVar8 + 0x78) == 0);
      plVar16 = (longlong *)(lVar8 + 0x78);
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_44 = 0;
    local_50 = plVar16;
LAB_01511635:
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = local_50;
    }
    FUN_018232b0();
    pVar11 = (pthread_key_t)param_1;
    plVar16 = plVar17;
    if (*plVar17 == 0) {
      lVar8 = 0;
      lVar7 = unaff_RDI;
      do {
        pVar11 = (pthread_key_t)param_1;
        lVar9 = *(longlong *)(lVar7 + 0x50);
        if (lVar9 == 0) {
          bVar1 = true;
          goto LAB_015116e3;
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (pthread_key_t)param_1;
        lVar7 = lVar9;
      } while (*(longlong *)(lVar9 + 0x80) == 0);
      plVar16 = (longlong *)(lVar9 + 0x80);
    }
    lVar8 = *plVar16;
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar1 = false;
LAB_015116e3:
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124ae30();
    if (!bVar1 && lVar8 != 0) {
      FUN_00d50b20();
    }
    uVar12 = (ulonglong)local_5c;
    if ((char)local_44 == '\0' && local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar12 == '\0' && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  bVar10 = (byte)local_60 | local_78 == 0;
  uVar12 = (ulonglong)CONCAT31((int3)((uint)local_60 >> 8),bVar10);
  if (bVar10 == 0) {
    FUN_00d50b20();
  }
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        goto LAB_015117c1;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar9;
    } while (*(longlong *)(lVar9 + 0x80) == 0);
    lVar7 = *(longlong *)(lVar9 + 0x80);
  }
  else {
    lVar7 = *(longlong *)(lVar8 + 0x80);
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_015117c1:
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_0124ae30();
  if (!bVar1 && lVar7 != 0) {
    FUN_00d50b20();
  }
  if (*plVar17 == 0) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar7 == 0) {
        bVar1 = true;
        goto LAB_01511903;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(unaff_RDI + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      unaff_RDI = lVar7;
    } while (*(longlong *)(unaff_RDI + 0x80) == 0);
    plVar17 = (longlong *)(unaff_RDI + 0x80);
  }
  lVar8 = *plVar17;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_01511903:
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_0124ae30();
  if (!bVar1 && lVar8 != 0) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar5 == 0) {
    return 1;
  }
  if ((uVar5 & 0xfffffffe) == 2) {
    return 0;
  }
  if ((uVar4 & 0xfffffffe) == 2) {
    return 1;
  }
  FUN_0150d890();
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 == 0) {
    return 1;
  }
  FUN_0150d890();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  uVar13 = CONCAT71((int7)(uVar12 >> 8),local_a8[0]);
  pcVar14 = local_38;
  if (local_a8[0] != '\0') {
    pcVar14 = local_a8;
  }
  local_38[0] = local_a8[0];
  *pcVar14 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  lVar8 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    lVar7 = 0;
    bVar1 = false;
  }
  else {
    local_a8[0] = '\0';
    local_a0 = lVar8;
    local_90 = 0;
    local_98 = 0;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar2 = false;
      lVar7 = 0;
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      bVar1 = false;
      lVar7 = 0;
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        lVar9 = local_70;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01511c05;
          }
        }
        else if (local_70 != 0) {
LAB_01511c05:
          if (lVar7 == 0) {
            FUN_00d50b00();
            bVar1 = true;
            lVar7 = lVar9;
          }
          FUN_00d50b20();
          if (lVar9 != lVar7) {
            bVar2 = true;
            goto LAB_01511c7e;
          }
        }
        iVar3 = iVar3 + 1;
        local_98 = CONCAT44(local_98._4_4_,iVar3);
      } while (iVar3 < *(int *)(lVar8 + 0xc));
      bVar2 = false;
    }
LAB_01511c7e:
    FUN_001159b0();
    if (bVar2) {
      bVar2 = false;
      goto LAB_01511c94;
    }
  }
  bVar2 = true;
LAB_01511c94:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return 0;
  }
  return 1;
}


