// Function: FUN_012ef510
// Address: 012ef510
// Size: 2841 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012ef88f) */
/* WARNING: Removing unreachable block (ram,0x012ef89b) */
/* WARNING: Removing unreachable block (ram,0x012ef5bf) */
/* WARNING: Removing unreachable block (ram,0x012ef5cb) */
/* WARNING: Removing unreachable block (ram,0x012ef8ad) */
/* WARNING: Removing unreachable block (ram,0x012ef8bd) */
/* WARNING: Removing unreachable block (ram,0x012efb10) */
/* WARNING: Removing unreachable block (ram,0x012ef63d) */
/* WARNING: Removing unreachable block (ram,0x012ef64a) */
/* WARNING: Removing unreachable block (ram,0x012ef925) */
/* WARNING: Removing unreachable block (ram,0x012ef932) */
/* WARNING: Removing unreachable block (ram,0x012efb9b) */
/* WARNING: Removing unreachable block (ram,0x012efba4) */
/* WARNING: Removing unreachable block (ram,0x012efae5) */
/* WARNING: Removing unreachable block (ram,0x012efca0) */
/* WARNING: Removing unreachable block (ram,0x012efcc0) */
/* WARNING: Removing unreachable block (ram,0x012efca2) */
/* WARNING: Removing unreachable block (ram,0x012efcc2) */

void FUN_012ef510(longlong param_1,double param_2,byte param_3,ulonglong param_4)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  ulonglong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_80;
  longlong local_78;
  longlong local_60;
  char local_58;
  int local_48;
  
  if (*unaff_RSI == 0) {
    return;
  }
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    return;
  }
  local_60 = CONCAT44(local_60._4_4_,1);
  lVar2 = local_60;
  lVar5 = param_1;
  local_a8 = param_4;
  local_80 = param_2;
  if (param_4 >> 0x20 == 0) {
LAB_012ef57c:
    pVar8 = (pthread_key_t)lVar5;
    bVar10 = 1;
  }
  else {
    cVar3 = FUN_00e7c630();
    pVar8 = (pthread_key_t)lVar5;
    if (cVar3 == '\0') goto LAB_012ef57c;
    bVar10 = param_3 ^ 1;
  }
  FUN_01266770();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_012e8920();
  lVar5 = local_90;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_78 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_88 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar8 = 1;
  }
  FUN_0125e930();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = FUN_01507970();
  FUN_00e7bac0();
  local_b8 = local_a0;
  local_a0 = param_1;
  FUN_00e7b970();
  lVar5 = local_a0;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 == 0) {
    dVar11 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01259650();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (double)FUN_016c25f0(dVar12);
    dVar13 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar8 = (pthread_key_t)local_78;
    }
    local_80 = (double)FUN_016c26c0(dVar11 + local_80 * dVar13);
    lVar5 = *unaff_RSI;
    if (lVar5 != 0) {
      local_80 = local_80 - dVar12;
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar6 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_48) break;
        lVar9 = *(longlong *)(lVar5 + 0x10);
        local_60 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        FUN_012642b0(dVar11 + local_80);
      }
      FUN_001159b0();
      pVar8 = (pthread_key_t)lVar5;
    }
  }
  else {
    local_148 = local_78;
    local_140 = '\0';
    FUN_00e7c860();
    local_138 = *local_res8;
    local_130 = '\0';
    FUN_012910e0(lVar5,&local_148,&local_138);
    pVar8 = (pthread_key_t)lVar5;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_012e6c30();
  FUN_012e7fb0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_012efc1b;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_012efc1b;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = *unaff_RSI;
  local_120 = '\0';
  FUN_0150ddd0();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012efc1b:
  local_118 = *unaff_RSI;
  local_110 = '\0';
  FUN_0127f8b0();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *unaff_RSI;
  if (lVar5 == 0) {
    local_e8 = 0;
  }
  else {
    local_48 = -1;
    do {
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) goto LAB_012eff5a;
      pVar8 = (pthread_key_t)*(undefined8 *)(lVar5 + 0x10);
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_90 == 0) {
        bVar1 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_a0 == 0) {
          bVar1 = false;
        }
        else {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508530();
          bVar1 = uVar7 >> 0x20 == 0;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    } while (!bVar1);
    bVar10 = 1;
LAB_012eff5a:
    FUN_001159b0();
    local_e8 = *unaff_RSI;
  }
  local_e0 = '\0';
  FUN_012879b0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10 == 0) {
    local_c8 = *unaff_RSI;
    local_c0 = '\0';
    FUN_0152eef0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


