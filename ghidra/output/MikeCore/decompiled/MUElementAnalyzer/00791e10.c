// Function: FUN_00791e10
// Address: 00791e10
// Size: 2965 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNList"
//   "MUElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x00791fab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00791e10(float param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  int *in_RCX;
  longlong **pplVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *unaff_RSI;
  uint uVar17;
  longlong unaff_RDI;
  undefined4 uVar18;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_a4;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  float local_4c;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = DAT_027296b8;
  local_4c = param_1;
  if ((*unaff_RSI != 0) && (1 < *(int *)(*unaff_RSI + 0xc))) {
    if (DAT_027296b8 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    FUN_00e33de0();
    uVar18 = FUN_00d46dc0(local_4c);
    local_a0 = local_48;
    local_98 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    lVar4 = local_90;
    local_98 = '\x01';
    local_d0 = local_90;
    local_c8 = '\0';
    FUN_00ca0840(uVar18,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x120) != 0) {
      local_c8 = '\0';
      local_d0 = 0;
      local_b8 = 0xffffffff;
      local_b0 = 0;
      local_a4 = 1;
      local_c0 = *(longlong *)(unaff_RDI + 0x120);
LAB_00792038:
      uVar15 = local_b8 & 0xffffffff;
LAB_00792050:
      uVar17 = (int)uVar15 + 1;
      if ((int)uVar17 < *(int *)(local_c0 + 0xc)) goto code_r0x0079205b;
      local_b8 = CONCAT44(local_b8._4_4_,(int)uVar15 + 1);
LAB_0079295c:
      FUN_00097c40();
      iVar14 = local_a4;
      lVar4 = local_90;
      goto joined_r0x0079297f;
    }
    iVar14 = 1;
joined_r0x0079297f:
    if (in_RCX != (int *)0x0) {
      *in_RCX = iVar14;
    }
    local_4c = local_4c / (float)iVar14;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return local_4c;
code_r0x0079205b:
  local_d0 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + (longlong)(int)uVar17 * 8);
  uVar15 = (ulonglong)uVar17;
  if (local_d0 != *param_2) goto code_r0x00792077;
  goto LAB_00792050;
code_r0x00792077:
  local_b8 = CONCAT44(local_b8._4_4_,uVar17);
LAB_0079207d:
  uVar18 = FUN_00e33de0();
  lVar4 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_108 = lVar4;
  local_100 = '\x01';
  FUN_000175c0(uVar18,&local_108);
  plVar1 = local_78;
  FUN_0006e1c0();
  pplVar9 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    pplVar9 = &local_78;
    if (cVar3 == '\0') {
      pplVar9 = (longlong **)&DAT_02802688;
    }
  }
  local_80 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  pVar8 = (pthread_key_t)pplVar9;
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 == (longlong *)0x0) {
    uVar18 = FUN_00e33de0();
    lVar4 = DAT_027295d0;
    if (DAT_027295d0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_f8 = lVar4;
    local_f0 = '\x01';
    FUN_000175c0(uVar18,&local_f8);
    plVar1 = local_78;
    if ((DAT_027048b0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = (longlong **)&DAT_02802688;
      if (cVar3 != '\0') {
        FUN_0006e1c0();
        cVar3 = FUN_00e8da30();
        pplVar9 = &local_78;
        if (cVar3 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_88 = plVar1;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*param_2;
    if ((DAT_026e0c38 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026e0b88 = FUN_000fddb0();
      _DAT_026e0b70 = "MUElementAnalyzer";
      _DAT_026e0b78 = 0x180;
      _DAT_026e0b80 = FUN_000fdd80;
      _DAT_026e0b90 = 0;
      uRam00000000026e0b98 = 0;
      _DAT_026e0ba0 = 0;
      _DAT_026e0c18 = 0;
      uRam00000000026e0c20 = 0;
      _DAT_026e0c28 = 0;
      DAT_026e0c2a = 1;
      _DAT_026e0ba8 = 0;
      uRam00000000026e0bb0 = 0;
      _DAT_026e0bb8 = 0;
      uRam00000000026e0bc0 = 0;
      _DAT_026e0bc8 = 0;
      uRam00000000026e0bd0 = 0;
      _DAT_026e0bd8 = 0;
      uRam00000000026e0be0 = 0;
      _DAT_026e0be8 = 0;
      uRam00000000026e0bf0 = 0;
      _DAT_026e0bf8 = 0;
      uRam00000000026e0c00 = 0;
      _DAT_026e0c08 = 0;
      uRam00000000026e0c10 = 0;
      DAT_026e0c33 = 0;
      _DAT_026e0c2b = 0;
      ___cxa_guard_release();
    }
    plVar10 = &DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar3 == '\0') {
        plVar10 = &DAT_02802688;
      }
    }
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      uVar18 = FUN_013fb420();
      plVar1 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (uVar18 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      iVar14 = 0;
      if (*unaff_RSI != 0) {
        local_70 = '\0';
        local_78 = (longlong *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *unaff_RSI;
        do {
          if (iVar14 != 0) {
            if (iVar14 < 1) {
              iVar14 = -iVar14;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar14);
              FUN_00d23690(uVar18,iVar14);
              local_58 = local_58 + local_60._4_4_;
              iVar14 = 0;
            }
            local_60 = CONCAT44(iVar14,(int)local_60);
          }
          lVar6 = (longlong)(int)local_60;
          iVar14 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar14);
          if (*(int *)(local_68 + 0xc) <= iVar14) {
            iVar14 = 0;
            goto LAB_00792648;
          }
          lVar11 = *(longlong *)(local_68 + 0x10);
          local_78 = *(longlong **)(lVar11 + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar8 = (pthread_key_t)lVar11;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = FUN_012e5ae0();
          iVar14 = *(int *)((longlong)local_48 + 0xc);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          if (iVar14 == 1) {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            FUN_00d23310();
            plVar10 = local_48;
            local_38[0] = local_40[0];
            pcVar12 = local_38;
            pcVar7 = local_40;
            if (local_40[0] == '\0') {
              pcVar7 = pcVar12;
            }
            *pcVar7 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar8 = (pthread_key_t)pcVar12;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01320d00();
            plVar2 = local_48;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar10 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              uVar18 = FUN_00d50b20();
            }
            if (local_128 == plVar2) goto LAB_00792646;
          }
          iVar14 = local_60._4_4_;
        } while( true );
      }
      goto LAB_00792651;
    }
    cVar3 = '\0';
    goto LAB_0079265e;
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_78 = plVar1;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') goto LAB_00792682;
  goto LAB_0079278c;
LAB_00792646:
  iVar14 = 1;
LAB_00792648:
  FUN_000be170();
LAB_00792651:
  cVar3 = (char)iVar14;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0079265e:
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar4 != 0) && (cVar3 != '\0')) {
LAB_00792682:
    lVar4 = local_90;
    uVar18 = FUN_00e33de0();
    local_e8 = lVar4;
    local_e0 = '\0';
    FUN_000175c0(uVar18,&local_e8);
    plVar1 = local_78;
    FUN_00053ac0();
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a4 = local_a4 + 1;
    if (plVar1 != (longlong *)0x0) {
      uVar18 = FUN_00d459e0();
      local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar18);
      FUN_00d50b20();
      local_4c = local_4c + local_88._0_4_;
    }
  }
  if (local_80 != (longlong *)0x0) {
LAB_0079278c:
    FUN_00d50b20();
  }
  iVar14 = local_b8._4_4_;
  iVar13 = local_b8._4_4_;
  if (local_b8._4_4_ == 0) goto LAB_00792038;
  do {
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      if (iVar14 < 1) {
        iVar13 = -iVar14;
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 - iVar14);
        FUN_00d23690();
        local_b0 = local_b0 + iVar13;
        iVar13 = 0;
      }
      local_b8 = CONCAT44(iVar13,(int)local_b8);
      iVar14 = iVar13;
    }
    lVar4 = (longlong)(int)local_b8;
    iVar16 = (int)local_b8 + 1;
    local_b8 = CONCAT44(local_b8._4_4_,iVar16);
    if (*(int *)(local_c0 + 0xc) <= iVar16) goto LAB_0079295c;
    local_d0 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + 8 + lVar4 * 8);
  } while (local_d0 == *param_2);
  goto LAB_0079207d;
}


