// Function: FUN_00cd3a20
// Address: 00cd3a20
// Size: 3891 bytes
// Class: GNString


void FUN_00cd3a20(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *****ppppplVar10;
  longlong *******ppppppplVar11;
  longlong ******pppppplVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint *puVar15;
  longlong lVar16;
  longlong *******ppppppplVar17;
  longlong local_360;
  char local_358;
  longlong local_350;
  char local_348;
  longlong ******local_330;
  char local_328;
  longlong ******local_320;
  char local_318;
  longlong ******local_310;
  char local_308;
  undefined8 local_300;
  longlong ******local_2f8;
  char local_2f0;
  longlong ******local_2e8;
  char local_2e0;
  undefined8 local_2d8;
  longlong ******local_2d0;
  char local_2c8;
  longlong ******local_2c0;
  char local_2b8;
  uint local_2b0;
  uint local_2ac;
  longlong ******local_2a8;
  char local_2a0;
  uint local_294;
  longlong ******local_290;
  longlong local_288;
  longlong ******local_280;
  longlong ******local_278;
  longlong ******local_270;
  longlong ******local_268;
  char local_260;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(longlong **)(unaff_RSI + 0x40) == (longlong *)0x0) {
    if (*(char *)(unaff_RSI + 0x30) == '\0') {
      FUN_00cccea0();
      goto LAB_00cd4932;
    }
    FUN_00cccea0();
    if ((local_358 != '\0') && (local_360 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x40) + 0x30) +
                0x368))();
    if (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x40) + 0x38) != 0) {
      FUN_00cd4fc0();
      lVar16 = *(longlong *)(unaff_RSI + 0x38);
      ppppppplVar11 = *(longlong ********)(lVar16 + 0x40);
      local_290 = (longlong ******)ppppppplVar11;
      if (*(longlong *)(lVar16 + 0x50) == 0) {
        if (ppppppplVar11 != (longlong *******)0x0) {
          FUN_00d50b00();
          lVar16 = *(longlong *)(unaff_RSI + 0x38);
        }
        iVar4 = *(int *)(lVar16 + 0x48);
        ppppppplVar13 = *(longlong ********)(unaff_RSI + 0x10);
        if (ppppppplVar13 != (longlong *******)0x0) {
          FUN_00d50b00();
        }
        local_2d8 = (longlong *******)ppppppplVar11[7];
        local_270 = (longlong ******)ppppppplVar13;
        if (local_2d8 == (longlong *******)0x0) {
          local_300 = 0;
          local_280 = (longlong ******)0x0;
        }
        else {
          local_300 = 0;
          local_280 = (longlong ******)0x0;
          local_288 = 0;
          local_278 = (longlong ******)0x0;
          uVar6 = FUN_00d50b00();
          local_300 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          local_280 = (longlong ******)local_2d8;
        }
        local_2ac = 0;
        local_2b0 = 0;
        ppppppplVar13 = (longlong *******)ppppppplVar11[4][2];
        lVar16 = (ulonglong)(iVar4 - 1) * 0x23c;
        ppppplVar10 = ppppppplVar11[9][4];
        if (ppppplVar10 != (longlong *****)0x0) {
          local_2e8 = local_270;
          local_2e0 = '\0';
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            if (*(short *)((longlong)ppppppplVar13 + uVar8 * 2 + lVar16 + 0x24) == 0) break;
            uVar9 = uVar8 + 1;
          } while (uVar8 < 0x100);
          local_278 = (longlong ******)ppppppplVar13;
          if ((int)(uVar8 + 1) == 1) {
            FUN_00d8ede0();
          }
          else {
            FUN_00d920f0(ppppppplVar11[9],uVar8);
          }
          pppppplVar12 = local_2a8;
          local_2c8 = 0;
          if (local_2a0 == '\0') {
            if ((longlong *******)local_2a8 != (longlong *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_2a0 = '\0';
          }
          local_2c8 = '\x01';
          local_2d0 = pppppplVar12;
          puVar15 = &local_2ac;
          (*(code *)(*ppppplVar10)[3])(&local_2d0,&local_2e8,puVar15,&local_2b0);
          ppppppplVar13 = (longlong *******)local_278;
          ppppppplVar11 = (longlong *******)local_2c0;
          param_3 = (size_t)puVar15;
          if (local_270 == local_2c0) {
LAB_00cd433f:
            ppppppplVar11 = (longlong *******)local_270;
            if ((local_2b8 != '\0') && ((longlong *******)local_2c0 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_2b8 == '\0') {
              if ((longlong *******)local_2c0 != (longlong *******)0x0) {
                FUN_00d50b00();
              }
              if ((longlong *******)local_270 == (longlong *******)0x0) {
                local_270 = (longlong ******)ppppppplVar11;
              }
              else {
                local_270 = (longlong ******)ppppppplVar11;
                FUN_00d50b20();
              }
              goto LAB_00cd433f;
            }
            if ((longlong *******)local_270 != (longlong *******)0x0) {
              local_270 = local_2c0;
              FUN_00d50b20();
            }
            local_2b8 = '\0';
          }
          if ((local_2c8 != '\0') && ((longlong *******)local_2d0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2a0 != '\0') && ((longlong *******)local_2a8 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          local_270 = (longlong ******)ppppppplVar11;
          if ((local_2e0 != '\0') && ((longlong *******)local_2e8 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        ppppplVar10 = (longlong *****)(lVar16 + (longlong)ppppppplVar13);
        local_294 = *(uint *)((longlong)ppppppplVar13 + lVar16 + 0x20);
        lVar2 = *(longlong *)((longlong)ppppppplVar13 + lVar16 + 0x10);
        if ((lVar2 == 0) ||
           (uVar1 = *(uint *)(local_270 + 3),
           (ulonglong)uVar1 <= (lVar2 + (ulonglong)*(uint *)ppppplVar10) - 0x22c)) {
          local_288 = 0;
          local_278 = (longlong ******)0x0;
          ppppppplVar11 = (longlong *******)local_290;
        }
        else {
          *(undefined8 *)((longlong)ppppppplVar13 + lVar16 + 8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            if (*(short *)((longlong)ppppppplVar13 + uVar8 * 2 + lVar16 + 0x24) == 0) break;
            uVar9 = uVar8 + 1;
          } while (uVar8 < 0x100);
          if ((int)(uVar8 + 1) == 1) {
            FUN_00d8ede0();
          }
          else {
            FUN_00d920f0((ulonglong)uVar1,uVar8);
          }
          local_278 = local_2c0;
          if ((longlong *******)local_2c0 == (longlong *******)0x0) {
            local_278 = (longlong ******)0x0;
            local_288 = 0;
          }
          else {
            local_288 = CONCAT71((int7)((ulonglong)local_2c0 >> 8),1);
            if (((local_2b8 == '\0') && (FUN_00d50b00(), local_2b8 != '\0')) &&
               ((longlong *******)local_2c0 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          ppppppplVar11 = (longlong *******)local_290;
          uVar9 = *(ulonglong *)((longlong)ppppppplVar13 + lVar16 + 8);
          local_268 = (longlong ******)
                      (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                       (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                       (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                       (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38);
          (*(code *)(*local_280)[0x74])();
          if ((local_2b8 != '\0') && ((longlong *******)local_2c0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          (*(code *)(*local_280)[0x71])(8,&local_268);
          pppppplVar12 = local_2a8;
          if ((local_2a0 != '\0') && ((longlong *******)local_2a8 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((longlong *******)pppppplVar12 != (longlong *******)0x0) {
            (*(code *)(*ppppppplVar11[6])[0x6f])();
            local_2a8 = (longlong ******)DAT_02774d70;
            if (DAT_02774d70 != (longlong *******)0x0) {
              FUN_00d50b00();
            }
            local_2a0 = '\x01';
            FUN_00cc78b0();
            if ((local_2a0 != '\0') && ((longlong *******)local_2a8 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar9 = (ulonglong)*(uint *)((longlong)ppppppplVar11 + 0x1c);
          if (uVar9 != 0) {
            ppppplVar10 = ppppppplVar11[4][2];
            do {
              if (((ppppplVar10[1] == (longlong ****)0x0) && (ppppplVar10[2] != (longlong ****)0x0))
                 && (pppppplVar12 = (longlong ******)
                                    ((longlong)ppppplVar10[2] +
                                    ((ulonglong)*(uint *)ppppplVar10 - 0x22c)),
                    (longlong ******)(ulonglong)*(uint *)(local_270 + 3) <= pppppplVar12)) {
                ppppplVar10[2] = (longlong ****)pppppplVar12;
                ___bzero();
                goto LAB_00cd4668;
              }
              ppppplVar10 = (longlong *****)((longlong)ppppplVar10 + 0x23c);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          ppppplVar10 = (longlong *****)FUN_00cdaed0();
          ppppplVar10[2] = (longlong ****)(longlong)*(int *)(local_270 + 3);
          *(longlong *******)((longlong)ppppplVar10 + 0x22c) = ppppppplVar11[5];
          pppppplVar12 = ppppppplVar11[5];
          ppppppplVar11[5] =
               (longlong ******)((longlong)pppppplVar12 + (longlong)*(int *)(local_270 + 3) + 0x22c)
          ;
LAB_00cd4668:
          FUN_00d8d520();
          iVar4 = FUN_00d8c7a0();
          _memcpy(pppppplVar12,(void *)((longlong)iVar4 * 2),param_3);
          iVar4 = FUN_00d8c7a0();
          *(undefined2 *)((longlong)ppppplVar10 + (longlong)iVar4 * 2 + 0x24) = 0;
        }
        *(uint *)(ppppplVar10 + 4) = local_294;
        *(uint *)ppppplVar10 = 0x22c;
        ppppplVar10[1] = (longlong ****)(longlong)*(int *)(local_270 + 3);
        *(uint *)((longlong)ppppplVar10 + 0x1c) = local_2ac;
        *(uint *)(ppppplVar10 + 3) = local_2b0;
        *(uint *)((longlong)ppppplVar10 + 4) = 0;
        local_318 = '\0';
        local_320 = (longlong ******)ppppppplVar11;
        cVar3 = FUN_00cdb0d0();
        if ((local_318 != '\0') && ((longlong *******)local_320 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar13 = DAT_02774d70;
        if (cVar3 == '\0') {
          if (DAT_02774d70 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (ppppppplVar13 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
        }
        (*(code *)(*local_280)[0x71])(*(undefined4 *)(local_270 + 3),local_270[2]);
        pppppplVar12 = local_2f8;
        if ((local_2f0 != '\0') && ((longlong *******)local_2f8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar13 = DAT_02774d70;
        if ((longlong *******)pppppplVar12 != (longlong *******)0x0) {
          if (DAT_02774d70 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          local_2f8 = (longlong ******)ppppppplVar13;
          local_2f0 = '\x01';
          FUN_00cc78b0();
          if ((local_2f0 != '\0') && ((longlong *******)local_2f8 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        (*(code *)(*local_280)[0x74])();
        if ((local_308 != '\0') && ((longlong *******)local_310 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        uVar1 = *(uint *)((longlong)ppppppplVar11 + 0x1c);
        local_268 = (longlong ******)
                    CONCAT44(local_268._4_4_,
                             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18);
        (*(code *)(*local_280)[0x71])(4,&local_268);
        pppppplVar12 = local_330;
        if ((local_328 != '\0') && ((longlong *******)local_330 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar11 = DAT_02774d70;
        if ((longlong *******)pppppplVar12 != (longlong *******)0x0) {
          if (DAT_02774d70 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          local_330 = (longlong ******)ppppppplVar11;
          local_328 = '\x01';
          FUN_00cc78b0();
          if ((local_328 != '\0') && ((longlong *******)local_330 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_2d8 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_288 != '\0') && ((longlong *******)local_278 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      else {
        if (ppppppplVar11 != (longlong *******)0x0) {
          FUN_00d50b00();
          lVar16 = *(longlong *)(unaff_RSI + 0x38);
        }
        lVar16 = *(longlong *)(lVar16 + 0x50);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        ppppppplVar11 = *(longlong ********)(unaff_RSI + 0x10);
        local_288 = lVar16;
        if (ppppppplVar11 != (longlong *******)0x0) {
          FUN_00d50b00();
        }
        local_2ac = 0;
        local_2b0 = 0;
        local_280 = (longlong ******)ppppppplVar11;
        FUN_00d8ee20();
        local_278 = local_268;
        ppppppplVar11 = (longlong *******)local_268;
        if ((longlong *******)local_268 == (longlong *******)0x0) {
          local_294 = 1;
          local_278 = (longlong ******)0x0;
          local_300 = 0;
        }
        else {
          local_300 = CONCAT71((int7)((ulonglong)local_268 >> 8),1);
          if (local_260 == '\0') {
            FUN_00d50b00();
            local_294 = 0;
            if ((local_260 == '\0') || ((longlong *******)local_268 == (longlong *******)0x0))
            goto LAB_00cd3c75;
            FUN_00d50b20();
          }
          local_294 = 0;
        }
LAB_00cd3c75:
        uVar6 = FUN_00d8a060();
        ppppppplVar13 = (longlong *******)local_268;
        if ((longlong *******)local_268 == (longlong *******)0x0) {
          local_2d8 = (longlong *******)
                      CONCAT44(local_2d8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1));
          ppppppplVar13 = (longlong *******)0x0;
        }
        else {
          if (local_260 == '\0') {
            FUN_00d50b00();
            local_2d8 = (longlong *******)((ulonglong)local_2d8._4_4_ << 0x20);
            if ((local_260 == '\0') || ((longlong *******)local_268 == (longlong *******)0x0))
            goto LAB_00cd3cdf;
            FUN_00d50b20();
          }
          local_2d8 = (longlong *******)((ulonglong)local_2d8 & 0xffffffff00000000);
        }
LAB_00cd3cdf:
        local_270 = (longlong ******)ppppppplVar13;
        iVar4 = FUN_00d8c7a0();
        ppppppplVar14 = (longlong *******)local_270;
        ppppppplVar13 = (longlong *******)local_280;
        iVar5 = 0;
        if (iVar4 < 2) {
LAB_00cd3d50:
          if ((longlong *****)local_290[9][4] != (longlong *****)0x0) {
            local_2d0 = (longlong ******)ppppppplVar13;
            local_2c8 = '\0';
            local_2a8 = (longlong ******)ppppppplVar14;
            local_2a0 = '\0';
            ppppppplVar11 = &local_2a8;
            puVar15 = &local_2b0;
            (*(code *)(*local_290[9][4])[3])(ppppppplVar11,&local_2d0,puVar15,&local_2ac);
            pppppplVar12 = local_2e8;
            param_3 = (size_t)puVar15;
            ppppppplVar14 = ppppppplVar13;
            if (ppppppplVar13 == (longlong *******)local_2e8) {
LAB_00cd3fc0:
              if ((local_2e0 != '\0') && ((longlong *******)local_2e8 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_2e0 == '\0') {
                if ((longlong *******)local_2e8 != (longlong *******)0x0) {
                  FUN_00d50b00();
                }
                ppppppplVar14 = (longlong *******)pppppplVar12;
                if (ppppppplVar13 != (longlong *******)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_00cd3fc0;
              }
              if (ppppppplVar13 != (longlong *******)0x0) {
                FUN_00d50b20();
              }
              local_2e0 = '\0';
              ppppppplVar14 = (longlong *******)local_2e8;
            }
            if ((local_2a0 != '\0') && ((longlong *******)local_2a8 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            local_280 = (longlong ******)ppppppplVar14;
            if ((local_2c8 != '\0') && ((longlong *******)local_2d0 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_2e8 = local_290;
          local_2e0 = '\0';
          puVar7 = (undefined4 *)FUN_00cdaed0();
          FUN_00d8d520();
          iVar4 = FUN_00d8c7a0();
          _memcpy(ppppppplVar11,(void *)((longlong)iVar4 * 2),param_3);
          iVar4 = FUN_00d8c7a0();
          *(undefined2 *)((longlong)puVar7 + (longlong)iVar4 * 2 + 0x24) = 0;
          puVar7[8] = iVar5;
          *puVar7 = 0x22c;
          iVar4 = *(int *)(local_280 + 3);
          *(longlong *)(puVar7 + 2) = (longlong)iVar4;
          *(longlong *)(puVar7 + 4) = (longlong)iVar4;
          puVar7[7] = local_2b0;
          puVar7[6] = local_2ac;
          puVar7[1] = 0;
          *(longlong ******)(puVar7 + 0x8b) = local_290[5];
          (*(code *)(*local_290[7])[0x74])(local_290,0x10);
          if ((local_348 != '\0') && (local_350 != 0)) {
            FUN_00d50b20();
          }
          ppppppplVar17 = (longlong *******)local_290;
          uVar1 = *(uint *)((longlong)local_290 + 0x1c);
          local_330 = (longlong ******)
                      CONCAT44(local_330._4_4_,
                               uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                               uVar1 << 0x18);
          (*(code *)(*local_290[7])[0x71])(4,&local_330);
          pppppplVar12 = local_320;
          if ((local_318 != '\0') && ((longlong *******)local_320 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((longlong *******)pppppplVar12 == (longlong *******)0x0) {
            ppppppplVar17[5] = (longlong ******)((longlong)ppppppplVar17[5] + 0x22c);
            (*(code *)(*ppppppplVar17[7])[0x74])();
            if ((local_318 != '\0') && ((longlong *******)local_320 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            ppppppplVar17 = (longlong *******)local_290;
            cVar3 = FUN_00cdb0d0();
            ppppppplVar13 = (longlong *******)local_280;
            ppppppplVar11 = DAT_02774d70;
            if (cVar3 == '\0') {
              if (DAT_02774d70 != (longlong *******)0x0) {
                FUN_00d50b00();
              }
              local_2f8 = (longlong ******)ppppppplVar11;
              local_2f0 = '\x01';
              FUN_00cc78b0();
              if ((local_2f0 != '\0') && ((longlong *******)local_2f8 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            iVar4 = *(int *)(ppppppplVar13 + 3);
            ppppppplVar17[5] = (longlong ******)((longlong)ppppppplVar17[5] + (longlong)iVar4);
            (*(code *)(*ppppppplVar17[7])[0x71])((longlong)iVar4,ppppppplVar13[2]);
            pppppplVar12 = local_310;
            if ((local_308 != '\0') && ((longlong *******)local_310 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            ppppppplVar11 = DAT_02774d70;
            ppppppplVar14 = (longlong *******)local_270;
            if ((longlong *******)pppppplVar12 != (longlong *******)0x0) {
              if (DAT_02774d70 != (longlong *******)0x0) {
                FUN_00d50b00();
              }
              local_310 = (longlong ******)ppppppplVar11;
              local_308 = '\x01';
              FUN_00cc78b0();
              ppppppplVar14 = (longlong *******)local_270;
              if ((local_308 != '\0') && ((longlong *******)local_310 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *(int *)((longlong)ppppppplVar17 + 0x1c) = *(int *)((longlong)ppppppplVar17 + 0x1c) + -1
            ;
            ppppppplVar14 = (longlong *******)local_270;
            ppppppplVar13 = (longlong *******)local_280;
          }
        }
        else {
          local_268 = local_290;
          local_260 = '\0';
          local_2c0 = local_278;
          local_2b8 = '\0';
          iVar5 = FUN_00cd8690();
          ppppppplVar17 = (longlong *******)local_290;
          if (iVar5 != 0) goto LAB_00cd3d50;
        }
        if ((char)local_2d8 == '\0' && ppppppplVar14 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_294 == '\0' && (longlong *******)local_278 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (ppppppplVar13 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (local_288 != 0) {
          FUN_00d50b20();
        }
        if (ppppppplVar17 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        FUN_00cd4fc0();
      }
    }
    (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x40) + 0x30) +
                0x378))();
  }
  else if (*(char *)(unaff_RSI + 0x50) == '\0') {
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x368))();
    goto LAB_00cd4932;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00cd4932:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


