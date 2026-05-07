// Function: FUN_00beae30
// Address: 00beae30
// Size: 1737 bytes
// Class: GNSimpleXMLElement
// String references:
//   "mcpl!"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00beae30(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  uint uVar8;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_9c;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined1 local_78 [12];
  uint local_6c;
  longlong *local_68;
  longlong *local_60;
  char local_58 [12];
  int local_4c;
  char local_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined7 uStack_3f;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_80 = 0;
  lVar1 = unaff_RDI[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  FUN_00cde020();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = FUN_00e7dde0();
  lVar5 = _CFURLCreateFromFileSystemRepresentation(0,(longlong)iVar4);
  lVar1 = DAT_02765700;
  if (lVar5 == 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar1;
    local_118 = '\x01';
    FUN_00cc78b0();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar4 = _ExtAudioFileOpenURL();
  lVar1 = DAT_02765700;
  if (iVar4 != 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar1;
    local_108 = '\x01';
    FUN_00cc78b0();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  _CFRelease();
  if ((char)unaff_RDI[7] == '\0') {
    local_4c = 0x28;
    iVar4 = _ExtAudioFileGetProperty(&local_148,&local_4c);
    lVar1 = DAT_02765700;
    if (iVar4 != 0) {
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar1;
      local_f8 = '\x01';
      FUN_00cc78b0();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    unaff_RDI[6] = local_148;
    *(undefined4 *)(unaff_RDI + 5) = local_12c;
    local_4c = 8;
    iVar4 = _ExtAudioFileGetProperty(unaff_RDI + 4,&local_4c);
    lVar1 = DAT_02765700;
    if (iVar4 != 0) {
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar1;
      local_e8 = '\x01';
      FUN_00cc78b0();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    local_148 = unaff_RDI[6];
    local_140 = _s_mcpl__023d94a0;
    uStack_138 = _UNK_023d94a8;
    local_130 = 4;
    local_12c = (undefined4)unaff_RDI[5];
    local_128 = 0x20;
    local_4c = 0x28;
    iVar4 = _ExtAudioFileSetProperty(&local_148,0x28);
    lVar1 = DAT_02765700;
    if (iVar4 != 0) {
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      FUN_00cc78b0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = _ExtAudioFileGetProperty(local_78,&local_4c);
    if (iVar4 == 0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      uVar9 = (**(code **)(*plVar6 + 0x18))();
      iVar4 = _AudioFileCountUserData(uVar9,&local_6c);
      if (iVar4 == 0) {
        local_68 = plVar6;
        if (local_6c != 0) {
          uVar8 = 0;
          do {
            iVar4 = _AudioFileGetUserDataSize(&local_4c,uVar8);
            if (iVar4 == 0) {
              local_9c = 0x10;
              iVar4 = _AudioFileGetUserData(&local_9c,uVar8,&local_48);
              if ((iVar4 == 0) &&
                 (auVar2._1_7_ = uStack_47, auVar2[0] = local_48, auVar2[8] = cStack_40,
                 auVar2._9_7_ = uStack_3f, _DAT_02765560 == auVar2)) {
                uVar9 = FUN_00e83010();
                iVar4 = _AudioFileGetUserData(&local_4c,uVar8,uVar9);
                if (iVar4 == 0) {
                  FUN_00c8e480(extraout_XMM0_Qa,local_4c + -0x10);
                  plVar6 = local_60;
                  if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  uVar9 = FUN_00c92170();
                  local_d0 = plVar6;
                  local_c8 = '\0';
                  FUN_00bc0e10(uVar9,&local_d0);
                  plVar3 = local_60;
                  if (local_58[0] == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  else {
                    local_58[0] = '\0';
                  }
                  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar3 != (longlong *)0x0) {
                    local_c0 = plVar3;
                    local_b8 = '\0';
                    uVar9 = (**(code **)(*plVar3 + 0x368))();
                    plVar3 = local_98;
                    if (local_90 == '\0') {
                      if (local_98 != (longlong *)0x0) {
                        uVar9 = FUN_00d50b00();
                      }
                    }
                    else {
                      local_90 = '\0';
                    }
                    local_60 = plVar3;
                    local_58[0] = '\0';
                    FUN_00ca0840(uVar9,&local_60);
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar3 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  if (plVar6 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00e83070();
                break;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_6c);
        }
        plVar6 = local_68;
        FUN_00c9fe20();
        plVar3 = local_60;
        pcVar7 = &local_48;
        if (local_58[0] != '\0') {
          pcVar7 = local_58;
        }
        local_48 = local_58[0];
        *pcVar7 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        if (local_48 != '\0') {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          uVar9 = (**(code **)(*unaff_RDI + 0x3a8))();
          plVar3 = DAT_02765240;
          local_b0 = plVar6;
          local_a8 = '\0';
          if (DAT_02765240 != (longlong *)0x0) {
            uVar9 = FUN_00d50b00();
          }
          local_60 = plVar3;
          local_58[0] = '\0';
          FUN_00ca0840(uVar9,&local_60);
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((cStack_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar6 == (longlong *)0x0) goto LAB_00beb4d9;
      }
      FUN_00d50b20();
    }
  }
LAB_00beb4d9:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


