// Function: FUN_018165c0
// Address: 018165c0
// Size: 1547 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x018169ba) */
/* WARNING: Removing unreachable block (ram,0x01816abd) */
/* WARNING: Removing unreachable block (ram,0x01816aca) */
/* WARNING: Removing unreachable block (ram,0x01816a80) */
/* WARNING: Removing unreachable block (ram,0x01816a8d) */

void FUN_018165c0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  bool bVar10;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 *local_110;
  undefined1 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8;
  code *local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_017e1dd0();
  pcVar8 = local_38;
  if (local_60[0] != '\0') {
    pcVar8 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar8 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1d40();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = local_68;
  if (*(int *)(unaff_RDI + 0x48) == 2) {
    FUN_017e1a60();
    iVar1 = FUN_017154c0();
    FUN_017e1a60();
    iVar2 = FUN_01715480();
    bVar10 = true;
    if (iVar1 == iVar2) {
      FUN_017e1bf0();
      iVar1 = FUN_017154c0();
      FUN_017e1bf0();
      iVar2 = FUN_01715480();
      bVar10 = iVar1 != iVar2;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar10) && (iVar1 = FUN_017154c0(), local_68 != 0)) {
      local_40 = local_68;
      local_60[0] = '\0';
      local_58 = local_68;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar2 = 0x7fffffff;
      bVar10 = false;
      while( true ) {
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (*(int *)(local_58 + 0xc) <= iVar7) break;
        pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_58 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_017dca70();
        iVar6 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
        if ((iVar6 >> 0x1f & 0xcU) + iVar6 != iVar1) {
          bVar10 = true;
          iVar7 = iVar2;
        }
        iVar2 = iVar7;
        if (local_50._4_4_ != 0) {
          if (local_50 < 0) {
            iVar7 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
      }
      FUN_01916320();
      lVar9 = local_40;
      if (bVar10) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        local_f0 = DAT_02572370;
        (*DAT_02572370)();
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*local_f0)();
        local_60[0] = '\0';
        local_58 = local_68;
        local_50 = 0xffffffff;
        local_48 = 0;
        while( true ) {
          iVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar1);
          if (*(int *)(local_58 + 0xc) <= iVar1) break;
          pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_58 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar1 = FUN_017dca70();
          if (iVar1 == iVar2) {
            FUN_00d21140();
          }
          else {
            FUN_00d21140();
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar1 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar1 = 0;
            }
            local_50 = CONCAT44(iVar1,(int)local_50);
          }
        }
        FUN_01916320();
        local_c8 = *unaff_RSI;
        local_c0 = '\0';
        local_118 = 0;
        local_120 = puVar3;
        FUN_01816ee0(*(undefined4 *)(unaff_RDI + 0x48),&local_120,*(undefined4 *)(unaff_RDI + 0x4c),
                     0xffffffff);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *unaff_RSI;
        local_b0 = '\0';
        local_108 = 0;
        local_110 = puVar4;
        FUN_01816ee0(1,&local_110,1,0);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_018168ff;
      }
    }
  }
  local_a8 = *unaff_RSI;
  local_a0 = '\0';
  local_f8 = 0;
  FUN_01816ee0(*(undefined4 *)(unaff_RDI + 0x48),local_100,*(undefined4 *)(unaff_RDI + 0x4c),0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_018168ff:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  return;
}


