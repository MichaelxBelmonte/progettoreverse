// Function: FUN_01313b30
// Address: 01313b30
// Size: 4588 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01314b4b) */
/* WARNING: Removing unreachable block (ram,0x01314b57) */
/* WARNING: Removing unreachable block (ram,0x013149f7) */
/* WARNING: Removing unreachable block (ram,0x01314a03) */
/* WARNING: Removing unreachable block (ram,0x013147b2) */
/* WARNING: Removing unreachable block (ram,0x013147be) */
/* WARNING: Removing unreachable block (ram,0x0131449f) */
/* WARNING: Removing unreachable block (ram,0x013144af) */
/* WARNING: Removing unreachable block (ram,0x0131433f) */
/* WARNING: Removing unreachable block (ram,0x01314348) */
/* WARNING: Removing unreachable block (ram,0x0131441a) */
/* WARNING: Removing unreachable block (ram,0x01314426) */
/* WARNING: Removing unreachable block (ram,0x013146f2) */
/* WARNING: Removing unreachable block (ram,0x013146fe) */
/* WARNING: Removing unreachable block (ram,0x013148ae) */
/* WARNING: Removing unreachable block (ram,0x013148ba) */
/* WARNING: Removing unreachable block (ram,0x01314a6f) */
/* WARNING: Removing unreachable block (ram,0x01314a7b) */
/* WARNING: Removing unreachable block (ram,0x01314b65) */
/* WARNING: Removing unreachable block (ram,0x01314b71) */
/* WARNING: Removing unreachable block (ram,0x01314648) */
/* WARNING: Removing unreachable block (ram,0x01314651) */
/* WARNING: Removing unreachable block (ram,0x01313f1b) */
/* WARNING: Removing unreachable block (ram,0x01313f24) */
/* WARNING: Removing unreachable block (ram,0x01313d9a) */
/* WARNING: Removing unreachable block (ram,0x01313da3) */
/* WARNING: Removing unreachable block (ram,0x01313f8a) */
/* WARNING: Removing unreachable block (ram,0x01313f97) */
/* WARNING: Removing unreachable block (ram,0x01313fbd) */
/* WARNING: Removing unreachable block (ram,0x01313fca) */
/* WARNING: Removing unreachable block (ram,0x013145d7) */
/* WARNING: Removing unreachable block (ram,0x013145e0) */
/* WARNING: Removing unreachable block (ram,0x0131483a) */
/* WARNING: Removing unreachable block (ram,0x01314846) */
/* WARNING: Removing unreachable block (ram,0x0131451c) */
/* WARNING: Removing unreachable block (ram,0x01314540) */
/* WARNING: Removing unreachable block (ram,0x01314287) */
/* WARNING: Removing unreachable block (ram,0x013142b0) */
/* WARNING: Removing unreachable block (ram,0x01313cc7) */
/* WARNING: Removing unreachable block (ram,0x01313cf0) */
/* WARNING: Removing unreachable block (ram,0x01313cc9) */
/* WARNING: Removing unreachable block (ram,0x01313cf2) */
/* WARNING: Removing unreachable block (ram,0x01314289) */
/* WARNING: Removing unreachable block (ram,0x013142b2) */
/* WARNING: Removing unreachable block (ram,0x0131451e) */
/* WARNING: Removing unreachable block (ram,0x01314542) */

void FUN_01313b30(double param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong *in_RCX;
  ulonglong uVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar13;
  byte local_res8;
  longlong *local_res10;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_40;
  char local_38;
  
  lVar4 = local_70;
  local_e0 = param_1;
  local_d8 = param_4;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar11 = 0x2572358;
  *puVar6 = &DAT_02572358;
  local_b0 = puVar6;
  (*DAT_02572370)();
  local_e8 = param_2;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = local_40;
  FUN_00243390();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar8 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_58) break;
      local_70 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar8 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar4 + 0x10));
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      local_40 = local_c0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_38 = '\0';
      FUN_00d235a0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar8 = lVar4;
    FUN_001159b0();
    pVar11 = (pthread_key_t)lVar8;
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar10 = *unaff_RSI;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  pVar1 = (pthread_key_t)lVar8;
  if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar11 = pVar1;
  }
  FUN_012caf10();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (*in_RCX == 0) {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar11 = pVar1;
    }
    FUN_012cb110();
    lVar10 = *in_RCX;
    if (lVar10 == local_70) {
      if (((char)in_RCX[1] != '\0') || (local_70 == 0)) goto LAB_01314072;
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_0131406e;
      }
    }
    else {
      lVar9 = in_RCX[1];
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        *in_RCX = local_70;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_0131406e:
        *(undefined1 *)(in_RCX + 1) = 1;
LAB_01314072:
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01314086;
      }
      *in_RCX = local_70;
      if (((char)lVar9 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(in_RCX + 1) = 1;
  }
LAB_01314086:
  if (*param_3 != 0) goto LAB_01314182;
  pvVar7 = _pthread_getspecific(pVar11);
  if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar11 = (pthread_key_t)lVar2;
  }
  FUN_015058d0();
  lVar10 = *param_3;
  if (lVar10 == local_70) {
    if (((char)param_3[1] != '\0') || (local_70 == 0)) goto LAB_0131416e;
    if (local_68 == '\0') {
      FUN_00d50b00();
      goto LAB_0131416a;
    }
  }
  else {
    lVar9 = param_3[1];
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_70;
      if (((char)lVar9 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_0131416a:
      *(undefined1 *)(param_3 + 1) = 1;
LAB_0131416e:
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01314182;
    }
    *param_3 = local_70;
    if (((char)lVar9 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(param_3 + 1) = 1;
LAB_01314182:
  puVar6 = local_b0;
  if (local_d8._4_4_ != 0) {
    if (local_res8 == 0) {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7bdb0();
      pVar11 = 0;
      local_e0 = (double)FUN_016c46a0();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (pthread_key_t)local_70;
      }
      dVar13 = (double)FUN_016c98e0();
      local_e0 = dVar13 - local_e0;
      puVar6 = local_b0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (pthread_key_t)local_70;
      }
      FUN_00e7bdb0();
      FUN_016c4760();
      FUN_00e7b970();
      puVar6 = local_b0;
    }
  }
  local_b0 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    local_58 = -1;
    while( true ) {
      lVar10 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)puVar6 + 0xc) <= local_58) break;
      lVar9 = puVar6[2];
      local_40 = *(longlong *)(lVar9 + 8 + lVar10 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
      pVar11 = (pthread_key_t)lVar9;
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = pVar1;
      }
      FUN_012cb480();
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        lVar10 = *unaff_RSI;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *unaff_RSI;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
        }
        lVar10 = *(longlong *)(lVar10 + 0x38);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb5e0();
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb4b0();
      }
    }
    FUN_00115e00();
    pVar11 = (pthread_key_t)puVar6;
  }
  if (lVar4 != 0) {
    local_58 = -1;
    while (local_58 = local_58 + 1, local_58 < *(int *)(lVar4 + 0xc)) {
      pVar11 = (pthread_key_t)*(undefined8 *)(lVar4 + 0x10);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_013145f0;
        }
LAB_013148e0:
        bVar3 = true;
      }
      else {
        if (local_40 == 0) goto LAB_013148e0;
LAB_013145f0:
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150da40();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d560();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d3a0();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d720();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        bVar3 = false;
      }
      if ((byte)(local_d8._4_4_ == 0 | local_res8 ^ 1) == 1) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125a280();
        FUN_012642b0(dVar13 + local_e0);
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
    }
    lVar10 = lVar4;
    FUN_001159b0();
    pVar11 = (pthread_key_t)lVar10;
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  if ((local_d8 >> 0x20 == 0) || (local_res8 == 0)) {
    local_128 = lVar4;
    local_120 = '\0';
    uVar12 = local_d8;
    FUN_00e7bdb0();
    pVar11 = (pthread_key_t)uVar12;
    FUN_01287c80();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_148 = local_70;
    local_140 = '\0';
    local_138 = 0;
    local_130 = '\0';
    uVar12 = local_d8;
    FUN_012910e0(DAT_0238fee8,&local_148,&local_138);
    pVar11 = (pthread_key_t)uVar12;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = *local_res10;
  local_110 = '\0';
  local_108 = (longlong *)0x0;
  local_100 = '\0';
  local_f8 = (longlong *)0x0;
  local_f0 = '\0';
  FUN_012cc0c0(&local_f8,&local_108,1,0);
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    (**(code **)(*local_f8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


