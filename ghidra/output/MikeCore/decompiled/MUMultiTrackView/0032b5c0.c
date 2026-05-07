// Function: FUN_0032b5c0
// Address: 0032b5c0
// Size: 1209 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0032b5c0(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  undefined8 in_RCX;
  char *pcVar12;
  longlong *unaff_RDI;
  longlong **pplVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  undefined4 in_XMM1_Dd;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 local_88;
  float fStack_84;
  undefined4 uStack_7c;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  fVar18 = (float)((ulonglong)param_2 >> 0x20);
  pVar11 = (pthread_key_t)in_RCX;
  if ((char)unaff_RDI[0x3a] == '\0') {
LAB_0032b839:
    if (unaff_RDI[0x2a] == 0) {
      if ((longlong *)unaff_RDI[0x28] == (longlong *)0x0) goto LAB_0032b994;
      local_68 = (double)(**(code **)(*(longlong *)unaff_RDI[0x28] + 0xc0))(param_1);
      dVar19 = (double)(**(code **)(*(longlong *)unaff_RDI[0x28] + 0xd0))();
      lVar1 = unaff_RDI[0x28];
    }
    else {
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_013201a0();
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_01320130();
      lVar1 = unaff_RDI[0x28];
    }
    uVar15 = SUB84(local_68,0);
    if (lVar1 != 0) {
      fVar18 = 0.0;
      in_XMM1_Dd = 0;
      uVar15 = SUB84(local_68 + 0.0,0);
      dVar19 = dVar19 + 0.0;
    }
    local_88 = SUB84(dVar19,0);
    uVar16 = (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x390))(uVar15);
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    local_68 = (double)uVar16;
    uVar16 = (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x390))(local_88);
    FUN_01e3f820();
    auVar2._8_4_ = extraout_XMM0_Dc_00;
    auVar2._0_8_ = uVar16;
    auVar2._12_4_ = extraout_XMM0_Dd_00;
    auVar3._8_4_ = uStack_60;
    auVar3._0_8_ = local_68;
    auVar3._12_4_ = uStack_5c;
    auVar17._4_12_ = auVar2._4_12_;
    auVar17._0_4_ = (float)uVar16 - (float)local_68;
    auVar20._4_4_ = fVar18;
    auVar20._0_4_ = fVar18 + DAT_023b2664;
    auVar20._8_4_ = in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd;
    auVar20 = insertps(auVar3,auVar20,0x10);
    local_68._0_4_ = auVar20._0_4_;
    local_68._4_4_ = auVar20._4_4_;
    blendps(auVar17,_DAT_023907b0,0xe);
  }
  else {
    FUN_01e42030();
    plVar7 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0032b626;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_0032b626:
      local_50 = plVar7;
      (**(code **)(*unaff_RDI + 0x7b8))();
      plVar7 = local_48;
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
LAB_0032b781:
        pplVar13 = &local_48;
        FUN_01d8b220();
        plVar6 = local_48;
        if ((DAT_026fe4d0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          _DAT_02726438 = FUN_0006d940();
          _DAT_02726420 = "MUMultiTrackView";
          _DAT_02726428 = 0x228;
          pVar11 = 0x82de0;
          _DAT_02726430 = FUN_00082de0;
          _DAT_02726440 = 0;
          uRam0000000002726448 = 0;
          _DAT_02726450 = 0;
          _DAT_027264c8 = 0;
          uRam00000000027264d0 = 0;
          _DAT_027264d8 = 0;
          DAT_027264da = 1;
          _DAT_02726458 = 0;
          uRam0000000002726460 = 0;
          _DAT_02726468 = 0;
          uRam0000000002726470 = 0;
          _DAT_02726478 = 0;
          uRam0000000002726480 = 0;
          _DAT_02726488 = 0;
          uRam0000000002726490 = 0;
          _DAT_02726498 = 0;
          uRam00000000027264a0 = 0;
          _DAT_027264a8 = 0;
          uRam00000000027264b0 = 0;
          _DAT_027264b8 = 0;
          uRam00000000027264c0 = 0;
          DAT_027264e3 = 0;
          _DAT_027264db = 0;
          ___cxa_guard_release();
        }
        plVar5 = DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar8 = FUN_00e85ea0();
          if (cVar8 == '\0') {
            pplVar13 = &DAT_02802688;
          }
          plVar5 = *pplVar13;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (longlong *)0x0) goto LAB_0032b758;
LAB_0032b80a:
        bVar4 = true;
        bVar14 = true;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      else {
        FUN_01d97850();
        if (local_48 == (longlong *)0x0) {
          bVar14 = false;
        }
        else {
          pplVar13 = &local_78;
          FUN_01d97850();
          plVar6 = local_78;
          FUN_000914a0();
          if (plVar6 == (longlong *)0x0) {
LAB_0032b6bf:
            pplVar13 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar6 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0032b6bf;
          }
          bVar14 = *pplVar13 != (longlong *)0x0;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar14) goto LAB_0032b781;
        FUN_01d8b220();
        FUN_01d97850();
        plVar6 = local_48;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == local_78) goto LAB_0032b80a;
LAB_0032b758:
        local_68._0_4_ = (float)DAT_023dccec;
        local_68._4_4_ = (undefined4)((ulonglong)DAT_023dccec >> 0x20);
        uStack_60 = 0;
        uStack_5c = 0;
        fStack_84 = (float)((ulonglong)DAT_023dccf4 >> 0x20);
        uStack_7c = 0;
        bVar4 = false;
        bVar14 = false;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      if ((local_38[0] != '\0') && (bVar14 = bVar4, plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      param_1 = (float)local_68;
      if (!bVar14) goto LAB_0032b9a4;
      goto LAB_0032b839;
    }
LAB_0032b994:
    local_68._0_4_ = (float)DAT_023dccec;
    local_68._4_4_ = (undefined4)((ulonglong)DAT_023dccec >> 0x20);
  }
LAB_0032b9a4:
  return CONCAT44(local_68._4_4_,(float)local_68);
}


