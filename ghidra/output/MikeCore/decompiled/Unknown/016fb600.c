// Function: FUN_016fb600
// Address: 016fb600
// Size: 2397 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fb600(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined7 uVar11;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  pthread_key_t pVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  ulonglong uVar17;
  undefined1 uVar18;
  ulonglong local_128;
  undefined1 local_120;
  ulonglong local_118;
  undefined1 local_110;
  ulonglong local_108;
  undefined1 local_100;
  ulonglong local_f8;
  undefined1 local_f0;
  ulonglong local_e8;
  undefined1 local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  undefined1 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  undefined8 local_40;
  char local_38 [8];
  
  local_98 = param_1;
  local_70 = param_2;
  FUN_016d53b0();
  local_78 = local_40;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_90 = *unaff_RSI;
  local_88 = '\0';
  FUN_016faeb0();
  local_48 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = (undefined7)(local_48 >> 8);
  if (*(int *)(local_48 + 0xc) < 1) {
    local_64 = (undefined4)CONCAT71(uVar11,1);
  }
  else {
    local_64 = (undefined4)CONCAT71(uVar11,1);
    lVar15 = 0;
    do {
      uVar10 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + lVar15 * 8);
      uVar13 = local_48;
      if (uVar10 != 0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = uVar10;
      cVar4 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        if (**(ulonglong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10) == uVar10) {
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = FUN_01909dc0();
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60 = FUN_0165be20();
          if ((local_58._4_4_ != 0) && (local_60 >> 0x20 != 0)) {
            cVar4 = FUN_00e7c020();
            if (cVar4 == '\0') {
              if (((local_58._4_4_ != 0) && (local_60._4_4_ != 0)) &&
                 (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
                local_40 = FUN_016cbad0();
                uVar16 = FUN_00e7c2a0();
                local_80 = local_40;
                local_40 = local_60;
                if (local_60 >> 0x20 != 0) {
                  do {
                    if ((local_58._4_4_ == 0) ||
                       (cVar4 = FUN_00e7c020(), uVar16 = extraout_XMM0_Da_04, cVar4 == '\0')) break;
                    uVar16 = FUN_00e7b970();
                  } while (local_40._4_4_ != 0);
                }
                FUN_016da710(uVar16,local_40);
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                local_64 = 0;
              }
            }
            else {
              FUN_016da710(extraout_XMM0_Da_03,local_60);
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        local_40 = FUN_00e7bcc0();
        pVar12 = (pthread_key_t)uVar13;
        if ((local_70._4_4_ != 0) && (local_40 >> 0x20 != 0)) {
          cVar4 = FUN_00e7c000();
          pVar12 = (pthread_key_t)uVar13;
          if (cVar4 != '\0') {
            uVar18 = 0;
            uVar17 = uVar10;
            uVar6 = FUN_016f51d0();
            while (pVar12 = (pthread_key_t)uVar13, uVar6 >> 0x20 != 0) {
              uVar16 = FUN_00e7bdb0();
              local_40 = FUN_00e7c8b0(uVar16,1,param_3,param_4,uVar17,uVar18);
              local_58 = local_58 & 0xffffffff00000000;
              uVar16 = extraout_XMM0_Da;
              if (local_40 >> 0x20 != 0) {
                cVar4 = FUN_00e7c630();
                pVar12 = (pthread_key_t)uVar13;
                uVar16 = extraout_XMM0_Da_00;
                if (cVar4 != '\0') break;
              }
              local_120 = 0;
              local_128 = uVar10;
              FUN_016ebbb0(uVar16,&local_128);
              uVar3 = local_40;
              if ((local_38[0] == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              local_118 = uVar3;
              local_110 = 0;
              local_40 = FUN_016f51d0();
              uVar16 = extraout_XMM0_Da_01;
              if (local_40 >> 0x20 == 0) {
LAB_016fb859:
                local_f8 = uVar3;
                local_f0 = 0;
                FUN_016fc1e0(uVar16,1);
              }
              else {
                local_58 = CONCAT44(local_58._4_4_,3);
                cVar4 = FUN_00e7c6b0();
                uVar16 = extraout_XMM0_Da_02;
                if (cVar4 != '\0') goto LAB_016fb859;
                local_108 = uVar3;
                local_100 = 0;
                FUN_016d7fb0(extraout_XMM0_Da_02,1);
              }
              uVar6 = local_40;
              if (uVar3 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_0190a000();
        FUN_00e7bdc0();
        local_58 = local_40;
        iVar5 = (int)(local_40 >> 0x20);
        if (iVar5 == 2) {
          local_40 = 0x200000002;
          FUN_00e7c2a0();
          iVar5 = local_58._4_4_;
        }
        if ((iVar5 != 1) && (local_98 >> 0x20 != 0)) {
          local_58 = local_98;
        }
        local_e0 = 0;
        local_e8 = uVar10;
        FUN_016f5b80(local_58);
      }
      if (uVar10 != 0) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      param_1 = local_48;
    } while (lVar15 < *(int *)(local_48 + 0xc));
  }
  pVar12 = (pthread_key_t)param_1;
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  uVar16 = extraout_XMM0_Da_05;
  if ((cVar4 == '\0') && (*(int *)(local_48 + 0xc) != 0)) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025fa538;
    uVar2 = _UNK_0239372c;
    uVar1 = _UNK_02393728;
    uVar16 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar8 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar8 + 2) = uVar16;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar1;
    *(undefined4 *)(puVar8 + 3) = uVar2;
    FUN_00d500e0();
    uVar9 = FUN_00e7bdb0();
    *(undefined8 *)((longlong)puVar8 + 0x14) = uVar9;
    *(undefined8 *)((longlong)puVar8 + 0xc) = uVar9;
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0165cf20(0,0);
    local_40 = uVar10;
    local_58 = FUN_00e7bdb0();
    uVar13 = uVar10 >> 0x20;
    if (((uVar13 != 0) && (local_58 >> 0x20 != 0)) &&
       (cVar4 = FUN_00e7c000(), uVar10 = local_40, cVar4 != '\0')) {
      uVar10 = FUN_00e7bdb0();
    }
    *(ulonglong *)((longlong)puVar8 + 0xc) = uVar10;
    uVar16 = FUN_00d23340();
    uVar10 = local_40;
    pVar12 = (pthread_key_t)CONCAT71((int7)(uVar13 >> 8),local_38[0]);
    pcVar14 = (char *)&local_60;
    if (local_38[0] != '\0') {
      pcVar14 = local_38;
    }
    local_60 = CONCAT71(local_60._1_7_,local_38[0]);
    *pcVar14 = '\0';
    if ((local_38[0] != '\0') && (uVar10 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_60 == '\0') && (uVar10 != 0)) {
      uVar16 = FUN_00d50b00();
    }
    local_a8 = uVar10;
    local_a0 = 1;
    FUN_016ebbb0(uVar16,&local_a8);
    uVar13 = local_58;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if (uVar13 == 0) {
      uVar10 = FUN_00e7bdb0();
    }
    else {
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_0165cf20(0,0);
      local_80 = CONCAT44(local_80._4_4_,2);
      FUN_00e7c260();
      uVar10 = local_40;
      local_58 = local_40;
      local_40 = FUN_00e7bdb0();
      if (((uVar10 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
         (cVar4 = FUN_00e7c000(), uVar10 = local_58, cVar4 == '\0')) {
        local_60 = CONCAT44(local_60._4_4_,1);
        local_40 = uVar10;
        FUN_00e7c260();
        uVar10 = local_40;
      }
      else {
        uVar10 = FUN_00e7bdb0();
      }
    }
    *(ulonglong *)((longlong)puVar8 + 0x14) = uVar10;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    pVar12 = 0;
    local_d8 = puVar8;
    FUN_016dcbf0(0,&local_c8);
    FUN_016d63b0();
    if (uVar13 != 0) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
  }
  if (local_78 != 0) {
    local_b8 = local_78;
    local_b0 = 0;
    FUN_016d6df0(uVar16,(byte)local_64 & 1);
  }
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  FUN_00d50b20();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return;
}


