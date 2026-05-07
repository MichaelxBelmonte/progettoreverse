// Function: FUN_00241d80
// Address: 00241d80
// Size: 3411 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.B"


ulonglong FUN_00241d80(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  int iVar10;
  ulonglong uVar11;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  uint local_88 [2];
  longlong local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  char local_40 [8];
  
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar8 = local_90;
  if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar8 = local_90;
    local_60 = CONCAT71(local_60._1_7_,(char)local_88[0]);
    puVar2 = (uint *)&local_60;
    if ((char)local_88[0] != '\0') {
      puVar2 = local_88;
    }
    *(undefined1 *)puVar2 = 0;
    if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_00241e44:
      FUN_00d50b00();
    }
    else if ((char)local_60 == '\0') goto LAB_00241e44;
    local_a0 = CONCAT44(local_a0._4_4_,param_2);
    (**(code **)(*plVar8 + 0xe10))();
    iVar1 = *(int *)(local_50 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar1 != 0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar9 = local_90;
      local_b8 = CONCAT71(local_b8._1_7_,(char)local_88[0]);
      puVar2 = (uint *)&local_b8;
      if ((char)local_88[0] != '\0') {
        puVar2 = local_88;
      }
      *(undefined1 *)puVar2 = 0;
      if (((char)local_88[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (longlong *)0x0) {
        plVar9 = *(longlong **)(unaff_RDI + 0x90);
LAB_00241ef3:
        FUN_00d50b00();
      }
      else if ((char)local_b8 == '\0') goto LAB_00241ef3;
      (**(code **)(*plVar9 + 0xe10))();
      FUN_00d23310();
      plVar9 = local_90;
      local_40[0] = (char)local_88[0];
      puVar2 = local_88;
      puVar3 = (uint *)local_40;
      if ((char)local_88[0] != '\0') {
        puVar3 = puVar2;
      }
      *(char *)puVar3 = '\0';
      if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar2);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      local_98 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar9 = local_90;
      puVar2 = local_88;
      puVar3 = (uint *)&local_60;
      if ((char)local_88[0] != '\0') {
        puVar3 = puVar2;
      }
      local_60 = CONCAT71(local_60._1_7_,(char)local_88[0]);
      *(undefined1 *)puVar3 = 0;
      if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)puVar2;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = *(longlong **)(unaff_RDI + 0x90);
LAB_00242073:
        FUN_00d50b00();
      }
      else if ((char)local_60 == '\0') goto LAB_00242073;
      (**(code **)(*plVar9 + 0xe10))();
      lVar7 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
LAB_00242214:
        lVar7 = local_98;
        if ((char)local_a0 != '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7fb0();
          local_a8 = local_90;
          if (((char)local_88[0] == '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b00();
            if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6000();
          lVar5 = local_b8;
          local_88[0] = 1;
          local_90 = &DAT_024c5048;
          local_78 = local_78 & 0xffffffffffffff00;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar5;
          local_78 = CONCAT71(local_78._1_7_,1);
          FUN_00d8cb40();
          local_f8 = local_60;
          local_f0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_f0 = '\x01';
          local_188 = lVar7;
          local_180 = '\0';
          FUN_004f83c0(0,&local_188);
          lVar7 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_90 = &DAT_024c5048;
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          local_178 = lVar7;
          local_170 = '\0';
          local_a0 = lVar7;
          FUN_004a11d0();
          plVar8 = local_90;
          if ((char)local_88[0] == '\0') {
            if (local_90 != (longlong *)0x0) {
              FUN_00d50b00();
              if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_88[0] = local_88[0] & 0xffffff00;
          }
          local_c8 = plVar8;
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = *(longlong **)(unaff_RDI + 0x90);
          (**(code **)(&UNK_00001550 + *plVar8))();
          plVar9 = local_90;
          puVar2 = local_88;
          if ((char)local_88[0] == '\0') {
            puVar2 = (uint *)&local_b8;
          }
          local_b8 = CONCAT71(local_b8._1_7_,(char)local_88[0]);
          *(undefined1 *)puVar2 = 0;
          if (((char)local_88[0] != '\0') && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar6 = (pthread_key_t)puVar2;
          if (plVar9 == (longlong *)0x0) {
            plVar9 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024255f:
            FUN_00d50b00();
          }
          else if ((char)local_b8 == '\0') goto LAB_0024255f;
          (**(code **)(*plVar9 + 0xe10))();
          local_e8 = local_60;
          local_e0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_e0 = '\x01';
          FUN_00243390();
          local_c0 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          lVar7 = local_98;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          local_90 = (longlong *)lVar7;
          local_88[0] = local_88[0] & 0xffffff00;
          iVar1 = FUN_00d237a0();
          if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_168 = local_a0;
          local_160 = '\0';
          local_158 = local_c8;
          local_150 = '\0';
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          local_d8 = (longlong)local_90;
          local_d0 = 0;
          if ((char)local_88[0] == '\0') {
            if (local_90 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88[0] = local_88[0] & 0xffffff00;
          }
          local_d0 = '\x01';
          FUN_004a17d0(iVar1 + 1,&local_d8);
          lVar7 = local_98;
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          local_60 = lVar7;
          local_b8 = local_a0;
          FUN_00083ea0(2,&local_b8);
          FUN_00243480();
          lVar5 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          local_90 = (longlong *)&DAT_0253d630;
          if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
            FUN_00d50b20();
          }
          local_90 = &DAT_024c5048;
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_002312f0();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          local_148 = local_c0;
          local_140 = '\0';
          local_138 = lVar7;
          local_130 = '\0';
          local_128 = local_a0;
          local_120 = '\0';
          local_118 = local_a8;
          local_110 = '\0';
          local_108 = local_c8;
          local_100 = '\0';
          FUN_004a5d20(&local_118,&local_128,&local_108);
          if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          if (local_c0 != 0) {
            FUN_00d50b20();
          }
          if (local_c8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_a0 != 0) {
            FUN_00d50b20();
          }
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_88[0] = local_88[0] & 0xffffff00;
        local_90 = (longlong *)0x0;
        local_80 = lVar7;
        local_78 = 0xffffffff;
        local_70 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_78;
          iVar10 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar10);
          iVar1 = *(int *)(local_80 + 0xc);
          lVar7 = local_80;
          if (iVar1 <= iVar10) break;
          lVar7 = *(longlong *)(local_80 + 0x10);
          local_90 = *(longlong **)(lVar7 + 8 + lVar5 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar5 = local_50;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != local_98) break;
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar1 = -local_78._4_4_;
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar1 = 0;
            }
            local_78 = CONCAT44(iVar1,(int)local_78);
          }
        }
        pVar6 = (pthread_key_t)lVar7;
        FUN_001159b0();
        uVar11 = CONCAT71((int7)((ulonglong)&local_50 >> 8),iVar1 <= iVar10);
        FUN_00d50b20();
        lVar7 = local_98;
        if (iVar1 <= iVar10) goto LAB_00242214;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00241dd3;
    }
  }
  uVar11 = 0;
LAB_00241dd3:
  return uVar11 & 0xffffffff;
}


