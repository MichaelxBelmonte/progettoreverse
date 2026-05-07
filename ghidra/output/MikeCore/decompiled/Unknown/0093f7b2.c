// Function: FUN_0093f7b2
// Address: 0093f7b2
// Size: 5148 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "A dev data record (storage ID: 0x%08X) has disappeared"
//   "static void pace::AuthorizationVerifier::populateAuthStorageIlok2(EEPROM_AuthRecordStruct &, const ...


void FUN_0093f7b2(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong *puVar12;
  void *pvVar13;
  ulonglong uVar14;
  void *pvVar15;
  bool bVar16;
  undefined4 uVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  bool bVar27;
  bool bVar28;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  uint local_11c;
  void *local_f8;
  ulonglong *puStack_f0;
  ulonglong *local_e8;
  void *local_d8;
  ulonglong *puStack_d0;
  ulonglong *local_c8;
  ulonglong *local_a8;
  ulonglong *puStack_a0;
  ulonglong *local_98;
  ulonglong *local_88;
  ulonglong *puStack_80;
  ulonglong *local_78;
  ulonglong local_68;
  ulonglong local_48;
  undefined1 local_36;
  undefined1 local_35;
  byte local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  local_a8 = (ulonglong *)0x0;
  puStack_a0 = (ulonglong *)0x0;
  local_98 = (ulonglong *)0x0;
  local_e8 = (ulonglong *)0x0;
  local_f8 = (void *)0x0;
  puStack_f0 = (ulonglong *)0x0;
  local_78 = (ulonglong *)0x0;
  local_88 = (ulonglong *)0x0;
  puStack_80 = (ulonglong *)0x0;
  local_c8 = (ulonglong *)0x0;
  local_d8 = (void *)0x0;
  puStack_d0 = (ulonglong *)0x0;
  local_36 = 0;
  local_35 = 0;
  local_34 = 0;
  local_33 = 0;
  if (param_1 == (longlong *)0x0) {
    bVar27 = true;
  }
  else {
    bVar27 = param_1[1] == *param_1;
  }
  uVar2 = *(ushort *)(unaff_RDI + 2);
  local_11c = uVar2 & 0x4000;
  local_158 = 0;
  if (param_4 == (longlong *)0x0) {
    param_4 = &local_168;
  }
  local_168 = 0;
  lStack_160 = 0;
  lVar10 = *unaff_RSI;
  lVar8 = unaff_RSI[1] - lVar10;
  local_148 = param_2;
  if (lVar8 != 0) {
    local_140 = param_3 + 8;
    local_150 = param_3 + 0x50;
    local_128 = param_3 + 0x38;
    local_138 = param_3 + 0x20;
    uVar23 = 0;
    local_48 = 0xffffffff;
    bVar7 = false;
    bVar16 = false;
    lVar20 = param_3;
    do {
      lVar18 = uVar23 * 0x20;
      uVar3 = *(uint *)(lVar10 + 4 + lVar18);
      uVar21 = (ulonglong)uVar3;
      if (uVar21 == 0x80000002) {
        if (*(char *)(lVar10 + lVar18) == -0x7f) {
          FUN_00940d18();
        }
      }
      else if (uVar3 == 0x80000000) {
        cVar1 = *(char *)(lVar10 + lVar18);
        if (cVar1 == -0x70) {
          local_48 = uVar23;
        }
        if (((uVar2 & 0x2000) != 0) && (cVar1 == -0x7f)) {
          FUN_00940d18();
          lVar10 = *unaff_RSI;
        }
        if ((local_11c != 0) && (*(char *)(lVar10 + lVar18) == -0x7e)) {
          FUN_00940d18();
        }
      }
      if (bVar27) {
LAB_0093f9af:
        switch(*(undefined1 *)(*unaff_RSI + lVar18)) {
        case 0x81:
          if ((uVar3 | 2) != 0x80000002) {
            FUN_00938c6a(0);
            FUN_00941634();
            FUN_008e844a();
          }
          break;
        case 0x82:
          if (uVar3 != 0x80000000) {
            lVar20 = 0;
            FUN_0093bb90(0,0,0,0);
            FUN_00940e8a();
            FUN_008e969a();
          }
          break;
        case 0x84:
          lVar10 = FUN_008e4ece();
          if (uVar3 == *(uint *)(lVar10 + 0x74)) {
            bVar7 = true;
          }
          FUN_00940f84(&local_35,&local_36);
          FUN_0093f3be();
          FUN_008eab00();
          if ((*(byte *)(*unaff_RSI + 3 + lVar18) & 2) != 0) {
            if (puStack_a0 < local_98) {
              *puStack_a0 = uVar21;
              puStack_a0 = puStack_a0 + 1;
            }
            else {
              pvVar15 = (void *)((longlong)puStack_a0 - (longlong)local_a8);
              uVar14 = ((longlong)pvVar15 >> 3) + 1;
              if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar24 = (longlong)local_98 - (longlong)local_a8 >> 3;
              uVar26 = (longlong)local_98 - (longlong)local_a8 >> 2;
              if (uVar26 < uVar14) {
                uVar26 = uVar14;
              }
              if (0xffffffffffffffe < uVar24) {
                uVar26 = 0x1fffffffffffffff;
              }
              if (uVar26 == 0) {
                puVar12 = (ulonglong *)0x0;
              }
              else {
                if (0x1fffffffffffffff < uVar26) {
                  FUN_0094a84e();
                  goto LAB_00940be2;
                }
                puVar12 = operator_new((ulong)uVar24);
              }
              local_98 = puVar12 + uVar26;
              puStack_a0 = puVar12 + ((longlong)pvVar15 >> 3) + 1;
              puStack_a0[-1] = uVar21;
              if (0 < (longlong)pvVar15) {
                _memcpy(local_98,pvVar15,(size_t)lVar20);
              }
              bVar28 = local_a8 != (ulonglong *)0x0;
              local_a8 = puVar12;
              if (bVar28) {
                operator_delete(local_98);
              }
            }
            if (puStack_f0 < local_e8) {
              *puStack_f0 = (ulonglong)(uVar3 + 1);
              puStack_f0 = puStack_f0 + 1;
            }
            else {
              pvVar15 = (void *)((longlong)puStack_f0 - (longlong)local_f8);
              uVar21 = ((longlong)pvVar15 >> 3) + 1;
              if (0x1fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar26 = (longlong)local_e8 - (longlong)local_f8 >> 3;
              uVar14 = (longlong)local_e8 - (longlong)local_f8 >> 2;
              if (uVar14 < uVar21) {
                uVar14 = uVar21;
              }
              if (0xffffffffffffffe < uVar26) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                if (0x1fffffffffffffff < uVar14) {
                  FUN_0094a84e();
                  goto LAB_00940be2;
                }
                pvVar13 = operator_new((ulong)uVar26);
              }
              local_e8 = (ulonglong *)((longlong)pvVar13 + uVar14 * 8);
              puStack_f0 = (ulonglong *)((longlong)pvVar13 + ((longlong)pvVar15 >> 3) * 8 + 8);
              puStack_f0[-1] = (ulonglong)(uVar3 + 1);
              if (0 < (longlong)pvVar15) {
                _memcpy(local_e8,pvVar15,(size_t)lVar20);
              }
              bVar28 = local_f8 != (void *)0x0;
              local_f8 = pvVar13;
              if (bVar28) {
                operator_delete(local_e8);
              }
            }
          }
          break;
        case 0x88:
          FUN_009411fc(&local_33,&local_34);
          FUN_0093f6a6();
          FUN_008eb99a();
          if ((*(byte *)(*unaff_RSI + 3 + lVar18) & 2) != 0) {
            if (puStack_80 < local_78) {
              *puStack_80 = uVar21;
              puStack_80 = puStack_80 + 1;
            }
            else {
              pvVar15 = (void *)((longlong)puStack_80 - (longlong)local_88);
              uVar14 = ((longlong)pvVar15 >> 3) + 1;
              if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar24 = (longlong)local_78 - (longlong)local_88 >> 3;
              uVar26 = (longlong)local_78 - (longlong)local_88 >> 2;
              if (uVar26 < uVar14) {
                uVar26 = uVar14;
              }
              if (0xffffffffffffffe < uVar24) {
                uVar26 = 0x1fffffffffffffff;
              }
              if (uVar26 == 0) {
                puVar12 = (ulonglong *)0x0;
              }
              else {
                if (0x1fffffffffffffff < uVar26) {
                  FUN_0094a84e();
LAB_00940be2:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                puVar12 = operator_new((ulong)uVar24);
              }
              local_78 = puVar12 + uVar26;
              puStack_80 = puVar12 + ((longlong)pvVar15 >> 3) + 1;
              puStack_80[-1] = uVar21;
              if (0 < (longlong)pvVar15) {
                _memcpy(local_78,pvVar15,(size_t)lVar20);
              }
              bVar28 = local_88 != (ulonglong *)0x0;
              local_88 = puVar12;
              if (bVar28) {
                operator_delete(local_78);
              }
            }
            uVar21 = (ulonglong)(uVar3 + 1);
            if (puStack_d0 < local_c8) {
              *puStack_d0 = uVar21;
              puStack_d0 = puStack_d0 + 1;
            }
            else {
              pvVar15 = (void *)((longlong)puStack_d0 - (longlong)local_d8);
              uVar14 = ((longlong)pvVar15 >> 3) + 1;
              if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar24 = (longlong)local_c8 - (longlong)local_d8 >> 3;
              uVar26 = (longlong)local_c8 - (longlong)local_d8 >> 2;
              if (uVar26 < uVar14) {
                uVar26 = uVar14;
              }
              if (0xffffffffffffffe < uVar24) {
                uVar26 = 0x1fffffffffffffff;
              }
              if (uVar26 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                local_130 = uVar21;
                if (0x1fffffffffffffff < uVar26) {
                  FUN_0094a84e();
                  goto LAB_00940be2;
                }
                pvVar13 = operator_new((ulong)uVar24);
                uVar21 = local_130;
              }
              local_c8 = (ulonglong *)((longlong)pvVar13 + uVar26 * 8);
              puStack_d0 = (ulonglong *)((longlong)pvVar13 + ((longlong)pvVar15 >> 3) * 8 + 8);
              puStack_d0[-1] = uVar21;
              if (0 < (longlong)pvVar15) {
                _memcpy(local_c8,pvVar15,(size_t)lVar20);
              }
              bVar28 = local_d8 != (void *)0x0;
              local_d8 = pvVar13;
              if (bVar28) {
                operator_delete(local_c8);
              }
            }
          }
          if (uVar3 == 0x80000000) {
            bVar16 = true;
          }
        }
      }
      else {
        puVar9 = (uint *)*param_1;
        puVar4 = (uint *)param_1[1];
        if (puVar9 == puVar4) {
LAB_0093f9a6:
          if (puVar9 != puVar4) goto LAB_0093f9af;
        }
        else {
          do {
            if (*puVar9 == uVar3) goto LAB_0093f9a6;
            puVar9 = puVar9 + 1;
          } while (puVar4 != puVar9);
        }
      }
      uVar23 = uVar23 + 1;
      if ((ulonglong)(lVar8 >> 5) <= uVar23) goto LAB_0093ff30;
      lVar10 = *unaff_RSI;
    } while( true );
  }
  bVar16 = false;
LAB_00940055:
  if (!bVar27) {
    piVar11 = (int *)*param_1;
    piVar5 = (int *)param_1[1];
    if (piVar11 != piVar5) {
      do {
        if (*piVar11 == -0x80000000) goto LAB_0094007d;
        piVar11 = piVar11 + 1;
      } while (piVar5 != piVar11);
      goto LAB_0094012e;
    }
LAB_0094007d:
    if (piVar11 == piVar5) goto LAB_0094012e;
  }
  if (!bVar16) {
    FUN_008eb99a();
  }
LAB_0094012e:
  local_32 = 0;
  local_31 = 0;
  if (puStack_a0 != local_a8) {
    local_68 = 1;
    uVar23 = 0;
    do {
      uVar3 = (uint)local_a8[uVar23];
      uVar21 = *(ulonglong *)((longlong)local_f8 + uVar23 * 8);
      lVar10 = *(longlong *)(param_3 + 0x38);
      lVar8 = *(longlong *)(param_3 + 0x40) - lVar10;
      iVar25 = (int)uVar21;
      if (lVar8 != 0) {
        uVar14 = (lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3;
        puVar9 = (uint *)(lVar10 + 8);
        uVar26 = 0;
        do {
          if (*puVar9 == uVar3) {
            if (uVar26 != 0xffffffff) goto LAB_00940307;
            break;
          }
          uVar26 = uVar26 + 1;
          puVar9 = puVar9 + 0x16;
        } while (uVar26 < uVar14);
      }
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageIlok2(EEPROM_AuthRecordStruct &, const vector<EEPROM_StorageRecordStruct> &, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, vector<EEPROM_StorageRecordStruct> *, int32_t)"
                   ,&DAT_000025f6);
      FUN_009bd14b();
      lVar10 = *(longlong *)(param_3 + 0x38);
      lVar8 = *(longlong *)(param_3 + 0x40) - lVar10;
      if (lVar8 == 0) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar14 = (lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3;
        uVar26 = 0xffffffff;
LAB_00940307:
        piVar11 = (int *)(lVar10 + 8);
        uVar24 = 0;
        do {
          if (*piVar11 == iVar25) {
            bVar27 = true;
            if (uVar24 != 0xffffffff) goto LAB_00940647;
            break;
          }
          uVar24 = uVar24 + 1;
          piVar11 = piVar11 + 0x16;
        } while (uVar24 < uVar14);
      }
      lVar8 = *unaff_RSI;
      if (unaff_RSI[1] - lVar8 == 0) {
LAB_0094037f:
        *(undefined4 *)(lVar10 + 0x40 + uVar26 * 0x58) = 5;
        *(undefined1 *)(lVar10 + 0x4b + uVar26 * 0x58) = 0;
      }
      else {
        lVar20 = 0;
        uVar14 = 0;
        while ((*(char *)(lVar8 + lVar20) != -0x7c || (*(int *)(lVar8 + 4 + lVar20) != iVar25))) {
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + 0x20;
          if ((ulonglong)(unaff_RSI[1] - lVar8 >> 5) <= uVar14) goto LAB_0094037f;
        }
        if (uVar14 == 0xffffffff) goto LAB_0094037f;
        FUN_00940f84(&local_31,&local_32);
        FUN_0093f3be();
        FUN_008eab00();
        if ((*(byte *)(*unaff_RSI + 3 + lVar20) & 2) == 0) {
          bVar27 = true;
          goto LAB_00940647;
        }
        if (puStack_a0 < local_98) {
          *puStack_a0 = (ulonglong)uVar3;
          puStack_a0 = puStack_a0 + 1;
        }
        else {
          pvVar15 = (void *)((longlong)puStack_a0 - (longlong)local_a8);
          uVar14 = ((longlong)pvVar15 >> 3) + 1;
          if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar26 = (longlong)local_98 - (longlong)local_a8 >> 2;
          if (uVar26 < uVar14) {
            uVar26 = uVar14;
          }
          if (0xffffffffffffffe < (ulonglong)((longlong)local_98 - (longlong)local_a8 >> 3)) {
            uVar26 = 0x1fffffffffffffff;
          }
          if (uVar26 == 0) {
            puVar12 = (ulonglong *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar26) {
              FUN_0094a84e();
              goto LAB_00940be2;
            }
            puVar12 = operator_new((ulong)pvVar15);
          }
          local_98 = puVar12 + uVar26;
          puStack_a0 = puVar12 + ((longlong)pvVar15 >> 3) + 1;
          puStack_a0[-1] = (ulonglong)uVar3;
          if (0 < (longlong)pvVar15) {
            _memcpy(pvVar15,pvVar15,uVar3);
          }
          bVar27 = local_a8 != (ulonglong *)0x0;
          local_a8 = puVar12;
          if (bVar27) {
            operator_delete(pvVar15);
          }
        }
        uVar22 = iVar25 + 1;
        if (puStack_f0 < local_e8) {
          *puStack_f0 = (ulonglong)uVar22;
          puStack_f0 = puStack_f0 + 1;
        }
        else {
          pvVar15 = (void *)((longlong)puStack_f0 - (longlong)local_f8);
          uVar14 = ((longlong)pvVar15 >> 3) + 1;
          if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar26 = (longlong)local_e8 - (longlong)local_f8 >> 2;
          if (uVar26 < uVar14) {
            uVar26 = uVar14;
          }
          if (0xffffffffffffffe < (ulonglong)((longlong)local_e8 - (longlong)local_f8 >> 3)) {
            uVar26 = 0x1fffffffffffffff;
          }
          if (uVar26 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar26) {
              FUN_0094a84e();
              goto LAB_00940be2;
            }
            pvVar13 = operator_new((ulong)pvVar15);
          }
          local_e8 = (ulonglong *)((longlong)pvVar13 + uVar26 * 8);
          puStack_f0 = (ulonglong *)((longlong)pvVar13 + ((longlong)pvVar15 >> 3) * 8 + 8);
          puStack_f0[-1] = (ulonglong)uVar22;
          if (0 < (longlong)pvVar15) {
            _memcpy(pvVar15,pvVar15,uVar22);
          }
          bVar27 = local_f8 != (void *)0x0;
          local_f8 = pvVar13;
          if (bVar27) {
            operator_delete(pvVar15);
          }
        }
        bVar27 = false;
LAB_00940647:
        FUN_00941740();
        if (bVar27) {
          uVar14 = local_68;
          do {
            uVar26 = uVar14;
            if ((ulonglong)((longlong)puStack_a0 - (longlong)local_a8 >> 3) <= uVar26)
            goto LAB_00940390;
            uVar14 = uVar26 + 1;
          } while (local_a8[uVar26] != (uVar21 & 0xffffffff));
          local_a8[uVar26] = (ulonglong)uVar3;
        }
      }
LAB_00940390:
      uVar23 = uVar23 + 1;
      local_68 = local_68 + 1;
    } while (uVar23 < (ulonglong)((longlong)puStack_a0 - (longlong)local_a8 >> 3));
  }
  if (puStack_80 != local_88) {
    local_68 = 1;
    uVar23 = 0;
    do {
      uVar3 = (uint)local_88[uVar23];
      uVar21 = *(ulonglong *)((longlong)local_d8 + uVar23 * 8);
      lVar10 = *(longlong *)(param_3 + 0x50);
      lVar8 = *(longlong *)(param_3 + 0x58) - lVar10;
      iVar25 = (int)uVar21;
      if (lVar8 != 0) {
        uVar14 = (lVar8 >> 3) * -0xf0f0f0f0f0f0f0f;
        puVar9 = (uint *)(lVar10 + 8);
        uVar26 = 0;
        do {
          if (*puVar9 == uVar3) {
            if (uVar26 != 0xffffffff) goto LAB_009407b6;
            break;
          }
          uVar26 = uVar26 + 1;
          puVar9 = puVar9 + 0x22;
        } while (uVar26 < uVar14);
      }
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageIlok2(EEPROM_AuthRecordStruct &, const vector<EEPROM_StorageRecordStruct> &, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, vector<EEPROM_StorageRecordStruct> *, int32_t)"
                   ,&DAT_0000266e);
      FUN_009bd14b();
      lVar10 = *(longlong *)(param_3 + 0x50);
      lVar8 = *(longlong *)(param_3 + 0x58) - lVar10;
      if (lVar8 == 0) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar14 = (lVar8 >> 3) * -0xf0f0f0f0f0f0f0f;
        uVar26 = 0xffffffff;
LAB_009407b6:
        piVar11 = (int *)(lVar10 + 8);
        uVar24 = 0;
        do {
          if (*piVar11 == iVar25) {
            bVar27 = true;
            if (uVar24 != 0xffffffff) goto LAB_00940ae5;
            break;
          }
          uVar24 = uVar24 + 1;
          piVar11 = piVar11 + 0x22;
        } while (uVar24 < uVar14);
      }
      lVar8 = *unaff_RSI;
      if (unaff_RSI[1] - lVar8 == 0) {
LAB_00940831:
        *(undefined4 *)(lVar10 + 0x58 + uVar26 * 0x88) = 5;
        *(undefined1 *)(lVar10 + 0x74 + uVar26 * 0x88) = 0;
      }
      else {
        lVar20 = 0;
        uVar14 = 0;
        while ((*(char *)(lVar8 + lVar20) != -0x7c || (*(int *)(lVar8 + 4 + lVar20) != iVar25))) {
          uVar14 = uVar14 + 1;
          lVar20 = lVar20 + 0x20;
          if ((ulonglong)(unaff_RSI[1] - lVar8 >> 5) <= uVar14) goto LAB_00940831;
        }
        if (uVar14 == 0xffffffff) goto LAB_00940831;
        FUN_009411fc(&local_31,&local_32);
        FUN_0093f6a6();
        FUN_008eb99a();
        if ((*(byte *)(*unaff_RSI + 3 + lVar20) & 2) == 0) {
          bVar27 = true;
          goto LAB_00940ae5;
        }
        if (puStack_80 < local_78) {
          *puStack_80 = (ulonglong)uVar3;
          puStack_80 = puStack_80 + 1;
        }
        else {
          pvVar15 = (void *)((longlong)puStack_80 - (longlong)local_88);
          uVar14 = ((longlong)pvVar15 >> 3) + 1;
          if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar26 = (longlong)local_78 - (longlong)local_88 >> 2;
          if (uVar26 < uVar14) {
            uVar26 = uVar14;
          }
          if (0xffffffffffffffe < (ulonglong)((longlong)local_78 - (longlong)local_88 >> 3)) {
            uVar26 = 0x1fffffffffffffff;
          }
          if (uVar26 == 0) {
            puVar12 = (ulonglong *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar26) {
              FUN_0094a84e();
              goto LAB_00940be2;
            }
            puVar12 = operator_new((ulong)pvVar15);
          }
          local_78 = puVar12 + uVar26;
          puStack_80 = puVar12 + ((longlong)pvVar15 >> 3) + 1;
          puStack_80[-1] = (ulonglong)uVar3;
          if (0 < (longlong)pvVar15) {
            _memcpy(pvVar15,pvVar15,uVar3);
          }
          bVar27 = local_88 != (ulonglong *)0x0;
          local_88 = puVar12;
          if (bVar27) {
            operator_delete(pvVar15);
          }
        }
        uVar22 = iVar25 + 1;
        if (puStack_d0 < local_c8) {
          *puStack_d0 = (ulonglong)uVar22;
          puStack_d0 = puStack_d0 + 1;
        }
        else {
          pvVar15 = (void *)((longlong)puStack_d0 - (longlong)local_d8);
          uVar14 = ((longlong)pvVar15 >> 3) + 1;
          if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar26 = (longlong)local_c8 - (longlong)local_d8 >> 2;
          if (uVar26 < uVar14) {
            uVar26 = uVar14;
          }
          if (0xffffffffffffffe < (ulonglong)((longlong)local_c8 - (longlong)local_d8 >> 3)) {
            uVar26 = 0x1fffffffffffffff;
          }
          if (uVar26 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar26) {
              FUN_0094a84e();
              goto LAB_00940be2;
            }
            pvVar13 = operator_new((ulong)pvVar15);
          }
          local_c8 = (ulonglong *)((longlong)pvVar13 + uVar26 * 8);
          puStack_d0 = (ulonglong *)((longlong)pvVar13 + ((longlong)pvVar15 >> 3) * 8 + 8);
          puStack_d0[-1] = (ulonglong)uVar22;
          if (0 < (longlong)pvVar15) {
            _memcpy(pvVar15,pvVar15,uVar22);
          }
          bVar27 = local_d8 != (void *)0x0;
          local_d8 = pvVar13;
          if (bVar27) {
            operator_delete(pvVar15);
          }
        }
        bVar27 = false;
LAB_00940ae5:
        FUN_00941932();
        if (bVar27) {
          uVar14 = local_68;
          do {
            uVar26 = uVar14;
            if ((ulonglong)((longlong)puStack_80 - (longlong)local_88 >> 3) <= uVar26)
            goto LAB_00940849;
            uVar14 = uVar26 + 1;
          } while (local_88[uVar26] != (uVar21 & 0xffffffff));
          local_88[uVar26] = (ulonglong)uVar3;
        }
      }
LAB_00940849:
      uVar23 = uVar23 + 1;
      local_68 = local_68 + 1;
    } while (uVar23 < (ulonglong)((longlong)puStack_80 - (longlong)local_88 >> 3));
  }
  pvVar15 = (void *)(ulonglong)local_34;
  FUN_00941ba8(pvVar15,local_35,local_33);
  if (local_168 != 0) {
    lStack_160 = local_168;
    operator_delete(pvVar15);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete(pvVar15);
  }
  if (local_88 != (ulonglong *)0x0) {
    operator_delete(pvVar15);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete(pvVar15);
  }
  if (local_a8 != (ulonglong *)0x0) {
    operator_delete(pvVar15);
  }
  return;
LAB_0093ff30:
  if (local_48 != 0xffffffff) {
    uVar17 = 0;
    if (((uVar2 & 0x2000) != 0 || (uVar2 & 0x4000) != 0) && (param_4[1] == *param_4)) {
      if ((*(ushort *)(unaff_RDI + 2) & 0x438) == 0x438) {
        uVar17 = 1;
        FUN_00940d18();
      }
      else {
        uVar17 = 0;
      }
    }
    if (!bVar7) {
      if (!bVar27) {
        piVar11 = (int *)*param_1;
        piVar5 = (int *)param_1[1];
        lVar10 = FUN_008e4ece();
        piVar19 = piVar11;
        if (piVar11 != piVar5) {
          do {
            piVar19 = piVar11;
            if (*piVar11 == *(int *)(lVar10 + 0x74)) break;
            piVar11 = piVar11 + 1;
            piVar19 = piVar5;
          } while (piVar5 != piVar11);
        }
        if (piVar19 == (int *)param_1[1]) goto LAB_00940055;
      }
      FUN_0093f4b8(*(undefined4 *)(*unaff_RSI + local_48 * 0x20 + 0x1c),uVar17);
      FUN_0093f3be();
      FUN_008eab00();
    }
  }
  goto LAB_00940055;
}


