// Function: FUN_01bbcdd0
// Address: 01bbcdd0
// Size: 2232 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01bbcdd0(code *param_1,longlong *param_2)

{
  code *pcVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  pthread_key_t pVar10;
  code **ppcVar11;
  code *pcVar12;
  longlong *unaff_RSI;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float extraout_XMM0_Db;
  code *local_130;
  undefined1 local_128;
  undefined8 local_120;
  code *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  code *local_f8;
  char local_f0;
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
  longlong local_98;
  char local_90;
  undefined8 local_88;
  longlong local_70;
  char local_68;
  code *local_60;
  longlong local_58;
  char local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  ppcVar11 = &local_40;
  uVar13 = FUN_01a58dc0();
  pcVar1 = local_40;
  if ((DAT_02732c90 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar5 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = FUN_0034de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    uVar13 = ___cxa_guard_release();
  }
  if (pcVar1 == (code *)0x0) {
LAB_01bbce32:
    ppcVar11 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01bbce32;
  }
  pcVar1 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar1 != (code *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (pcVar1 == (code *)0x0) {
LAB_01bbd09e:
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    local_98 = *param_2;
    local_90 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_98);
    uVar8 = (ulonglong)uVar6;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
LAB_01bbd10d:
    if (pcVar1 == (code *)0x0) goto LAB_01bbd11a;
  }
  else {
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(longlong *)pcVar1))();
    if (cVar4 != '\0') {
      iVar5 = FUN_01d3a5a0();
      uVar13 = extraout_XMM0_Da_00;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_01, iVar5 != 1))
      goto LAB_01bbd09e;
      FUN_01d3abf0();
      local_88 = (code *)FUN_01e466c0();
      local_120 = (**(code **)(*(longlong *)pcVar1 + 0x930))();
      FUN_01e436c0();
      if ((extraout_XMM0_Db < local_88._4_4_) && (local_88._4_4_ < extraout_XMM0_Db + DAT_023908ec))
      {
        local_110 = '\0';
        local_108 = *unaff_RSI;
        local_100 = '\0';
        local_118 = pcVar1;
        uVar13 = FUN_0192ed00((undefined4)local_88);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_60 = (code *)CONCAT71(local_60._1_7_,(char)uVar13);
        if ((local_110 != '\0') && (local_118 != (code *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = CONCAT71((uint7)(uint3)((uint)uVar13 >> 8),1);
        if ((char)local_60 != '\0') goto LAB_01bbd112;
      }
      uVar13 = FUN_01bbc610((undefined4)local_88,local_120);
      pcVar2 = local_40;
      pVar10 = (pthread_key_t)param_1;
      local_60 = (code *)*param_2;
      if (local_60 == local_40) {
        if (((char)param_2[1] == '\0') && (local_40 != (code *)0x0)) {
          param_1 = (code *)(param_2 + 1);
          local_88 = param_1;
          if (local_38 == '\0') {
            uVar13 = FUN_00d50b00();
          }
          goto LAB_01bbd03d;
        }
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_88 = (code *)(param_2 + 1);
        cVar4 = (char)param_2[1];
        if (local_38 == '\0') {
          local_41 = cVar4;
          if (local_40 != (code *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          *param_2 = (longlong)pcVar2;
          if ((local_41 != '\0') && (local_60 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          *param_2 = (longlong)local_40;
          if ((cVar4 != '\0') && (local_60 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
LAB_01bbd03d:
        pVar10 = (pthread_key_t)param_1;
        *local_88 = (code)0x1;
      }
      if (*param_2 == 0) goto LAB_01bbd09e;
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        local_128 = 0;
        local_130 = pcVar1;
        FUN_01bbc300((int)local_120,&local_130);
        pcVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (code *)0x0) {
            FUN_00d50b00();
            goto LAB_01bbd380;
          }
        }
        else if (local_40 != (code *)0x0) {
LAB_01bbd380:
          local_88 = pcVar2;
          (**(code **)(&UNK_00001668 + *(longlong *)pcVar1))();
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = pcVar2;
          local_f0 = '\0';
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e7c0();
          local_70 = local_58;
          local_68 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_68 = '\x01';
          uVar13 = FUN_01367c80(uVar13,&local_70);
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          local_e8 = *param_2;
          local_e0 = '\0';
          (**(code **)(*(longlong *)pcVar1 + 0xab0))(uVar13,&local_e8);
          (**(code **)(*(longlong *)local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)pcVar1 + 0xe20))();
          local_40 = (code *)*param_2;
          local_38 = '\0';
          uVar7 = FUN_00d24090();
          uVar13 = extraout_XMM0_Da_04;
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((char)uVar7 == '\0') {
            local_d8 = *param_2;
            local_d0 = '\0';
            (**(code **)(*(longlong *)pcVar1 + 0xda8))(uVar13,1);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          uVar8 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01bbd112;
        }
        uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        goto LAB_01bbd112;
      }
      (**(code **)(*(longlong *)pcVar1 + 0xe20))();
      local_40 = (code *)*param_2;
      local_38 = '\0';
      cVar4 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        uVar8 = FUN_01d3b590();
        uVar13 = extraout_XMM0_Da_03;
        if ((uVar8 & 4) == 0) {
          uVar13 = (**(code **)(*(longlong *)pcVar1 + 0xda0))();
        }
        local_c8 = *param_2;
        local_c0 = '\0';
        (**(code **)(*(longlong *)pcVar1 + 0xda8))(uVar13,1);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar8 = FUN_01d3b590();
        if ((uVar8 & 4) != 0) {
          local_b8 = *param_2;
          local_b0 = '\0';
          (**(code **)(*(longlong *)pcVar1 + 0xdb0))(extraout_XMM0_Da_02,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*(longlong *)pcVar1 + 0xeb0))();
      do {
        (**(code **)(*(longlong *)pcVar1 + 0x658))();
        pcVar12 = local_40;
        pcVar2 = (code *)*unaff_RSI;
        if (pcVar2 == local_40) {
          if (((char)unaff_RSI[1] == '\0') && (local_40 != (code *)0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bbd30f;
            }
LAB_01bbd2cd:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_38 = '\0';
          }
          lVar3 = *unaff_RSI;
        }
        else {
          lVar3 = unaff_RSI[1];
          if (local_38 != '\0') {
            *unaff_RSI = (longlong)local_40;
            if (((char)lVar3 != '\0') && (pcVar2 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01bbd2cd;
          }
          if (local_40 != (code *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)pcVar12;
          if (((char)lVar3 != '\0') && (pcVar2 != (code *)0x0)) {
            FUN_00d50b20();
          }
LAB_01bbd30f:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar3 = *unaff_RSI;
        }
        if (lVar3 == 0) {
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          break;
        }
        uVar6 = FUN_01d3a5a0();
        pcVar12 = (code *)(ulonglong)uVar6;
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
      } while (uVar6 != 6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar12 >> 8),1);
      (**(code **)(*(longlong *)pcVar1 + 0xeb0))();
      goto LAB_01bbd10d;
    }
    uVar8 = 0;
  }
LAB_01bbd112:
  FUN_00d50b20();
LAB_01bbd11a:
  return uVar8 & 0xffffffff;
}


