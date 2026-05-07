// Function: FUN_016c11a0
// Address: 016c11a0
// Size: 4191 bytes
// Class: MUAraContentReader


/* WARNING: Removing unreachable block (ram,0x016c1857) */
/* WARNING: Removing unreachable block (ram,0x016c1860) */
/* WARNING: Removing unreachable block (ram,0x016c1968) */
/* WARNING: Removing unreachable block (ram,0x016c1974) */
/* WARNING: Removing unreachable block (ram,0x016c1a5e) */
/* WARNING: Removing unreachable block (ram,0x016c1a67) */
/* WARNING: Removing unreachable block (ram,0x016c1a30) */
/* WARNING: Removing unreachable block (ram,0x016c1a3d) */
/* WARNING: Removing unreachable block (ram,0x016c154b) */
/* WARNING: Removing unreachable block (ram,0x016c1554) */
/* WARNING: Removing unreachable block (ram,0x016c1bb4) */
/* WARNING: Removing unreachable block (ram,0x016c1bbd) */
/* WARNING: Removing unreachable block (ram,0x016c1ab7) */
/* WARNING: Removing unreachable block (ram,0x016c1ae0) */
/* WARNING: Removing unreachable block (ram,0x016c15e7) */
/* WARNING: Removing unreachable block (ram,0x016c1610) */
/* WARNING: Removing unreachable block (ram,0x016c15e9) */
/* WARNING: Removing unreachable block (ram,0x016c1612) */
/* WARNING: Removing unreachable block (ram,0x016c1ab9) */
/* WARNING: Removing unreachable block (ram,0x016c1ae2) */

undefined8 * FUN_016c11a0(double param_1,double param_2,double param_3,double param_4)

{
  pthread_key_t pVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int extraout_var;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *in_RDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  ulonglong local_110;
  double local_e8;
  double local_e0;
  longlong local_d8;
  char local_d0;
  double local_a8;
  longlong local_80;
  char local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  char local_58;
  int local_48;
  double local_38;
  
  puVar2 = local_60;
  if (*in_RDX == 0) {
    local_a8 = DAT_0238fee8;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((param_4 != 0.0 || (NAN(param_4))))) {
      local_a8 = param_2 / param_4;
    }
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = (double)FUN_018fc680(param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_018fc680(param_4 + param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = (double)FUN_018fc680(param_1);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_018fc680(param_2 + param_1);
    uVar13 = -(ulonglong)(dVar16 - local_e0 != 0.0);
    uVar14 = -(ulonglong)(dVar15 - local_e8 != 0.0);
    local_a8 = (double)(~uVar13 & (ulonglong)DAT_0238fee8 |
                       (~uVar14 & (ulonglong)DAT_0238fee8 |
                       (ulonglong)((dVar16 - local_e0) / (dVar15 - local_e8)) & uVar14) & uVar13);
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_60 != (undefined8 *)0x0) {
    local_58 = '\0';
    local_60 = (undefined8 *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)puVar2 + 0xc) <= local_48) break;
      lVar8 = puVar2[2];
      local_60 = *(undefined8 **)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_01907950();
      if (*in_RDX == 0) {
        local_38 = (dVar15 - param_1) / local_a8 + param_3;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_018fc680(dVar15);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = (double)FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_01907b60(local_38);
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_80 = local_d8;
      local_78 = '\0';
      FUN_00d21140();
      if (local_d8 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar10 = puVar2;
    FUN_000beb10();
    pVar9 = (pthread_key_t)puVar10;
  }
  puVar10 = local_60;
  uVar17 = FUN_01907d40();
  local_68 = puVar6;
  if (*in_RDX == 0) goto LAB_016c1f39;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_018fe5d0();
  uVar17 = extraout_XMM0_Qa;
  if (cVar3 != '\0') goto LAB_016c1f39;
  FUN_018f9610();
  if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  pVar1 = (pthread_key_t)local_60;
  if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_016c1a80;
    }
    bVar12 = true;
  }
  else if (local_60 == (undefined8 *)0x0) {
    bVar12 = true;
  }
  else {
LAB_016c1a80:
    local_58 = '\0';
    local_60 = (undefined8 *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)puVar10 + 0xc) <= local_48) break;
      lVar8 = puVar10[2];
      local_60 = *(undefined8 **)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar17 = FUN_01907950();
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = pVar1;
      }
      FUN_019006f0(uVar17,0);
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      dVar15 = (double)FUN_00e7c860();
      FUN_00e7cd00((dVar15 - local_e8) * local_a8 + local_e0);
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_019079b0();
      FUN_00e7b970();
      local_110 = FUN_00e7bdb0();
      if (((local_110 >> 0x20 == 0) || (extraout_var == 0)) ||
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
        dVar15 = (double)FUN_00e7c860();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_01907b60(uVar17);
        if (local_78 == '\0') {
          if (lVar7 != 0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_01902110(uVar17,0);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar12 = local_80 != 0;
      local_80 = lVar7;
      if (bVar12) {
        FUN_00d50b20();
      }
    }
    puVar11 = puVar10;
    FUN_000beb10();
    pVar9 = (pthread_key_t)puVar11;
    bVar12 = false;
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar9 = pVar1;
  }
  uVar17 = FUN_018fbce0();
  local_68 = local_60;
  if (puVar6 == local_60) {
LAB_016c1f06:
    local_68 = puVar6;
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b00();
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b20();
      puVar6 = local_68;
      goto LAB_016c1f06;
    }
  }
  else {
    if (puVar6 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b20();
    }
  }
  if (!bVar12) {
    uVar17 = FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar17 = FUN_00d50b20();
  }
LAB_016c1f39:
  local_130 = 0;
  local_128 = 0;
  FUN_016c2780(uVar17,&local_130);
  if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  puVar6 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar6 = (undefined8 *)local_60[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RSI;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  iVar4 = *(int *)(lVar7 + 0x38);
  if (*(int *)(puVar6 + 7) != iVar4) {
    FUN_00d64850();
    *(int *)(puVar6 + 7) = iVar4;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0165c2e0();
  if (iVar4 < 1) {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar17 = FUN_00e7bdb0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165b8b0(uVar17,4,0);
    pVar9 = (pthread_key_t)uVar17;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = *unaff_RSI;
    local_118 = 0;
    FUN_016c2ef0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165bd00();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c3130();
  *unaff_RDI = local_60;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_68 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


