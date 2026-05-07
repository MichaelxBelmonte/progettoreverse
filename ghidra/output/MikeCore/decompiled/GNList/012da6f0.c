// Function: FUN_012da6f0
// Address: 012da6f0
// Size: 4596 bytes
// Class: GNList


ulonglong FUN_012da6f0(int param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong ****pppplVar3;
  longlong ****pppplVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong ****pppplVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong *****ppppplVar19;
  longlong lVar20;
  longlong lVar21;
  void *pvVar22;
  ulonglong uVar23;
  char *pcVar24;
  longlong *****ppppplVar25;
  longlong lVar26;
  uint uVar27;
  longlong unaff_RSI;
  ulonglong uVar28;
  longlong *unaff_RDI;
  longlong *****ppppplVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  longlong local_1120;
  char local_1118;
  longlong ****local_1110;
  undefined1 local_1108;
  longlong local_1100;
  char *local_10f8;
  longlong local_10f0;
  longlong local_10e8;
  longlong local_10e0;
  char local_10d8;
  longlong ****local_10d0;
  longlong ****local_10c8;
  char local_10c0;
  longlong ***local_10b8;
  char local_10b0;
  longlong local_10a8;
  char local_10a0;
  longlong local_1098;
  char local_1090;
  int local_1084;
  longlong ***local_1038;
  undefined1 local_1030 [8];
  longlong ****local_1028;
  undefined8 uStack_1020;
  int local_1018 [2];
  longlong alStack_1010 [251];
  longlong ****local_838;
  longlong ***local_830;
  longlong ****local_828;
  undefined8 uStack_820;
  int local_818 [2];
  longlong alStack_810 [251];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((char)unaff_RDI[0x3a] == '\0') {
    local_1084 = param_1;
    if (*(char *)((longlong)unaff_RDI + 0x1d1) == '\0') {
LAB_012db5bf:
      do {
        FUN_012d3980();
        pppplVar12 = local_838;
        if ((char)local_830 == '\0') {
          if ((longlong *****)local_838 == (longlong *****)0x0) break;
          FUN_00d50b00();
          if (((char)local_830 != '\0') && ((longlong *****)local_838 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((longlong *****)local_838 == (longlong *****)0x0) break;
        lVar20 = FUN_0141c1c0();
        if (lVar20 == -1) {
          FUN_012dd9d0();
          FUN_0141c1b0();
        }
        else {
          lVar20 = FUN_0141c1c0();
          lVar21 = FUN_012dd9d0();
          if (lVar20 < lVar21) {
            FUN_00d50b20();
            goto LAB_012db5bf;
          }
        }
        local_828 = (longlong ****)unaff_RDI[0x36];
        local_830._0_1_ = 0;
        local_838 = (longlong ****)0x0;
        uStack_820 = 0xffffffff;
        local_818[0] = 0;
        while( true ) {
          lVar20 = (longlong)(int)uStack_820;
          iVar16 = (int)uStack_820 + 1;
          uStack_820 = CONCAT44(uStack_820._4_4_,iVar16);
          if (*(int *)((longlong)local_828 + 0xc) <= iVar16) break;
          local_838 = (longlong ****)local_828[2][lVar20 + 1];
          lVar20 = FUN_0141c1c0();
          lVar21 = FUN_0141c1c0();
          if (lVar21 < lVar20) break;
          if (uStack_820._4_4_ != 0) {
            if (uStack_820._4_4_ < 1) {
              iVar16 = -uStack_820._4_4_;
            }
            else {
              uStack_820 = CONCAT44(uStack_820._4_4_,(int)uStack_820 - uStack_820._4_4_);
              FUN_00d23690();
              local_818[0] = local_818[0] + uStack_820._4_4_;
              iVar16 = 0;
            }
            uStack_820 = CONCAT44(iVar16,(int)uStack_820);
          }
        }
        FUN_012dd500();
        local_830._0_1_ = '\0';
        local_838 = pppplVar12;
        FUN_00d23370();
        if (((char)local_830 != '\0') && ((longlong *****)local_838 != (longlong *****)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      } while( true );
    }
    local_1100 = (longlong)local_1084;
    local_10f8 = (char *)((longlong)unaff_RDI + 0x19b);
    local_10f0 = unaff_RSI + 0x10;
    local_10e8 = param_2 + 0x10;
    bVar11 = false;
    do {
      if (*(int *)(unaff_RDI[0x36] + 0xc) == 0) goto LAB_012db4f7;
      FUN_00d23310();
      pppplVar12 = local_838;
      local_1038 = (longlong ***)CONCAT71(local_1038._1_7_,(char)local_830);
      ppppplVar25 = (longlong *****)&local_1038;
      ppppplVar19 = (longlong *****)&local_830;
      if ((char)local_830 == '\0') {
        ppppplVar19 = ppppplVar25;
      }
      *(undefined1 *)ppppplVar19 = 0;
      if (((char)local_830 != '\0') && ((longlong *****)pppplVar12 != (longlong *****)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_1038 == '\0') && ((longlong *****)pppplVar12 != (longlong *****)0x0)) {
        FUN_00d50b00();
      }
      local_1110 = pppplVar12;
      local_1108 = 1;
      lVar20 = FUN_0141c1c0();
      lVar21 = FUN_012dd9d0();
      iVar16 = 7;
      if (lVar20 <= lVar21 + local_1100) {
        lVar20 = FUN_0141c1c0();
        lVar21 = FUN_012dd9d0();
        if (lVar21 < lVar20) {
          iVar16 = FUN_0141c1c0();
          iVar17 = FUN_012dd9d0();
          iVar18 = (**(code **)(*unaff_RDI + 0x3b0))();
          iVar16 = iVar16 - iVar17;
          uVar27 = local_1084 - iVar16;
          if ((iVar18 != 0) && (iVar18 = iVar16 % iVar18, iVar18 != 0)) {
            dVar32 = (double)FUN_00b335e0();
            iVar16 = iVar16 - iVar18;
            uVar27 = uVar27 + iVar18;
            dVar32 = dVar32 * (double)-iVar18;
            if ((dVar32 != DAT_02390448) || (NAN(dVar32) || NAN(DAT_02390448))) {
              FUN_012dd9d0();
              FUN_0141c1b0((longlong)iVar16);
              dVar33 = (double)FUN_0141c190();
              FUN_0141c1a0(dVar32 + dVar33);
            }
          }
          *(undefined1 *)(unaff_RDI + 0x3a) = 1;
          FUN_012d70d0(iVar16,param_2);
          ppppplVar25 = (longlong *****)(ulonglong)uVar27;
          *(undefined1 *)(unaff_RDI + 0x3a) = 0;
          uVar27 = FUN_00b33130();
          lVar20 = (longlong)iVar16;
          if (0 < (int)uVar27) {
            if (uVar27 < 4) {
              uVar28 = 0;
            }
            else {
              uVar28 = (ulonglong)(uVar27 & 0xfffffffc);
              uVar23 = (uVar28 - 4 >> 2) + 1;
              uVar31 = (ulonglong)((uint)uVar23 & 3);
              if (uVar28 - 4 < 0xc) {
                lVar30 = 0;
              }
              else {
                lVar21 = -(uVar23 & 0xfffffffffffffffc);
                lVar30 = 0;
                do {
                  plVar1 = (longlong *)(unaff_RSI + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(unaff_RSI + 0x10 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  lVar26 = lVar20 * 4;
                  lVar7 = lVar20 * 4;
                  (&local_838)[lVar30] = (longlong ****)(*plVar1 + lVar26);
                  (&local_830)[lVar30] = (longlong ***)(lVar8 + lVar7);
                  (&local_828)[lVar30] = (longlong ****)(lVar9 + lVar26);
                  *(longlong *)(local_818 + lVar30 * 2 + -2) = lVar10 + lVar7;
                  plVar1 = (longlong *)(unaff_RSI + 0x20 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(unaff_RSI + 0x30 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  *(longlong *)(local_818 + lVar30 * 2) = *plVar1 + lVar26;
                  alStack_810[lVar30] = lVar8 + lVar7;
                  alStack_810[lVar30 + 1] = lVar9 + lVar26;
                  alStack_810[lVar30 + 2] = lVar10 + lVar7;
                  plVar1 = (longlong *)(unaff_RSI + 0x40 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(unaff_RSI + 0x50 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  alStack_810[lVar30 + 3] = *plVar1 + lVar26;
                  alStack_810[lVar30 + 4] = lVar8 + lVar7;
                  alStack_810[lVar30 + 5] = lVar9 + lVar26;
                  alStack_810[lVar30 + 6] = lVar10 + lVar7;
                  plVar1 = (longlong *)(unaff_RSI + 0x60 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(unaff_RSI + 0x70 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  alStack_810[lVar30 + 7] = *plVar1 + lVar26;
                  alStack_810[lVar30 + 8] = lVar8 + lVar7;
                  alStack_810[lVar30 + 9] = lVar9 + lVar26;
                  alStack_810[lVar30 + 10] = lVar10 + lVar7;
                  lVar30 = lVar30 + 0x10;
                  lVar21 = lVar21 + 4;
                } while (lVar21 != 0);
              }
              if (uVar31 != 0) {
                lVar21 = local_10f0 + lVar30 * 8;
                lVar26 = 0;
                do {
                  plVar2 = (longlong *)(lVar21 + -0x10 + lVar26);
                  lVar8 = plVar2[1];
                  plVar1 = (longlong *)(lVar21 + lVar26);
                  lVar9 = *plVar1;
                  lVar7 = lVar20 * 4 + plVar1[1];
                  plVar1 = (longlong *)((longlong)&local_838 + lVar26 + lVar30 * 8);
                  *plVar1 = *plVar2 + lVar20 * 4;
                  plVar1[1] = lVar8 + lVar20 * 4;
                  auVar6._8_4_ = (int)lVar7;
                  auVar6._0_8_ = lVar20 * 4 + lVar9;
                  auVar6._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
                  *(undefined1 (*) [16])((longlong)&local_828 + lVar26 + lVar30 * 8) = auVar6;
                  lVar26 = lVar26 + 0x20;
                } while (uVar31 << 5 != lVar26);
              }
              if (uVar28 == uVar27) goto LAB_012db16d;
            }
            do {
              (&local_838)[uVar28] =
                   (longlong ****)(lVar20 * 4 + *(longlong *)(unaff_RSI + uVar28 * 8));
              uVar28 = uVar28 + 1;
            } while (uVar27 != uVar28);
          }
LAB_012db16d:
          uVar27 = FUN_00b33120();
          if (0 < (int)uVar27) {
            if (uVar27 < 4) {
              uVar23 = 0;
            }
            else {
              uVar23 = (ulonglong)(uVar27 & 0xfffffffc);
              uVar28 = (uVar23 - 4 >> 2) + 1;
              uVar31 = (ulonglong)((uint)uVar28 & 3);
              if (uVar23 - 4 < 0xc) {
                lVar30 = 0;
              }
              else {
                lVar21 = -(uVar28 & 0xfffffffffffffffc);
                lVar30 = 0;
                do {
                  plVar1 = (longlong *)(param_2 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(param_2 + 0x10 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  lVar26 = lVar20 * 4;
                  lVar7 = lVar20 * 4;
                  *(longlong *)(local_1030 + lVar30 * 8 + -8) = *plVar1 + lVar26;
                  *(longlong *)(local_1030 + lVar30 * 8) = lVar8 + lVar7;
                  (&local_1028)[lVar30] = (longlong ****)(lVar9 + lVar26);
                  *(longlong *)(local_1018 + lVar30 * 2 + -2) = lVar10 + lVar7;
                  plVar1 = (longlong *)(param_2 + 0x20 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(param_2 + 0x30 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  *(longlong *)(local_1018 + lVar30 * 2) = *plVar1 + lVar26;
                  alStack_1010[lVar30] = lVar8 + lVar7;
                  alStack_1010[lVar30 + 1] = lVar9 + lVar26;
                  alStack_1010[lVar30 + 2] = lVar10 + lVar7;
                  plVar1 = (longlong *)(param_2 + 0x40 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(param_2 + 0x50 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  alStack_1010[lVar30 + 3] = *plVar1 + lVar26;
                  alStack_1010[lVar30 + 4] = lVar8 + lVar7;
                  alStack_1010[lVar30 + 5] = lVar9 + lVar26;
                  alStack_1010[lVar30 + 6] = lVar10 + lVar7;
                  plVar1 = (longlong *)(param_2 + 0x60 + lVar30 * 8);
                  lVar8 = plVar1[1];
                  plVar2 = (longlong *)(param_2 + 0x70 + lVar30 * 8);
                  lVar9 = *plVar2;
                  lVar10 = plVar2[1];
                  alStack_1010[lVar30 + 7] = *plVar1 + lVar26;
                  alStack_1010[lVar30 + 8] = lVar8 + lVar7;
                  alStack_1010[lVar30 + 9] = lVar9 + lVar26;
                  alStack_1010[lVar30 + 10] = lVar10 + lVar7;
                  lVar30 = lVar30 + 0x10;
                  lVar21 = lVar21 + 4;
                } while (lVar21 != 0);
              }
              if (uVar31 != 0) {
                lVar21 = local_10e8 + lVar30 * 8;
                lVar26 = 0;
                do {
                  plVar2 = (longlong *)(lVar21 + -0x10 + lVar26);
                  lVar9 = plVar2[1];
                  plVar1 = (longlong *)(lVar21 + lVar26);
                  lVar8 = *plVar1;
                  lVar7 = lVar20 * 4 + plVar1[1];
                  *(longlong *)(local_1030 + lVar26 + lVar30 * 8 + -8) = *plVar2 + lVar20 * 4;
                  *(longlong *)((longlong)(local_1030 + lVar26 + lVar30 * 8 + -8) + 8) =
                       lVar9 + lVar20 * 4;
                  auVar5._8_4_ = (int)lVar7;
                  auVar5._0_8_ = lVar20 * 4 + lVar8;
                  auVar5._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
                  *(undefined1 (*) [16])((longlong)&local_1028 + lVar26 + lVar30 * 8) = auVar5;
                  lVar26 = lVar26 + 0x20;
                } while (uVar31 << 5 != lVar26);
              }
              if (uVar23 == uVar27) goto LAB_012db30d;
            }
            do {
              *(longlong *)(local_1030 + uVar23 * 8 + -8) =
                   lVar20 * 4 + *(longlong *)(param_2 + uVar23 * 8);
              uVar23 = uVar23 + 1;
            } while (uVar27 != uVar23);
          }
LAB_012db30d:
          *(undefined1 *)((longlong)unaff_RDI + 0x1d1) = 1;
          FUN_012d70d0(ppppplVar25);
          *(undefined1 *)((longlong)unaff_RDI + 0x1d1) = 0;
          iVar16 = 1;
        }
        else {
          FUN_00d23620();
          FUN_00540c00();
          ppppplVar25 = (longlong *****)&DAT_02802688;
          if ((longlong *****)pppplVar12 != (longlong *****)0x0) {
            (*(code *)(*pppplVar12)[0x6c])();
            cVar14 = FUN_00e85ea0();
            ppppplVar25 = &local_1110;
            if (cVar14 == '\0') {
              ppppplVar25 = (longlong *****)&DAT_02802688;
            }
          }
          cVar14 = *(char *)(ppppplVar25 + 1);
          if ((cVar14 == '\0') || (*ppppplVar25 == (longlong ****)0x0)) {
            if (*ppppplVar25 == (longlong ****)0x0) {
              FUN_0119a990();
              ppppplVar25 = (longlong *****)&DAT_02802688;
              if ((longlong *****)pppplVar12 != (longlong *****)0x0) {
                (*(code *)(*pppplVar12)[0x6c])();
                cVar14 = FUN_00e85ea0();
                ppppplVar25 = &local_1110;
                if (cVar14 == '\0') {
                  ppppplVar25 = (longlong *****)&DAT_02802688;
                }
              }
              pppplVar3 = *ppppplVar25;
              cVar14 = *(char *)(ppppplVar25 + 1);
              if ((cVar14 == '\0') || (pppplVar3 == (longlong ****)0x0)) {
                if (pppplVar3 == (longlong ****)0x0) {
                  iVar16 = 0;
                  goto LAB_012db345;
                }
              }
              else {
                FUN_00d50b00();
              }
              cVar15 = FUN_0141cc30();
              bVar13 = bVar11;
              if (cVar15 == '\0') {
                cVar15 = FUN_0141cc10();
                bVar13 = true;
                if (cVar15 == '\0') {
                  dVar32 = (double)FUN_0141c190();
                  if ((dVar32 != DAT_023b2568) || (NAN(dVar32) || NAN(DAT_023b2568))) {
                    dVar32 = (double)FUN_0141c190();
                    dVar33 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
                    if (dVar33 < dVar32) {
                      pppplVar4 = (longlong ****)unaff_RDI[0x37];
                      bVar13 = bVar11;
                      if (pppplVar4 != pppplVar3) {
                        FUN_00d50b00();
                        unaff_RDI[0x37] = (longlong)pppplVar3;
                        if (pppplVar4 != (longlong ****)0x0) {
                          FUN_00d50b20();
                        }
                      }
                      goto LAB_012db4c1;
                    }
                  }
                  *(undefined1 *)((longlong)unaff_RDI + 0x19e) = 1;
                  bVar13 = bVar11;
                  if (unaff_RDI[0x37] != 0) {
                    unaff_RDI[0x37] = 0;
                    FUN_00d50b20();
                  }
                }
              }
              else {
                pppplVar4 = (longlong ****)unaff_RDI[0x38];
                if (pppplVar4 != pppplVar3) {
                  FUN_00d50b00();
                  unaff_RDI[0x38] = (longlong)pppplVar3;
                  if (pppplVar4 != (longlong ****)0x0) {
                    FUN_00d50b20();
                  }
                }
                *(undefined1 *)((longlong)unaff_RDI + 0x19e) = 1;
                if (unaff_RDI[0x37] != 0) {
                  unaff_RDI[0x37] = 0;
                  FUN_00d50b20();
                }
              }
LAB_012db4c1:
              bVar11 = bVar13;
              iVar16 = 0;
              if (cVar14 != '\0') {
                FUN_00d50b20();
                iVar16 = 0;
              }
              goto LAB_012db345;
            }
          }
          else {
            FUN_00d50b00();
          }
          dVar32 = (double)FUN_0141c190();
          if ((dVar32 != DAT_023b2568) || (NAN(dVar32) || NAN(DAT_023b2568))) {
            lVar20 = FUN_0141c190();
            unaff_RDI[0x15] = lVar20;
          }
          lVar20 = FUN_012dda20();
          if ((lVar20 != -1) && (lVar20 = FUN_0141c1d0(), lVar20 != -1)) {
            lVar20 = FUN_012dda20();
            lVar21 = FUN_0141c1d0();
            dVar32 = (double)FUN_00b335d0();
            unaff_RDI[0x15] =
                 (longlong)((double)(lVar20 - lVar21) / dVar32 + (double)unaff_RDI[0x15]);
          }
          FUN_0141c950();
          ppppplVar19 = (longlong *****)local_838;
          if ((char)local_830 == '\0') {
            if ((longlong *****)local_838 == (longlong *****)0x0) goto LAB_012dab9e;
            FUN_00d50b00();
            if (((char)local_830 != '\0') && ((longlong *****)local_838 != (longlong *****)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((longlong *****)local_838 == (longlong *****)0x0) {
LAB_012dab9e:
            ppppplVar29 = (longlong *****)unaff_RDI[0x32];
            if (ppppplVar29 != (longlong *****)0x0) {
              FUN_00d50b00();
              ppppplVar19 = ppppplVar29;
            }
          }
          local_10c0 = '\0';
          local_10c8 = (longlong ****)ppppplVar19;
          FUN_012ddcf0();
          if ((local_10c0 != '\0') && ((longlong *****)local_10c8 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
          pvVar22 = _pthread_getspecific((pthread_key_t)ppppplVar25);
          ppppplVar29 = ppppplVar19;
          if ((pvVar22 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            ppppplVar25 = ppppplVar19;
            ppppplVar29 = (longlong *****)
                          ppppplVar19[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
          }
          (*(code *)(*ppppplVar29)[0x6e])(unaff_RDI[0x15]);
          *(undefined1 *)((longlong)unaff_RDI + 0x19b) = 1;
          if (unaff_RDI[0x37] != 0) {
            unaff_RDI[0x37] = 0;
            FUN_00d50b20();
          }
          FUN_0141c980();
          pppplVar3 = local_838;
          if ((char)local_830 == '\0') {
            if ((longlong *****)local_838 != (longlong *****)0x0) {
              FUN_00d50b00();
              if (((char)local_830 != '\0') && ((longlong *****)local_838 != (longlong *****)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_012dace8;
            }
          }
          else if ((longlong *****)local_838 != (longlong *****)0x0) {
LAB_012dace8:
            FUN_012d5c40();
            pppplVar4 = local_838;
            if ((char)local_830 == '\0') {
              if ((longlong *****)local_838 != (longlong *****)0x0) {
                FUN_00d50b00();
                goto LAB_012dad29;
              }
            }
            else if ((longlong *****)local_838 != (longlong *****)0x0) {
LAB_012dad29:
              local_830._0_1_ = '\0';
              local_838 = (longlong ****)0x0;
              local_10d0 = pppplVar4;
              local_828 = pppplVar4;
              uStack_820 = 0xffffffff;
              local_818[0] = 0;
              uStack_820._4_4_ = 0;
              while( true ) {
                if (uStack_820._4_4_ != 0) {
                  if (uStack_820._4_4_ < 1) {
                    iVar16 = -uStack_820._4_4_;
                  }
                  else {
                    iVar16 = (int)uStack_820 - uStack_820._4_4_;
                    uStack_820 = CONCAT44(uStack_820._4_4_,iVar16);
                    FUN_00d23690();
                    local_818[0] = local_818[0] + uStack_820._4_4_;
                    iVar16 = 0;
                  }
                  uStack_820 = CONCAT44(iVar16,(int)uStack_820);
                }
                lVar20 = (longlong)(int)uStack_820;
                iVar16 = (int)uStack_820 + 1;
                uStack_820 = CONCAT44(uStack_820._4_4_,iVar16);
                if (*(int *)((longlong)local_828 + 0xc) <= iVar16) break;
                local_838 = (longlong ****)local_828[2][lVar20 + 1];
                local_1030[0] = 0;
                local_1038 = (longlong ***)0x0;
                local_1028 = pppplVar3;
                uStack_1020 = 0xffffffff;
                local_1018[0] = 0;
                while( true ) {
                  lVar20 = (longlong)(int)uStack_1020;
                  iVar16 = (int)uStack_1020 + 1;
                  uStack_1020 = CONCAT44(uStack_1020._4_4_,iVar16);
                  if (*(int *)((longlong)local_1028 + 0xc) <= iVar16) break;
                  local_1038 = (longlong ***)local_1028[2][lVar20 + 1];
                  FUN_0190a240();
                  FUN_01308710();
                  lVar20 = local_10e0;
                  if ((local_1118 != '\0') && (local_1120 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_10d8 != '\0') && (local_10e0 != 0)) {
                    FUN_00d50b20();
                  }
                  if (lVar20 == local_1120) {
                    local_10b8 = local_1038;
                    local_10b0 = '\0';
                    FUN_0130b640();
                    if ((local_10b0 != '\0') && ((longlong ****)local_10b8 != (longlong ****)0x0)) {
                      FUN_00d50b20();
                    }
                    break;
                  }
                  if (uStack_1020._4_4_ != 0) {
                    if (uStack_1020._4_4_ < 1) {
                      iVar16 = -uStack_1020._4_4_;
                    }
                    else {
                      uStack_1020 = CONCAT44(uStack_1020._4_4_,(int)uStack_1020 - uStack_1020._4_4_)
                      ;
                      FUN_00d23690();
                      local_1018[0] = local_1018[0] + uStack_1020._4_4_;
                      iVar16 = 0;
                    }
                    uStack_1020 = CONCAT44(iVar16,(int)uStack_1020);
                  }
                }
                FUN_00540ac0();
              }
              ppppplVar25 = (longlong *****)local_828;
              FUN_01312d90();
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          if (ppppplVar19 != (longlong *****)0x0) {
            FUN_00d50b20();
          }
          iVar16 = 0;
          if (cVar14 != '\0') {
            FUN_00d50b20();
          }
        }
      }
LAB_012db345:
      if ((longlong *****)pppplVar12 != (longlong *****)0x0) {
        FUN_00d50b20();
      }
    } while (iVar16 == 0);
    if (iVar16 != 7) {
      uVar23 = CONCAT71((int7)((ulonglong)ppppplVar25 >> 8),1);
      goto LAB_012da71d;
    }
LAB_012db4f7:
    if (unaff_RDI[0x37] != 0) {
      dVar32 = (double)FUN_0141c190();
      dVar33 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
      if ((dVar32 <= dVar33) &&
         (*(undefined1 *)((longlong)unaff_RDI + 0x19e) = 1, unaff_RDI[0x37] != 0)) {
        unaff_RDI[0x37] = 0;
        FUN_00d50b20();
      }
    }
    if (*local_10f8 == '\0') {
      if (bVar11) {
        *(undefined1 *)((longlong)unaff_RDI + 0x19e) = 0;
        *(undefined4 *)(unaff_RDI + 0x33) = 0;
        if (unaff_RDI[0x38] != 0) {
          unaff_RDI[0x38] = 0;
          FUN_00d50b20();
        }
        lVar20 = unaff_RDI[0x32];
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        local_10a0 = '\x01';
        local_10a8 = lVar20;
        FUN_012ddcf0();
        uVar23 = 0;
        if ((local_10a0 == '\0') || (uVar23 = 0, local_10a8 == 0)) goto LAB_012da71d;
        FUN_00d50b20();
      }
      else {
        if (*(char *)((longlong)unaff_RDI + 0x199) != '\0') {
          pcVar24 = (char *)((longlong)unaff_RDI + 0x199);
          goto LAB_012db7c8;
        }
LAB_012db7cb:
        if (*(char *)((longlong)unaff_RDI + 0x19e) != '\0') {
          if (*(char *)((longlong)unaff_RDI + 0x19a) == '\0') {
            *(undefined1 *)((longlong)unaff_RDI + 0x19a) = 1;
          }
          else {
            *(undefined1 *)((longlong)unaff_RDI + 0x19a) = 0;
            *(undefined1 *)((longlong)unaff_RDI + 0x19e) = 0;
            *(undefined1 *)(unaff_RDI + 0x33) = 0;
            if (unaff_RDI[0x38] != 0) {
              unaff_RDI[0x38] = 0;
              FUN_00d50b20();
            }
            lVar20 = unaff_RDI[0x32];
            if (lVar20 != 0) {
              FUN_00d50b00();
            }
            local_1090 = '\x01';
            local_1098 = lVar20;
            FUN_012ddcf0();
            uVar23 = 0;
            if ((local_1090 == '\0') || (local_1098 == 0)) goto LAB_012da71d;
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      if (bVar11 || *(char *)((longlong)unaff_RDI + 0x19e) != '\0') {
        lVar20 = unaff_RDI[0x38];
      }
      else {
        lVar20 = unaff_RDI[0x38];
        if (lVar20 == 0) {
          *(undefined2 *)(unaff_RDI + 0x33) = 0x101;
          pcVar24 = local_10f8;
LAB_012db7c8:
          *pcVar24 = '\0';
          goto LAB_012db7cb;
        }
      }
      *(undefined4 *)(unaff_RDI + 0x33) = 0x101;
      *(undefined1 *)((longlong)unaff_RDI + 0x19e) = 0;
      if (lVar20 != 0) {
        unaff_RDI[0x38] = 0;
        FUN_00d50b20();
      }
    }
  }
  uVar23 = 0;
LAB_012da71d:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


