// Function: FUN_00cd3a20
// Address: 00cd3a20
// Size: 3891 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd3a20(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  void*puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *****ppppplVar10;
  int64_t *******ppppppplVar11;
  int64_t ******pppppplVar12;
  int64_t *******ppppppplVar13;
  int64_t *******ppppppplVar14;
  int64_t arg1;
  void*this_ptr;
  uint *puVar15;
  int64_t lVar16;
  int64_t *******ppppppplVar17;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  int64_t ******local_330;
  char local_328;
  int64_t ******local_320;
  char local_318;
  int64_t ******local_310;
  char local_308;
  uint64_t local_300;
  int64_t ******local_2f8;
  char local_2f0;
  int64_t ******local_2e8;
  char local_2e0;
  uint64_t local_2d8;
  int64_t ******local_2d0;
  char local_2c8;
  int64_t ******local_2c0;
  char local_2b8;
  uint local_2b0;
  uint local_2ac;
  int64_t ******local_2a8;
  char local_2a0;
  uint local_294;
  int64_t ******local_290;
  int64_t local_288;
  int64_t ******local_280;
  int64_t ******local_278;
  int64_t ******local_270;
  int64_t ******local_268;
  char local_260;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*(int64_t **)(arg1 + 0x40) == (int64_t *)0x0) {
    if (*(char *)(arg1 + 0x30) == '\0') {
      FUN_00cccea0();
      goto LAB_00cd4932;
    }
    FUN_00cccea0();
    if ((local_358 != '\0') && (local_360 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x40) + 0x30) +
                0x368))();
    if (*(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x40) + 0x38) != 0) {
      FUN_00cd4fc0();
      lVar16 = *(int64_t *)(arg1 + 0x38);
      ppppppplVar11 = *(int64_t ********)(lVar16 + 0x40);
      local_290 = (int64_t ******)ppppppplVar11;
      if (*(int64_t *)(lVar16 + 0x50) == 0) {
        if (ppppppplVar11 != (int64_t *******)0x0) {
          FUN_00d50b00();
          lVar16 = *(int64_t *)(arg1 + 0x38);
        }
        iVar4 = *(int *)(lVar16 + 0x48);
        ppppppplVar13 = *(int64_t ********)(arg1 + 0x10);
        if (ppppppplVar13 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        local_2d8 = (int64_t *******)ppppppplVar11[7];
        local_270 = (int64_t ******)ppppppplVar13;
        if (local_2d8 == (int64_t *******)0x0) {
          local_300 = 0;
          local_280 = (int64_t ******)0x0;
        }
        else {
          local_300 = 0;
          local_280 = (int64_t ******)0x0;
          local_288 = 0;
          local_278 = (int64_t ******)0x0;
          uVar6 = FUN_00d50b00();
          local_300 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          local_280 = (int64_t ******)local_2d8;
        }
        local_2ac = 0;
        local_2b0 = 0;
        ppppppplVar13 = (int64_t *******)ppppppplVar11[4][2];
        lVar16 = (uint64_t)(iVar4 - 1) * 0x23c;
        ppppplVar10 = ppppppplVar11[9][4];
        if (ppppplVar10 != (int64_t *****)0x0) {
          local_2e8 = local_270;
          local_2e0 = '\0';
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            if (*(short *)((int64_t)ppppppplVar13 + uVar8 * 2 + lVar16 + 0x24) == 0) break;
            uVar9 = uVar8 + 1;
          } while (uVar8 < 0x100);
          local_278 = (int64_t ******)ppppppplVar13;
          if ((int)(uVar8 + 1) == 1) {
            FUN_00d8ede0();
          }
          else {
            FUN_00d920f0(ppppppplVar11[9],uVar8);
          }
          pppppplVar12 = local_2a8;
          local_2c8 = 0;
          if (local_2a0 == '\0') {
            if ((int64_t *******)local_2a8 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_2a0 = '\0';
          }
          local_2c8 = '\x01';
          local_2d0 = pppppplVar12;
          puVar15 = &local_2ac;
          (*(*ppppplVar10)[3])(&local_2d0,&local_2e8,puVar15,&local_2b0);
          ppppppplVar13 = (int64_t *******)local_278;
          ppppppplVar11 = (int64_t *******)local_2c0;
          param_3 = (size_t)puVar15;
          if (local_270 == local_2c0) {
LAB_00cd433f:
            ppppppplVar11 = (int64_t *******)local_270;
            if ((local_2b8 != '\0') && ((int64_t *******)local_2c0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_2b8 == '\0') {
              if ((int64_t *******)local_2c0 != (int64_t *******)0x0) {
                FUN_00d50b00();
              }
              if ((int64_t *******)local_270 == (int64_t *******)0x0) {
                local_270 = (int64_t ******)ppppppplVar11;
              }
              else {
                local_270 = (int64_t ******)ppppppplVar11;
                FUN_00d50b20();
              }
              goto LAB_00cd433f;
            }
            if ((int64_t *******)local_270 != (int64_t *******)0x0) {
              local_270 = local_2c0;
              FUN_00d50b20();
            }
            local_2b8 = '\0';
          }
          if ((local_2c8 != '\0') && ((int64_t *******)local_2d0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2a0 != '\0') && ((int64_t *******)local_2a8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          local_270 = (int64_t ******)ppppppplVar11;
          if ((local_2e0 != '\0') && ((int64_t *******)local_2e8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        ppppplVar10 = (int64_t *****)(lVar16 + (int64_t)ppppppplVar13);
        local_294 = *(uint *)((int64_t)ppppppplVar13 + lVar16 + 0x20);
        lVar2 = *(int64_t *)((int64_t)ppppppplVar13 + lVar16 + 0x10);
        if ((lVar2 == 0) ||
           (uVar1 = *(uint *)(local_270 + 3),
           (uint64_t)uVar1 <= (lVar2 + (uint64_t)*(uint *)ppppplVar10) - 0x22c)) {
          local_288 = 0;
          local_278 = (int64_t ******)0x0;
          ppppppplVar11 = (int64_t *******)local_290;
        }
        else {
          *(void*)((int64_t)ppppppplVar13 + lVar16 + 8) = 0;
          uVar9 = 0;
          do {
            uVar8 = uVar9;
            if (*(short *)((int64_t)ppppppplVar13 + uVar8 * 2 + lVar16 + 0x24) == 0) break;
            uVar9 = uVar8 + 1;
          } while (uVar8 < 0x100);
          if ((int)(uVar8 + 1) == 1) {
            FUN_00d8ede0();
          }
          else {
            FUN_00d920f0((uint64_t)uVar1,uVar8);
          }
          local_278 = local_2c0;
          if ((int64_t *******)local_2c0 == (int64_t *******)0x0) {
            local_278 = (int64_t ******)0x0;
            local_288 = 0;
          }
          else {
            local_288 = CONCAT71((int7)((uint64_t)local_2c0 >> 8),1);
            if (((local_2b8 == '\0') && (FUN_00d50b00(), local_2b8 != '\0')) &&
               ((int64_t *******)local_2c0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          ppppppplVar11 = (int64_t *******)local_290;
          uVar9 = *(uint64_t *)((int64_t)ppppppplVar13 + lVar16 + 8);
          local_268 = (int64_t ******)
                      (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                       (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                       (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                       (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38);
          (*(*local_280)[0x74])();
          if ((local_2b8 != '\0') && ((int64_t *******)local_2c0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          (*(*local_280)[0x71])(8,&local_268);
          pppppplVar12 = local_2a8;
          if ((local_2a0 != '\0') && ((int64_t *******)local_2a8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((int64_t *******)pppppplVar12 != (int64_t *******)0x0) {
            (*(*ppppppplVar11[6])[0x6f])();
            local_2a8 = (int64_t ******)g_02774d70;
            if (g_02774d70 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            local_2a0 = '\x01';
            FUN_00cc78b0();
            if ((local_2a0 != '\0') && ((int64_t *******)local_2a8 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar9 = (uint64_t)*(uint *)((int64_t)ppppppplVar11 + 0x1c);
          if (uVar9 != 0) {
            ppppplVar10 = ppppppplVar11[4][2];
            do {
              if (((ppppplVar10[1] == (int64_t ****)0x0) && (ppppplVar10[2] != (int64_t ****)0x0))
                 && (pppppplVar12 = (int64_t ******)
                                    ((int64_t)ppppplVar10[2] +
                                    ((uint64_t)*(uint *)ppppplVar10 - 0x22c)),
                    (int64_t ******)(uint64_t)*(uint *)(local_270 + 3) <= pppppplVar12)) {
                ppppplVar10[2] = (int64_t ****)pppppplVar12;
                ___bzero();
                goto LAB_00cd4668;
              }
              ppppplVar10 = (int64_t *****)((int64_t)ppppplVar10 + 0x23c);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          ppppplVar10 = (int64_t *****)FUN_00cdaed0();
          ppppplVar10[2] = (int64_t ****)(int64_t)*(int *)(local_270 + 3);
          *(int64_t *******)((int64_t)ppppplVar10 + 0x22c) = ppppppplVar11[5];
          pppppplVar12 = ppppppplVar11[5];
          ppppppplVar11[5] =
               (int64_t ******)((int64_t)pppppplVar12 + (int64_t)*(int *)(local_270 + 3) + 0x22c)
          ;
LAB_00cd4668:
          FUN_00d8d520();
          iVar4 = FUN_00d8c7a0();
          _memcpy(pppppplVar12,(void *)((int64_t)iVar4 * 2),param_3);
          iVar4 = FUN_00d8c7a0();
          *(void*)((int64_t)ppppplVar10 + (int64_t)iVar4 * 2 + 0x24) = 0;
        }
        *(uint *)(ppppplVar10 + 4) = local_294;
        *(uint *)ppppplVar10 = 0x22c;
        ppppplVar10[1] = (int64_t ****)(int64_t)*(int *)(local_270 + 3);
        *(uint *)((int64_t)ppppplVar10 + 0x1c) = local_2ac;
        *(uint *)(ppppplVar10 + 3) = local_2b0;
        *(uint *)((int64_t)ppppplVar10 + 4) = 0;
        local_318 = '\0';
        local_320 = (int64_t ******)ppppppplVar11;
        cVar3 = FUN_00cdb0d0();
        if ((local_318 != '\0') && ((int64_t *******)local_320 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar13 = g_02774d70;
        if (cVar3 == '\0') {
          if (g_02774d70 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (ppppppplVar13 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
        }
        (*(*local_280)[0x71])(*(void*)(local_270 + 3),local_270[2]);
        pppppplVar12 = local_2f8;
        if ((local_2f0 != '\0') && ((int64_t *******)local_2f8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar13 = g_02774d70;
        if ((int64_t *******)pppppplVar12 != (int64_t *******)0x0) {
          if (g_02774d70 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          local_2f8 = (int64_t ******)ppppppplVar13;
          local_2f0 = '\x01';
          FUN_00cc78b0();
          if ((local_2f0 != '\0') && ((int64_t *******)local_2f8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        (*(*local_280)[0x74])();
        if ((local_308 != '\0') && ((int64_t *******)local_310 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        uVar1 = *(uint *)((int64_t)ppppppplVar11 + 0x1c);
        local_268 = (int64_t ******)
                    CONCAT44(local_268._4_4_,
                             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18);
        (*(*local_280)[0x71])(4,&local_268);
        pppppplVar12 = local_330;
        if ((local_328 != '\0') && ((int64_t *******)local_330 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar11 = g_02774d70;
        if ((int64_t *******)pppppplVar12 != (int64_t *******)0x0) {
          if (g_02774d70 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          local_330 = (int64_t ******)ppppppplVar11;
          local_328 = '\x01';
          FUN_00cc78b0();
          if ((local_328 != '\0') && ((int64_t *******)local_330 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_2d8 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_288 != '\0') && ((int64_t *******)local_278 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      else {
        if (ppppppplVar11 != (int64_t *******)0x0) {
          FUN_00d50b00();
          lVar16 = *(int64_t *)(arg1 + 0x38);
        }
        lVar16 = *(int64_t *)(lVar16 + 0x50);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        ppppppplVar11 = *(int64_t ********)(arg1 + 0x10);
        local_288 = lVar16;
        if (ppppppplVar11 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        local_2ac = 0;
        local_2b0 = 0;
        local_280 = (int64_t ******)ppppppplVar11;
        FUN_00d8ee20();
        local_278 = local_268;
        ppppppplVar11 = (int64_t *******)local_268;
        if ((int64_t *******)local_268 == (int64_t *******)0x0) {
          local_294 = 1;
          local_278 = (int64_t ******)0x0;
          local_300 = 0;
        }
        else {
          local_300 = CONCAT71((int7)((uint64_t)local_268 >> 8),1);
          if (local_260 == '\0') {
            FUN_00d50b00();
            local_294 = 0;
            if ((local_260 == '\0') || ((int64_t *******)local_268 == (int64_t *******)0x0))
            goto LAB_00cd3c75;
            FUN_00d50b20();
          }
          local_294 = 0;
        }
LAB_00cd3c75:
        uVar6 = FUN_00d8a060();
        ppppppplVar13 = (int64_t *******)local_268;
        if ((int64_t *******)local_268 == (int64_t *******)0x0) {
          local_2d8 = (int64_t *******)
                      CONCAT44(local_2d8._4_4_,(int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
          ppppppplVar13 = (int64_t *******)0x0;
        }
        else {
          if (local_260 == '\0') {
            FUN_00d50b00();
            local_2d8 = (int64_t *******)((uint64_t)local_2d8._4_4_ << 0x20);
            if ((local_260 == '\0') || ((int64_t *******)local_268 == (int64_t *******)0x0))
            goto LAB_00cd3cdf;
            FUN_00d50b20();
          }
          local_2d8 = (int64_t *******)((uint64_t)local_2d8 & 0xffffffff00000000);
        }
LAB_00cd3cdf:
        local_270 = (int64_t ******)ppppppplVar13;
        iVar4 = FUN_00d8c7a0();
        ppppppplVar14 = (int64_t *******)local_270;
        ppppppplVar13 = (int64_t *******)local_280;
        iVar5 = 0;
        if (iVar4 < 2) {
LAB_00cd3d50:
          if ((int64_t *****)local_290[9][4] != (int64_t *****)0x0) {
            local_2d0 = (int64_t ******)ppppppplVar13;
            local_2c8 = '\0';
            local_2a8 = (int64_t ******)ppppppplVar14;
            local_2a0 = '\0';
            ppppppplVar11 = &local_2a8;
            puVar15 = &local_2b0;
            (*(*local_290[9][4])[3])(ppppppplVar11,&local_2d0,puVar15,&local_2ac);
            pppppplVar12 = local_2e8;
            param_3 = (size_t)puVar15;
            ppppppplVar14 = ppppppplVar13;
            if (ppppppplVar13 == (int64_t *******)local_2e8) {
LAB_00cd3fc0:
              if ((local_2e0 != '\0') && ((int64_t *******)local_2e8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_2e0 == '\0') {
                if ((int64_t *******)local_2e8 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                }
                ppppppplVar14 = (int64_t *******)pppppplVar12;
                if (ppppppplVar13 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_00cd3fc0;
              }
              if (ppppppplVar13 != (int64_t *******)0x0) {
                FUN_00d50b20();
              }
              local_2e0 = '\0';
              ppppppplVar14 = (int64_t *******)local_2e8;
            }
            if ((local_2a0 != '\0') && ((int64_t *******)local_2a8 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            local_280 = (int64_t ******)ppppppplVar14;
            if ((local_2c8 != '\0') && ((int64_t *******)local_2d0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_2e8 = local_290;
          local_2e0 = '\0';
          puVar7 = (void*)FUN_00cdaed0();
          FUN_00d8d520();
          iVar4 = FUN_00d8c7a0();
          _memcpy(ppppppplVar11,(void *)((int64_t)iVar4 * 2),param_3);
          iVar4 = FUN_00d8c7a0();
          *(void*)((int64_t)puVar7 + (int64_t)iVar4 * 2 + 0x24) = 0;
          puVar7[8] = iVar5;
          *puVar7 = 0x22c;
          iVar4 = *(int *)(local_280 + 3);
          *(int64_t *)(puVar7 + 2) = (int64_t)iVar4;
          *(int64_t *)(puVar7 + 4) = (int64_t)iVar4;
          puVar7[7] = local_2b0;
          puVar7[6] = local_2ac;
          puVar7[1] = 0;
          *(int64_t ******)(puVar7 + 0x8b) = local_290[5];
          (*(*local_290[7])[0x74])(local_290,0x10);
          if ((local_348 != '\0') && (local_350 != 0)) {
            FUN_00d50b20();
          }
          ppppppplVar17 = (int64_t *******)local_290;
          uVar1 = *(uint *)((int64_t)local_290 + 0x1c);
          local_330 = (int64_t ******)
                      CONCAT44(local_330._4_4_,
                               uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                               uVar1 << 0x18);
          (*(*local_290[7])[0x71])(4,&local_330);
          pppppplVar12 = local_320;
          if ((local_318 != '\0') && ((int64_t *******)local_320 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((int64_t *******)pppppplVar12 == (int64_t *******)0x0) {
            ppppppplVar17[5] = (int64_t ******)((int64_t)ppppppplVar17[5] + 0x22c);
            (*(*ppppppplVar17[7])[0x74])();
            if ((local_318 != '\0') && ((int64_t *******)local_320 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            ppppppplVar17 = (int64_t *******)local_290;
            cVar3 = FUN_00cdb0d0();
            ppppppplVar13 = (int64_t *******)local_280;
            ppppppplVar11 = g_02774d70;
            if (cVar3 == '\0') {
              if (g_02774d70 != (int64_t *******)0x0) {
                FUN_00d50b00();
              }
              local_2f8 = (int64_t ******)ppppppplVar11;
              local_2f0 = '\x01';
              FUN_00cc78b0();
              if ((local_2f0 != '\0') && ((int64_t *******)local_2f8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
            }
            iVar4 = *(int *)(ppppppplVar13 + 3);
            ppppppplVar17[5] = (int64_t ******)((int64_t)ppppppplVar17[5] + (int64_t)iVar4);
            (*(*ppppppplVar17[7])[0x71])((int64_t)iVar4,ppppppplVar13[2]);
            pppppplVar12 = local_310;
            if ((local_308 != '\0') && ((int64_t *******)local_310 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            ppppppplVar11 = g_02774d70;
            ppppppplVar14 = (int64_t *******)local_270;
            if ((int64_t *******)pppppplVar12 != (int64_t *******)0x0) {
              if (g_02774d70 != (int64_t *******)0x0) {
                FUN_00d50b00();
              }
              local_310 = (int64_t ******)ppppppplVar11;
              local_308 = '\x01';
              FUN_00cc78b0();
              ppppppplVar14 = (int64_t *******)local_270;
              if ((local_308 != '\0') && ((int64_t *******)local_310 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *(int *)((int64_t)ppppppplVar17 + 0x1c) = *(int *)((int64_t)ppppppplVar17 + 0x1c) + -1
            ;
            ppppppplVar14 = (int64_t *******)local_270;
            ppppppplVar13 = (int64_t *******)local_280;
          }
        }
        else {
          local_268 = local_290;
          local_260 = '\0';
          local_2c0 = local_278;
          local_2b8 = '\0';
          iVar5 = FUN_00cd8690();
          ppppppplVar17 = (int64_t *******)local_290;
          if (iVar5 != 0) goto LAB_00cd3d50;
        }
        if ((char)local_2d8 == '\0' && ppppppplVar14 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_294 == '\0' && (int64_t *******)local_278 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if (ppppppplVar13 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if (local_288 != 0) {
          FUN_00d50b20();
        }
        if (ppppppplVar17 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        FUN_00cd4fc0();
      }
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x40) + 0x30) +
                0x378))();
  }
  else if (*(char *)(arg1 + 0x50) == '\0') {
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x368))();
    goto LAB_00cd4932;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00cd4932:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

