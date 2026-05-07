// Function: FUN_0152ad10
// Address: 0152ad10
// Size: 1937 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x0152b12c) */
/* WARNING: Removing unreachable block (ram,0x0152b138) */
/* WARNING: Removing unreachable block (ram,0x0152b146) */
/* WARNING: Removing unreachable block (ram,0x0152b152) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0152ad10(void)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  void *pvVar8;
  char *pcVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  longlong unaff_RDI;
  int iVar15;
  double dVar16;
  double dVar17;
  longlong local_b0;
  char local_a8 [12];
  int local_9c;
  char *local_98;
  char local_90 [8];
  char *local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  char *local_70;
  longlong local_68;
  char local_60;
  char *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0x54) != '\0') {
    return;
  }
  FUN_004f2260(0);
  pcVar3 = local_98;
  if ((((local_90[0] == '\0') && (local_98 != (char *)0x0)) && (FUN_00d50b00(), local_90[0] != '\0')
      ) && (local_98 != (char *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0025e9a0();
  local_70 = local_98;
  if (((local_90[0] == '\0') && (local_98 != (char *)0x0)) &&
     ((FUN_00d50b00(), local_90[0] != '\0' && (local_98 != (char *)0x0)))) {
    FUN_00d50b20();
  }
  local_90[0] = '\0';
  local_98 = (char *)0x0;
  local_88 = pcVar3;
  local_80 = -1;
  iStack_7c = 0;
  local_78 = 0;
  local_9c = 1;
  iVar15 = 0;
  while( true ) {
    if (iStack_7c != 0) {
      if (iStack_7c < 1) {
        iStack_7c = -iStack_7c;
      }
      else {
        local_80 = local_80 - iStack_7c;
        FUN_00d23690();
        local_78 = local_78 + iStack_7c;
        iStack_7c = 0;
      }
    }
    lVar7 = (longlong)local_80;
    local_80 = local_80 + 1;
    if (*(int *)(local_88 + 0xc) <= local_80) break;
    pcVar12 = *(char **)(local_88 + 0x10);
    local_98 = *(char **)(pcVar12 + lVar7 * 8 + 8);
    if (local_9c == 1) {
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126eaa0();
      lVar7 = local_68;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_9c = 2 - (uint)(lVar7 == 0);
    }
    bVar4 = true;
    do {
      bVar5 = bVar4;
      if (local_70 != (char *)0x0) {
        local_60 = 0;
        local_68 = 0;
        local_58 = local_70;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if ((int)local_50._4_4_ < 1) {
              iVar14 = -local_50._4_4_;
            }
            else {
              iVar14 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar14);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar14 = 0;
            }
            local_50 = CONCAT44(iVar14,(int)local_50);
          }
          lVar7 = (longlong)(int)local_50;
          iVar14 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar14);
          if (*(int *)(local_58 + 0xc) <= iVar14) {
            lVar7 = 0;
            pcVar12 = local_58;
            goto LAB_0152af22;
          }
          local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_40[0] = local_a8[0];
          pcVar12 = local_40;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar1 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)pcVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_38[0] = local_a8[0];
          pcVar12 = local_38;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar2 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if (((lVar1 != 0) && (lVar2 != 0)) &&
             (cVar6 = FUN_012a7870(), lVar7 = local_68, cVar6 != '\0')) break;
          if ((local_38[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
LAB_0152af22:
        FUN_001159b0();
        pVar11 = (pthread_key_t)pcVar12;
        if (lVar7 != 0) {
          local_60 = '\0';
          local_68 = lVar7;
          FUN_00d23f50();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          break;
        }
      }
      pVar11 = (pthread_key_t)pcVar12;
      bVar4 = false;
    } while (bVar5);
    local_68 = (longlong)local_98;
    local_60 = '\0';
    FUN_00d21140();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (iVar15 < *(int *)(local_70 + 0xc)) {
      iVar15 = *(int *)(local_70 + 0xc);
    }
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    local_60 = '\0';
    local_68 = 0;
    local_58 = local_70;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar13 = 0;
    while( true ) {
      if (uVar13 != 0) {
        if ((int)uVar13 < 1) {
          iVar14 = -uVar13;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar14 = 0;
        }
        local_50 = CONCAT44(iVar14,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar14 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar14);
      if (*(int *)(local_58 + 0xc) <= iVar14) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_01259520();
      uVar13 = local_50._4_4_;
      if (dVar17 + _DAT_02423ba0 < dVar16) {
        uVar13 = ~local_50._4_4_;
        local_50 = CONCAT44(uVar13,(int)local_50);
      }
    }
    FUN_001159b0();
  }
  pcVar12 = local_88;
  FUN_001159b0();
  pVar11 = (pthread_key_t)pcVar12;
  FUN_00d64850();
  *(undefined1 *)(unaff_RDI + 0x54) = 1;
  FUN_00d64910();
  iVar15 = iVar15 * local_9c * 2;
  if (*(int *)(unaff_RDI + 0x50) == iVar15) goto LAB_0152b4b5;
  FUN_00d64850();
  *(int *)(unaff_RDI + 0x50) = iVar15;
  FUN_00d64910();
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152a4a0();
  }
  FUN_00d23310();
  pcVar12 = local_98;
  plVar10 = (longlong *)local_90;
  if (local_90[0] == '\0') {
    plVar10 = &local_b0;
  }
  local_b0._0_1_ = local_90[0];
  *(undefined1 *)plVar10 = 0;
  if ((local_90[0] != '\0') && (pcVar12 != (char *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = CONCAT71(local_68._1_7_,(char)local_b0 != '\0');
  plVar10 = &local_b0;
  if ((char)local_b0 == '\0') {
    plVar10 = &local_68;
  }
  *(undefined1 *)plVar10 = 0;
  if ((char)local_b0 == '\0') {
    if (((char)local_68 == '\0') || (pcVar12 == (char *)0x0)) goto LAB_0152b4b5;
  }
  else {
    if (pcVar12 == (char *)0x0) goto LAB_0152b4b5;
    FUN_00d50b20();
    if ((char)local_68 == '\0') goto LAB_0152b4b5;
  }
  FUN_00d50b20();
LAB_0152b4b5:
  if (local_70 != (char *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar3 != (char *)0x0) {
    FUN_00d50b20();
  }
  return;
}


