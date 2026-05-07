// Function: FUN_00491110
// Address: 00491110
// Size: 2709 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x004913c6) */
/* WARNING: Removing unreachable block (ram,0x004913d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00491110(pthread_key_t param_1,int param_2,byte param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  longlong local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  uint local_b0;
  pthread_key_t local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar12 = DAT_02708760;
    plVar10 = (longlong *)0x0;
    if (local_60 != (longlong *)0x0) {
      if (DAT_02708760 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar12;
      FUN_00083ea0(2,&local_128);
      FUN_000b4da0();
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      lVar12 = DAT_02708768;
      if (DAT_02708768 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar12;
      local_118 = '\x01';
      local_110 = local_80;
      local_108 = '\0';
      FUN_01e57360(&local_110,&local_120);
      plVar10 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_01caeae0();
        local_100 = plVar10;
        local_f8 = '\0';
        FUN_01d64eb0();
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    if (param_4 == '\0') goto LAB_0049143d;
  }
  else {
    if (param_4 == '\0') {
LAB_0049143d:
      plVar10 = (longlong *)0x0;
      goto LAB_0049143f;
    }
    FUN_0048b260();
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_0049143d;
      FUN_00d50b00();
      lVar12 = *(longlong *)(unaff_RDI + 0x118);
      if (lVar12 == 0) goto LAB_00491430;
LAB_00491177:
      FUN_00d50b00();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01390340();
      FUN_0194ed20();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013901e0();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar11 = &local_60;
      FUN_01320d00();
      plVar10 = local_60;
      if ((DAT_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        param_1 = 0x136df0;
        _DAT_026e3230 = FUN_00136df0;
        _DAT_026e3240 = 0;
        uRam00000000026e3248 = 0;
        _DAT_026e3250 = 0;
        uRam00000000026e3258 = 0;
        _DAT_026e3260 = 0;
        uRam00000000026e3268 = 0;
        _DAT_026e3270 = 0;
        uRam00000000026e3278 = 0;
        _DAT_026e3280 = 0;
        uRam00000000026e3288 = 0;
        _DAT_026e3290 = 0;
        uRam00000000026e3298 = 0;
        _DAT_026e32a0 = 0;
        uRam00000000026e32a8 = 0;
        _DAT_026e32b0 = 0;
        uRam00000000026e32b8 = 0;
        _DAT_026e32c0 = 0;
        uRam00000000026e32c8 = 0;
        _DAT_026e32d0 = 0;
        uRam00000000026e32d8 = 0;
        _DAT_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar10 == (longlong *)0x0) {
LAB_00491517:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00491517;
      }
      plVar10 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_a0 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_80;
        local_b0 = (uint)param_3;
        uVar9 = 0;
        FUN_01500530();
        plVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) {
LAB_0049179b:
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013941c0();
          plVar4 = local_60;
          if (local_60 == (longlong *)0x0) {
            pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          }
          else {
            if (local_58 == '\0') {
              FUN_00d50b00();
              pVar8 = 0;
              if ((local_58 == '\0') || (local_60 == (longlong *)0x0)) goto LAB_0049186d;
              FUN_00d50b20();
            }
            pVar8 = 0;
          }
LAB_0049186d:
          local_ac = pVar8;
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01393860();
          local_98 = local_60;
          local_90 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_90 = '\x01';
          FUN_01394160();
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = '\0';
          local_d0 = lVar12;
          FUN_012e1a00();
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c0 = plVar4;
          local_b8 = '\0';
          FUN_01394160();
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0047dd70();
          if ((char)local_ac == '\0' && plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (plVar3 != (longlong *)0x0) goto LAB_00491a90;
        }
        else {
          if (param_3 == 0) {
            if (*(char *)(unaff_RDI + 0x27b) != '\0') goto LAB_0049169f;
            goto LAB_0049179b;
          }
          if (*(char *)(unaff_RDI + 0x27a) == '\0') goto LAB_0049179b;
LAB_0049169f:
          cVar5 = FUN_015039e0();
          lVar13 = DAT_02708778;
          lVar2 = DAT_02708770;
          if (cVar5 == '\0') {
            if (DAT_02708778 == 0) goto LAB_004916d8;
            uVar14 = FUN_00d50b00();
          }
          else if (DAT_02708770 == 0) {
LAB_004916d8:
            lVar13 = 0;
            uVar14 = extraout_XMM0_Da;
          }
          else {
            uVar14 = FUN_00d50b00();
            lVar13 = lVar2;
          }
          lVar2 = DAT_026f6fb0;
          if (DAT_026f6fb0 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_f0 = lVar2;
          local_e8 = '\x01';
          local_d8 = '\0';
          local_e0 = lVar13;
          FUN_01f6ca30(uVar14,&local_e0);
          plVar4 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = (**(code **)(*plVar4 + 0x5e0))();
          FUN_00d50b20();
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          bVar1 = true;
          if (iVar6 == 0) goto LAB_0049179b;
LAB_00491a90:
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),plVar10 != (longlong *)0x0);
      FUN_00d50b20();
    }
    else {
      if (local_60 == (longlong *)0x0) goto LAB_0049143d;
      lVar12 = *(longlong *)(unaff_RDI + 0x118);
      if (lVar12 != 0) goto LAB_00491177;
LAB_00491430:
      bVar1 = true;
      plVar10 = (longlong *)0x0;
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_0049143f;
  }
  plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
LAB_0049143f:
  return (ulonglong)plVar10 & 0xffffffff;
}


