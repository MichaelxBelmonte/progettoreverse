// Function: FUN_009bdaee
// Address: 009bdaee
// Size: 4201 bytes
// Class: MUElementAnalyzer
// String references:
//   ", "
//   ": "
//   "Unknown"
//   "TException"
//   "::"
//   "Error processing the command line because multiple occurances of the same option was provided."
//   "Unknown exception!"


/* WARNING: Removing unreachable block (ram,0x009be87c) */

void FUN_009bdaee(char *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  ulong uVar27;
  char *pcVar28;
  char *pcVar29;
  string *psVar30;
  void *pvVar31;
  byte *pbVar32;
  char *pcVar33;
  longlong *unaff_RSI;
  char *pcVar34;
  longlong *unaff_RDI;
  bool bVar35;
  byte local_3e8;
  char cStackY_3e7;
  undefined6 uStackY_3e6;
  void *local_3e0;
  ulong in_stack_fffffffffffffc28;
  undefined4 uStack_3d4;
  ulong in_stack_fffffffffffffc30;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_230;
  string *local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  byte local_1d8;
  byte local_128;
  ulong local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  char *local_f8;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined1 *local_d8;
  ulonglong local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined2 uStack_aa;
  undefined6 local_a8;
  undefined2 local_92;
  undefined6 uStack_90;
  byte local_88;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 uStack_7e;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  *(undefined4 *)(unaff_RDI + 1) = 0xc;
  pbVar26 = (byte *)(unaff_RDI + 2);
  if ((*(byte *)(unaff_RDI + 2) & 1) == 0) {
    pbVar26[0] = 0;
    pbVar26[1] = 0;
  }
  else {
    *(undefined1 *)unaff_RDI[4] = 0;
    unaff_RDI[3] = 0;
  }
  pbVar2 = (byte *)(unaff_RDI + 5);
  if ((*(byte *)(unaff_RDI + 5) & 1) == 0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  else {
    *(undefined1 *)unaff_RDI[7] = 0;
    unaff_RDI[6] = 0;
  }
  plVar20 = (longlong *)unaff_RDI[10];
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar19 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar20 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar20 = (longlong *)unaff_RDI[0xc];
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar19 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar20 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (unaff_RSI == (longlong *)0x0) {
    std::string::assign(param_1);
LAB_009bdcc2:
    uVar1 = (int)unaff_RDI[1] - 3;
    pcVar28 = (char *)(ulonglong)uVar1;
    pcVar29 = pcVar28;
    if (uVar1 < 10) {
      pcVar29 = (char *)((longlong)&switchD_009bdce0::switchdataD_009bee5c +
                        (longlong)(int)(&switchD_009bdce0::switchdataD_009bee5c)[(longlong)pcVar28])
      ;
      switch(pcVar28) {
      case (char *)0x0:
        if (unaff_RSI == (longlong *)0x0) break;
        goto LAB_009bddb2;
      case (char *)0x1:
switchD_009bdce0_caseD_4:
        FUN_009bee84();
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        if (unaff_RSI != (longlong *)0x0) {
          (**(code **)(*unaff_RSI + 0x10))();
          std::string::assign(pcVar29);
        }
        FUN_009bee84();
        if ((local_3e8 & 1) == 0) {
          local_3e0._0_4_ = (ulong)(local_3e8 >> 1);
          pcVar29 = &cStackY_3e7;
        }
        else {
          pcVar29 = (char *)CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
        }
        puVar24 = (ulonglong *)std::string::insert((ulong)local_3e0,pcVar29,param_3);
        local_c0 = puVar24[2];
        local_d0 = *puVar24;
        local_c8 = (undefined1 *)puVar24[1];
        *puVar24 = 0;
        puVar24[1] = 0;
        puVar24[2] = 0;
        if ((local_68 & 1) == 0) {
          uVar27 = (ulong)((byte)local_68 >> 1);
        }
        else {
          uVar27 = (ulong)uStack_60;
        }
        puVar22 = (undefined8 *)std::string::append((char *)0x0,uVar27);
        uVar6 = *(undefined1 *)puVar22;
        uVar7 = *(undefined1 *)((longlong)puVar22 + 1);
        uStack_80 = (undefined2)((ulonglong)puVar22[1] >> 0x10);
        uStack_7e = (undefined4)((ulonglong)puVar22[1] >> 0x20);
        uVar16 = *(undefined8 *)((longlong)puVar22 + 2);
        uStack_82 = (undefined2)((ulonglong)uVar16 >> 0x30);
        lVar19 = puVar22[2];
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        if ((*pbVar2 & 1) != 0) {
          operator_delete((void *)0x0);
        }
        *(undefined1 *)(unaff_RDI + 5) = uVar6;
        *(undefined1 *)((longlong)unaff_RDI + 0x29) = uVar7;
        pvVar31 = (void *)CONCAT44(uStack_7e,CONCAT22(uStack_80,uStack_82));
        *(undefined8 *)((longlong)unaff_RDI + 0x2a) = uVar16;
        unaff_RDI[6] = (longlong)pvVar31;
        unaff_RDI[7] = lVar19;
        if ((local_d0 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_108 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_68 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_3e8 & 1) == 0) break;
        goto LAB_009bead4;
      case (char *)0x2:
        if (unaff_RSI == (longlong *)0x0) break;
LAB_009be189:
        pvVar31 = (void *)0x0;
        lVar19 = ___dynamic_cast(0,&PTR_vtable_025221e8);
        if (lVar19 != 0) {
          FUN_009bef98();
          if ((*pbVar2 & 1) != 0) {
            operator_delete(pvVar31);
          }
          unaff_RDI[7] = CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
          unaff_RDI[6] = (longlong)local_3e0;
          *(ulonglong *)pbVar2 = CONCAT62(uStackY_3e6,CONCAT11(cStackY_3e7,local_3e8));
        }
        break;
      default:
        goto switchD_009bdce0_caseD_6;
      case "":
        std::string::assign(pcVar29);
        break;
      case "":
        std::string::assign(pcVar29);
      }
      goto LAB_009be1f7;
    }
switchD_009bdce0_caseD_6:
    if (unaff_RSI == (longlong *)0x0) goto LAB_009be1f7;
  }
  else {
    FUN_009bee84();
    FUN_009cd29e();
    if ((*pbVar26 & 1) != 0) {
      operator_delete(param_1);
    }
    unaff_RDI[4] = CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
    unaff_RDI[3] = (longlong)local_3e0;
    *(ulonglong *)pbVar26 = CONCAT62(uStackY_3e6,CONCAT11(cStackY_3e7,local_3e8));
    local_3e8 = 0;
    cStackY_3e7 = '\0';
    if ((local_68 & 1) != 0) {
      operator_delete(local_3e0);
    }
    lVar19 = ___dynamic_cast(0,&PTR_vtable_025221b0);
    pcVar29 = (char *)((longlong)&MACH_HEADER.magic + 1);
    if (lVar19 == 0) {
      plVar20 = (longlong *)___dynamic_cast(0,&PTR_vtable_02522928);
      if (plVar20 != (longlong *)0x0) {
        *(undefined4 *)(unaff_RDI + 1) = 2;
        lVar19 = *plVar20;
        lVar21 = (**(code **)(lVar19 + 0x18))();
        puVar22 = operator_new((ulong)lVar19);
        puVar22[2] = 0;
        puVar22[1] = 0;
        *puVar22 = &DAT_025224e8;
        puVar22[3] = lVar21;
        unaff_RDI[9] = lVar21;
        plVar20 = (longlong *)unaff_RDI[10];
        unaff_RDI[10] = (longlong)puVar22;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar20 + 1;
          lVar19 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar20 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
        goto LAB_009bdcc2;
      }
      lVar19 = ___dynamic_cast(0,&PTR_vtable_0251b538);
      if (lVar19 == 0) {
        pcVar29 = (char *)0x0;
        lVar19 = ___dynamic_cast(0,&PTR_vtable_02517210);
        if (lVar19 == 0) {
          lVar19 = ___dynamic_cast(0,&PTR_vtable_025221e8);
          if (lVar19 == 0) {
            lVar19 = ___dynamic_cast(0,&PTR_vtable_0252b170);
            pcVar29 = (char *)((longlong)&MACH_HEADER.cputype + 2);
            if (lVar19 == 0) {
              lVar19 = ___dynamic_cast(0,&PTR_vtable_0251e010);
              pcVar29 = (char *)((longlong)&MACH_HEADER.cputype + 3);
              if (lVar19 == 0) {
                lVar19 = ___dynamic_cast(0,PTR_typeinfo_024a9810);
                pcVar29 = (char *)(ulonglong)(lVar19 == 0 | 10);
              }
            }
            goto LAB_009bdc78;
          }
          *(undefined4 *)(unaff_RDI + 1) = 5;
          goto LAB_009be189;
        }
        *(undefined4 *)(unaff_RDI + 1) = 4;
        goto switchD_009bdce0_caseD_4;
      }
      *(undefined4 *)(unaff_RDI + 1) = 3;
LAB_009bddb2:
      uVar27 = 0;
      lVar19 = ___dynamic_cast(0,&PTR_vtable_0251b538);
      if (lVar19 == 0) goto LAB_009be1f7;
      FUN_009bf31a();
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = (char *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      if (*local_1e8 != '\0') {
        puVar22 = operator_new(uVar27);
        puVar22[1] = &DAT_025222d8;
        puVar22[2] = local_390;
        puVar22[3] = local_388;
        *puVar22 = &DAT_02522348;
        puVar22[4] = local_380;
        puVar22[6] = &DAT_025222d8;
        puVar22[7] = local_368;
        puVar22[8] = local_360;
        puVar22[5] = &DAT_02522388;
        puVar22[10] = &DAT_025222d8;
        puVar22[0xb] = local_348;
        puVar22[0xc] = local_340;
        puVar22[9] = &DAT_025223c8;
        puVar22[0xd] = local_338;
        puVar22[0xe] = &DAT_02522408;
        puVar22[0xf] = local_328;
        puVar22[0x10] = local_320;
        puVar22[0x11] = local_318;
        puVar22[0x12] = &DAT_02522408;
        puVar22[0x13] = local_308;
        puVar22[0x14] = local_300;
        puVar22[0x15] = local_2f8;
        puVar22[0x16] = local_2f0;
        puVar22[0x17] = local_2e8;
        puVar22[0x19] = &DAT_025222d8;
        puVar22[0x1a] = local_2d0;
        puVar22[0x1b] = local_2c8;
        puVar22[0x18] = &DAT_02522438;
        puVar22[0x1d] = &DAT_025222d8;
        puVar22[0x1e] = local_2b0;
        puVar22[0x1f] = local_2a8;
        puVar22[0x1c] = &DAT_02522478;
        puVar22[0x20] = local_2a0;
        puVar22[0x21] = &DAT_02522408;
        puVar22[0x22] = local_290;
        puVar22[0x23] = local_288;
        puVar22[0x24] = local_280;
        puVar22[0x25] = &DAT_025224b8;
        puVar22[0x26] = local_270;
        puVar22[0x27] = local_268;
        puVar22[0x28] = local_260;
        puVar22[0x29] = &DAT_02522408;
        puVar22[0x2a] = local_250;
        puVar22[0x2b] = local_248;
        puVar22[0x2c] = local_240;
        puVar22[0x2d] = &DAT_02522408;
        puVar22[0x2e] = local_230;
        puVar22[0x2f] = local_228;
        puVar22[0x30] = local_220;
        puVar22[0x31] = &DAT_02522408;
        puVar22[0x34] = local_200;
        puVar22[0x33] = local_208;
        puVar22[0x32] = local_210;
        puVar22[0x35] = local_1f8;
        puVar22[0x36] = local_1f0;
        puVar23 = operator_new((ulong)local_1f0);
        puVar23[2] = 0;
        puVar23[1] = 0;
        psVar30 = (string *)&DAT_02522538;
        *puVar23 = &DAT_02522538;
        puVar23[3] = puVar22;
        unaff_RDI[0xb] = (longlong)puVar22;
        plVar20 = (longlong *)unaff_RDI[0xc];
        unaff_RDI[0xc] = (longlong)puVar23;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar20 + 1;
          lVar19 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar20 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
        std::string::operator=(psVar30,local_228);
        psVar30 = *(string **)(unaff_RDI[0xb] + 0x1a8);
        if (*psVar30 == (string)0x0) {
          std::string::operator=(psVar30,local_228);
        }
        else {
          pbVar26 = *(byte **)(unaff_RDI[0xb] + 0x110);
          FUN_009bee84();
          if ((*pbVar26 & 1) == 0) {
            pbVar32 = pbVar26 + 1;
            uVar27 = (ulong)(*pbVar26 >> 1);
          }
          else {
            uVar27 = (ulong)*(undefined8 *)(pbVar26 + 8);
            pbVar32 = *(byte **)(pbVar26 + 0x10);
          }
          puVar24 = (ulonglong *)std::string::insert(uVar27,(char *)pbVar32,param_3);
          uVar9 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          local_d8 = (undefined1 *)0x0;
          local_e8 = (char *)0x0;
          pcStack_e0 = (char *)0x0;
          local_50 = (undefined1 *)((longlong)&local_68 + 2);
          puVar4 = (undefined1 *)((longlong)&local_58 + 7);
          iVar8 = **(int **)(unaff_RDI[0xb] + 0x130);
          iVar17 = -iVar8;
          if (0 < iVar8) {
            iVar17 = iVar8;
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar17);
          local_c0 = CONCAT71(local_c0._1_7_,0x30);
          local_c0 = CONCAT44(0x30,(undefined4)local_c0);
          local_c8 = puVar4;
          local_48 = puVar4;
          puVar25 = (undefined1 *)FUN_009bff00();
          if (iVar8 < 0) {
            puVar25[-1] = 0x2d;
            puVar25 = puVar25 + -1;
          }
          pcVar33 = puVar4 + -(longlong)puVar25;
          pcVar29 = (char *)((ulonglong)local_e8 & 0xff);
          bVar35 = ((ulonglong)local_e8 & 1) == 0;
          pcVar28 = local_e8;
          if (bVar35) {
            pcVar28 = pcVar29;
          }
          pcVar34 = (char *)((longlong)&MACH_HEADER.sizeofcmds + 2);
          if (!bVar35) {
            pcVar34 = (char *)(((ulonglong)local_e8 & 0xfffffffffffffffe) - 1);
          }
          local_50 = puVar25;
          local_48 = puVar4;
          if (pcVar34 <= pcVar33 && (longlong)pcVar33 - (longlong)pcVar34 != 0) {
            pcVar29 = pcStack_e0;
            if (((ulonglong)local_e8 & 1) == 0) {
              pcVar29 = (char *)((ulonglong)local_e8 >> 1 & 0x7f);
            }
            param_3 = 0;
            std::string::__grow_by
                      ((ulong)pcVar29,(ulong)((longlong)pcVar33 - (longlong)pcVar34),0,
                       (ulong)pcVar29,in_stack_fffffffffffffc28,in_stack_fffffffffffffc30);
            pcVar28 = (char *)((ulonglong)local_e8 & 0xff);
          }
          puVar18 = (undefined1 *)((longlong)&local_e8 + 1);
          if (((ulonglong)pcVar28 & 1) != 0) {
            puVar18 = local_d8;
          }
          for (; puVar25 != puVar4; puVar25 = puVar25 + 1) {
            pcVar29 = (char *)CONCAT71((int7)((ulonglong)pcVar29 >> 8),*puVar25);
            *puVar18 = *puVar25;
            puVar18 = puVar18 + 1;
          }
          *puVar18 = 0;
          pcVar28 = pcVar33;
          if (((ulonglong)local_e8 & 1) == 0) {
            local_e8 = (char *)CONCAT71(local_e8._1_7_,(char)pcVar33 * '\x02');
            pcVar33 = (char *)(ulonglong)((uint)pcVar33 & 0x7f);
            pcVar28 = pcStack_e0;
          }
          pcStack_e0 = pcVar28;
          puVar24 = (ulonglong *)std::string::append(pcVar29,(ulong)pcVar33);
          uVar10 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_68 & 1) == 0) {
            uStack_60._0_4_ = (ulong)((byte)local_68 >> 1);
          }
          puVar24 = (ulonglong *)std::string::append(pcVar29,(ulong)uStack_60);
          uVar11 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(unaff_RDI[0xb] + 0x150);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(undefined8 *)(*(byte **)(unaff_RDI[0xb] + 0x150) + 8);
          }
          puVar24 = (ulonglong *)std::string::append((char *)0x0,uVar27);
          uVar12 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_d0 & 1) == 0) {
            uVar27 = (ulong)((byte)local_d0 >> 1);
          }
          else {
            uVar27 = (ulong)local_c8;
          }
          puVar24 = (ulonglong *)std::string::append(pcVar29,uVar27);
          uVar13 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(unaff_RDI[0xb] + 400);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(undefined8 *)(*(byte **)(unaff_RDI[0xb] + 400) + 8);
          }
          puVar24 = (ulonglong *)std::string::append((char *)0x0,uVar27);
          uVar14 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_128 & 1) == 0) {
            local_120 = (ulong)(local_128 >> 1);
          }
          puVar24 = (ulonglong *)std::string::append(pcVar29,local_120);
          uVar15 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(unaff_RDI[0xb] + 0x170);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(undefined8 *)(*(byte **)(unaff_RDI[0xb] + 0x170) + 8);
          }
          pbVar26 = (byte *)std::string::append((char *)0x0,uVar27);
          local_88 = *pbVar26;
          uVar16 = *(undefined8 *)(pbVar26 + 8);
          uStack_90 = (undefined6)((ulonglong)uVar16 >> 0x10);
          local_92 = (undefined2)((ulonglong)*(undefined8 *)(pbVar26 + 2) >> 0x30);
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          pbVar26[8] = 0;
          pbVar26[9] = 0;
          pbVar26[10] = 0;
          pbVar26[0xb] = 0;
          pbVar26[0xc] = 0;
          pbVar26[0xd] = 0;
          pbVar26[0xe] = 0;
          pbVar26[0xf] = 0;
          pbVar26[0x10] = 0;
          pbVar26[0x11] = 0;
          pbVar26[0x12] = 0;
          pbVar26[0x13] = 0;
          pbVar26[0x14] = 0;
          pbVar26[0x15] = 0;
          pbVar26[0x16] = 0;
          pbVar26[0x17] = 0;
          pvVar31 = (void *)CONCAT62(uStack_90,local_92);
          uStack_80 = local_92;
          uStack_7e = (undefined4)((ulonglong)uVar16 >> 0x10);
          if ((uVar15 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_128 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar14 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar13 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar12 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar11 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_68 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar10 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if (((ulonglong)local_e8 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar9 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_1d8 & 1) != 0) {
            operator_delete(pvVar31);
          }
        }
      }
      FUN_009bee84();
      if ((local_108 & 1) == 0) {
        uVar27 = (ulong)((byte)local_108 >> 1);
        pcVar29 = (char *)((longlong)&local_108 + 1);
      }
      else {
        uVar27 = (ulong)uStack_100;
        pcVar29 = local_f8;
      }
      puVar24 = (ulonglong *)std::string::insert(uVar27,pcVar29,param_3);
      local_58 = puVar24[2];
      local_68 = *puVar24;
      uStack_60 = puVar24[1];
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[2] = 0;
      if ((local_88 & 1) == 0) {
        uVar27 = (ulong)(local_88 >> 1);
      }
      else {
        uVar27 = (ulong)CONCAT42(uStack_7e,uStack_80);
      }
      puVar22 = (undefined8 *)std::string::append((char *)0x0,uVar27);
      uVar6 = *(undefined1 *)puVar22;
      uVar7 = *(undefined1 *)((longlong)puVar22 + 1);
      local_a8 = (undefined6)((ulonglong)puVar22[1] >> 0x10);
      uVar16 = *(undefined8 *)((longlong)puVar22 + 2);
      uStack_aa = (undefined2)((ulonglong)uVar16 >> 0x30);
      lVar19 = puVar22[2];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      if ((*pbVar2 & 1) != 0) {
        operator_delete((void *)0x0);
      }
      *(undefined1 *)(unaff_RDI + 5) = uVar6;
      *(undefined1 *)((longlong)unaff_RDI + 0x29) = uVar7;
      pvVar31 = (void *)CONCAT62(local_a8,uStack_aa);
      *(undefined8 *)((longlong)unaff_RDI + 0x2a) = uVar16;
      unaff_RDI[6] = (longlong)pvVar31;
      unaff_RDI[7] = lVar19;
      if ((local_68 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_108 & 1) == 0) goto LAB_009be1f7;
LAB_009bead4:
      operator_delete(pvVar31);
      goto LAB_009be1f7;
    }
LAB_009bdc78:
    *(int *)(unaff_RDI + 1) = (int)pcVar29;
  }
  (**(code **)(*unaff_RSI + 0x10))();
  std::string::assign(pcVar29);
LAB_009be1f7:
  (**(code **)(*unaff_RDI + 0x18))(param_2,unaff_RSI);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


