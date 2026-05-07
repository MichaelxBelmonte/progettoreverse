// Function: FUN_01673fe0
// Address: 01673fe0
// Size: 2996 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x01674b94) */
/* WARNING: Removing unreachable block (ram,0x01674ba0) */
/* WARNING: Removing unreachable block (ram,0x01674a3d) */
/* WARNING: Removing unreachable block (ram,0x01674a49) */
/* WARNING: Removing unreachable block (ram,0x016746e8) */
/* WARNING: Removing unreachable block (ram,0x016746f4) */
/* WARNING: Removing unreachable block (ram,0x01674478) */
/* WARNING: Removing unreachable block (ram,0x01674484) */

ulonglong FUN_01673fe0(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  undefined *puVar16;
  int iVar17;
  longlong *unaff_RSI;
  byte bVar18;
  bool bVar19;
  char cVar20;
  undefined *unaff_R13;
  undefined7 uVar21;
  undefined *puVar22;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined *local_40;
  char local_38 [8];
  
  puVar13 = (undefined *)0x0;
  local_48 = param_1;
  FUN_01674fe0();
  local_50 = local_78;
  puVar16 = local_78;
  if (((((char)local_70 == '\0') && (local_78 != (undefined *)0x0)) &&
      (FUN_00d50b00(), puVar16 = local_50, (char)local_70 != '\0')) &&
     (local_78 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(puVar16 + 0xc) == 0) {
    uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
  }
  else {
    lVar6 = *unaff_RSI;
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    puVar16 = (undefined *)*unaff_RSI;
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (undefined *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(undefined **)(puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      puVar7 = *(undefined8 **)(puVar16 + 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d242c0();
      uVar3 = *(uint *)((longlong)puVar7 + 0xc);
      uVar1 = *(uint *)(local_50 + 0xc);
      pcVar12 = (char *)(ulonglong)uVar1;
      if (uVar3 == uVar1) {
        local_70._0_1_ = '\0';
        local_78 = (undefined *)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (*(int *)(local_50 + 0xc) < 1) {
          bVar18 = 1;
        }
        else {
          bVar18 = 1;
          puVar16 = (undefined *)0x0;
          local_48 = puVar7;
          do {
            local_78 = *(undefined **)(*(longlong *)(local_50 + 0x10) + (longlong)puVar16 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)pcVar12);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017120c0();
            bVar2 = FUN_01673220();
            bVar18 = bVar18 & bVar2;
            puVar16 = puVar16 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)puVar16);
            puVar7 = local_48;
          } while ((int)puVar16 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),bVar18 != 0);
      }
      else {
        bVar19 = (int)uVar1 <= (int)uVar3;
        if (uVar3 != 0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_68 = local_50;
          local_58 = 0;
          local_60 = 0;
          local_48 = puVar7;
          if (0 < *(int *)(local_50 + 0xc)) {
            lVar6 = 0;
            do {
              local_78 = *(undefined **)(*(longlong *)(local_50 + 0x10) + lVar6 * 8);
              FUN_01671da0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 == (undefined *)0x0) goto LAB_01674630;
                FUN_00d50b00();
              }
              else if (local_40 == (undefined *)0x0) {
LAB_01674630:
                FUN_00d23310();
                puVar16 = local_40;
                local_88 = local_38[0];
                pcVar12 = &local_88;
                pcVar8 = local_38;
                if (local_38[0] == '\0') {
                  pcVar8 = pcVar12;
                }
                *pcVar8 = '\0';
                if ((local_38[0] != '\0') && (puVar16 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                if ((puVar16 != (undefined *)0x0) && (puVar13 = puVar16, local_88 == '\0')) {
                  FUN_00d50b00();
                }
                bVar19 = false;
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017120c0();
              uVar3 = FUN_01673220();
              puVar16 = (undefined *)(ulonglong)uVar3;
              if (puVar13 != (undefined *)0x0) {
                FUN_00d50b20();
              }
              bVar19 = (bool)(bVar19 & (byte)uVar3);
              lVar6 = lVar6 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
            } while ((int)lVar6 < *(int *)(local_50 + 0xc));
          }
          FUN_0166fd40();
          puVar7 = local_48;
        }
        uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),bVar19 != false);
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (undefined *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(undefined **)(puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      if (puVar16[0x51] == '\0') {
        uVar15 = 0;
LAB_0167475c:
        puVar22 = (undefined *)0x0;
        if ((undefined *)*local_48 != (undefined *)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_68 = (undefined *)*local_48;
          while( true ) {
            lVar6 = (longlong)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            puVar13 = local_68;
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            puVar13 = *(undefined **)(local_68 + 0x10);
            local_78 = *(undefined **)(puVar13 + lVar6 * 8 + 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016501d0();
            puVar16 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar16 != (undefined *)0x0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016501d0();
              puVar16 = (undefined *)CONCAT71(uStack_87,local_88);
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
              if (pvVar4 != (void *)0x0) {
                puVar16 = (undefined *)CONCAT71(uStack_87,local_88);
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  puVar16 = *(undefined **)
                             (puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
                }
              }
              FUN_015058d0();
              puVar22 = local_40;
              if (local_40 == (undefined *)0x0) {
                puVar22 = (undefined *)0x0;
              }
              else {
                uVar21 = (undefined7)(uVar15 >> 8);
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                  uVar15 = CONCAT71(uVar21,1);
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38[0] = '\0';
                  uVar15 = CONCAT71(uVar21,1);
                }
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              break;
            }
            puVar16 = (undefined *)0x0;
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
          }
          FUN_0049cc10();
        }
      }
      else {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar13 = &DAT_02572358;
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        if ((undefined *)*local_48 != (undefined *)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          local_68 = (undefined *)*local_48;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                iVar17 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar17);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
            lVar6 = (longlong)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            lVar5 = *(longlong *)(local_68 + 0x10);
            puVar16 = *(undefined **)(lVar5 + 8 + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            puVar13 = local_78;
            pVar11 = (pthread_key_t)lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar16 = puVar13, lVar6 != 0))
            {
              puVar16 = *(undefined **)
                         (puVar13 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_016501d0();
            unaff_R13 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (undefined *)0x0) {
                FUN_00d50b00();
                if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01674220;
              }
            }
            else if (local_40 != (undefined *)0x0) {
LAB_01674220:
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 != (undefined *)0x0) {
                  FUN_00d50b00();
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_016742b0;
                }
              }
              else if (local_40 != (undefined *)0x0) {
LAB_016742b0:
                pvVar4 = _pthread_getspecific(pVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510360(0,0,0);
                puVar16 = local_40;
                if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar16 != (undefined *)0x0) {
                  local_38[0] = '\0';
                  local_40 = puVar13;
                  FUN_00d21140();
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          puVar13 = local_68;
          FUN_0049cc10();
        }
        FUN_00d242c0();
        FUN_00d23340();
        puVar22 = local_78;
        puVar13 = (undefined *)CONCAT71((int7)((ulonglong)puVar13 >> 8),(char)local_70);
        ppuVar14 = &local_40;
        if ((char)local_70 != '\0') {
          ppuVar14 = &local_70;
        }
        local_40 = (undefined *)CONCAT71(local_40._1_7_,(char)local_70);
        *(undefined1 *)ppuVar14 = 0;
        if (((char)local_70 != '\0') && (local_78 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          if ((char)local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar22 == (undefined *)0x0) goto LAB_0167475c;
      }
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_01676840();
      (**(code **)(*plVar9 + 0x18))();
      if (puVar22 != (undefined *)0x0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
        plVar10 = plVar9;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        puVar16 = (undefined *)plVar10[7];
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
        if (pvVar4 != (void *)0x0) {
          puVar16 = (undefined *)plVar10[7];
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            puVar16 = *(undefined **)
                       (puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
          }
        }
        FUN_015127c0();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      plVar10 = plVar9;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar10 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      *(undefined1 *)(plVar10 + 0xb) = 0;
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        *(undefined1 *)((longlong)plVar9 + 0x59) = 0;
        if (local_50 != (undefined *)0x0) goto LAB_01674ad7;
LAB_01674bbc:
        cVar20 = (char)uVar15;
        FUN_00d50b20();
      }
      else {
        *(undefined1 *)(plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x59) = 0;
        if (local_50 == (undefined *)0x0) goto LAB_01674bbc;
LAB_01674ad7:
        local_48 = (undefined8 *)CONCAT44(local_48._4_4_,(int)uVar15);
        local_70._0_1_ = '\0';
        local_78 = (undefined *)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (0 < *(int *)(local_50 + 0xc)) {
          lVar6 = 0;
          do {
            puVar16 = *(undefined **)(*(longlong *)(local_50 + 0x10) + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              puVar16 = *(undefined **)
                         (puVar16 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_017120c0();
            lVar6 = lVar6 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = (ulonglong)local_48 & 0xffffffff;
        cVar20 = (char)local_48;
        if (plVar9 != (longlong *)0x0) goto LAB_01674bbc;
      }
      if ((cVar20 != '\0') && (puVar22 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      if (local_50 == (undefined *)0x0) goto LAB_01674be6;
    }
  }
  FUN_00d50b20();
LAB_01674be6:
  return uVar15 & 0xffffffff;
}


