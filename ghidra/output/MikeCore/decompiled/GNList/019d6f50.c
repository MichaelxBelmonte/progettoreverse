// Function: FUN_019d6f50
// Address: 019d6f50
// Size: 7495 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x019d7e96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019d6f50(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  longlong local_268;
  char local_260;
  float local_248;
  float fStack_244;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_d8;
  char local_d0;
  double local_98;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  uVar31 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar29 = (undefined4)param_2;
  FUN_00d3ecc0();
  plVar1 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027ebc60;
  if (DAT_027ebc60 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027e1378;
  if (cVar2 == '\0') {
    if (DAT_027e1378 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = lVar3;
    local_1b0 = '\x01';
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027e1368;
    if (cVar2 == '\0') {
      if (DAT_027e1368 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = lVar3;
      local_1a0 = '\x01';
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02702db8;
      if (cVar2 == '\0') {
        if (DAT_02702db8 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar3;
        local_160 = '\x01';
        cVar2 = (**(code **)(*plVar1 + 0x50))();
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = DAT_026fe3e0;
        if (cVar2 == '\0') {
          if (DAT_026fe3e0 != 0) {
            FUN_00d50b00();
          }
          local_128 = lVar3;
          local_120 = '\x01';
          cVar2 = (**(code **)(*plVar1 + 0x50))();
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          lVar3 = DAT_027e1370;
          if (cVar2 == '\0') {
            if (DAT_027e1370 != 0) {
              FUN_00d50b00();
            }
            local_118 = lVar3;
            local_110 = '\x01';
            cVar2 = (**(code **)(*plVar1 + 0x50))();
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              (**(code **)(*unaff_RDI + 0xca0))();
            }
          }
          else {
            (**(code **)(*unaff_RDI + 0x970))();
            if (local_58 == (longlong *)0x0) {
              bVar14 = false;
            }
            else {
              (**(code **)(*unaff_RDI + 0x970))();
              FUN_0197c2b0();
              FUN_00d3ecf0();
              bVar14 = CONCAT71(uStack_87,local_88) == local_268;
              if ((local_260 != '\0') && (local_268 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar14) {
              (**(code **)(&DAT_00001600 + *unaff_RDI))();
            }
          }
          goto LAB_019d8ab7;
        }
        FUN_00d3ecf0();
        plVar8 = local_58;
        if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = plVar8;
        uVar18 = FUN_00d3ed20();
        if (local_50[0] == '\0') {
          if (local_58 == (longlong *)0x0) goto LAB_019d7cbf;
          local_68 = local_58;
          uVar25 = FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar25 = FUN_00d50b20();
          }
LAB_019d7c2c:
          lVar3 = DAT_02709968;
          if (DAT_02709968 != 0) {
            uVar25 = FUN_00d50b00();
          }
          local_158 = lVar3;
          local_150 = '\x01';
          pplVar12 = &local_58;
          FUN_000175c0(uVar25,&local_158);
          plVar8 = local_58;
          FUN_002771e0();
          if (plVar8 == (longlong *)0x0) {
LAB_019d7c92:
            pplVar12 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar8 + 0x360))();
            cVar2 = FUN_00e85ea0();
            if (cVar2 == '\0') goto LAB_019d7c92;
          }
          local_60 = *pplVar12;
          if (local_60 == (longlong *)0x0) {
            local_60 = (longlong *)0x0;
            bVar15 = false;
          }
          else {
            if (*(char *)(pplVar12 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar12 + 1) = 0;
            }
            bVar15 = true;
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          lVar3 = DAT_027295d0;
          if (DAT_027295d0 != 0) {
            FUN_00d50b00();
          }
          local_148 = lVar3;
          local_140 = '\x01';
          FUN_000175c0();
          plVar8 = local_58;
          if ((DAT_027048b0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
            _DAT_026cd478 = FUN_00d4fe50();
            DAT_026cd460 = "GNList";
            _DAT_026cd468 = 0x20;
            _DAT_026cd470 = FUN_00018210;
            _DAT_026cd480 = 0;
            uRam00000000026cd488 = 0;
            _DAT_026cd490 = 0;
            _DAT_026cd508 = 0;
            uRam00000000026cd510 = 0;
            _DAT_026cd518 = 0;
            DAT_026cd51a = 6;
            _DAT_026cd498 = 0;
            uRam00000000026cd4a0 = 0;
            _DAT_026cd4a8 = 0;
            uRam00000000026cd4b0 = 0;
            _DAT_026cd4b8 = 0;
            uRam00000000026cd4c0 = 0;
            _DAT_026cd4c8 = 0;
            uRam00000000026cd4d0 = 0;
            _DAT_026cd4d8 = 0;
            uRam00000000026cd4e0 = 0;
            _DAT_026cd4e8 = 0;
            uRam00000000026cd4f0 = 0;
            _DAT_026cd4f8 = 0;
            uRam00000000026cd500 = 0;
            DAT_026cd523 = 0;
            _DAT_026cd51b = 0;
            ___cxa_guard_release();
          }
          pplVar12 = &DAT_02802688;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar2 = FUN_00e85ea0();
            if (cVar2 != '\0') {
              FUN_0006e1c0();
              cVar2 = FUN_00e8da30();
              pplVar12 = &local_58;
              if (cVar2 == '\0') {
                pplVar12 = &DAT_02802688;
              }
            }
          }
          plVar8 = *pplVar12;
          local_78 = plVar8;
          if (plVar8 == (longlong *)0x0) {
            bVar14 = false;
          }
          else if (*(char *)(pplVar12 + 1) == '\0') {
            bVar14 = true;
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
            bVar14 = true;
          }
          param_1 = (pthread_key_t)plVar8;
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          uVar18 = FUN_00d50b20();
          plVar8 = local_60;
          if (local_60 == (longlong *)0x0) {
            local_68 = (longlong *)
                       CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1));
            local_60 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)unaff_RDI[0x86];
            if (plVar13 != local_60) {
              FUN_00d50b00();
              unaff_RDI[0x86] = (longlong)plVar8;
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
          }
        }
        else {
          local_68 = local_58;
          uVar25 = extraout_XMM0_Qa;
          if (local_58 != (longlong *)0x0) goto LAB_019d7c2c;
LAB_019d7cbf:
          local_68 = (longlong *)
                     CONCAT44(local_68._4_4_,(int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1));
          local_60 = (longlong *)0x0;
          bVar15 = false;
          local_78 = (longlong *)0x0;
          bVar14 = false;
        }
        cVar2 = FUN_019a9840();
        if (cVar2 == '\0') {
          (**(code **)(*unaff_RDI + 0xa00))();
          plVar8 = local_70;
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e8920();
          plVar11 = local_58;
          plVar13 = (longlong *)CONCAT71(uStack_87,local_88);
          if ((local_80 != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 == (longlong *)0x0) {
            if (plVar11 == plVar13) {
              bVar16 = false;
              plVar8 = (longlong *)0x0;
              goto LAB_019d8922;
            }
          }
          else {
            FUN_00d50b00();
            plVar8 = local_70;
            if (plVar11 == plVar13) {
              bVar16 = true;
LAB_019d8922:
              cVar2 = FUN_019c98c0();
              if (cVar2 == '\0') {
                (**(code **)(*unaff_RDI + 0xc80))();
              }
              else if (((char)unaff_RDI[0xa2] != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_019d9ab0();
              }
              if ((char)local_68 == '\0') {
                pvVar4 = _pthread_getspecific(param_1);
                if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  param_1 = (pthread_key_t)local_60;
                }
                iVar10 = FUN_01326de0();
                if (iVar10 != 2) {
                  pvVar4 = _pthread_getspecific(param_1);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar10 = FUN_01326de0();
                  if (iVar10 != 4) {
                    local_138 = local_60;
                    local_130 = '\0';
                    (**(code **)(*unaff_RDI + 0xcc8))(DAT_023b49d0);
                    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *unaff_RDI + 0x40))();
              if (!bVar16) goto LAB_019d8a75;
            }
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (unaff_RDI[0x3d] != 0) {
          local_50[0] = '\0';
          local_58 = (longlong *)0x0;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_48 = unaff_RDI[0x3d];
          while( true ) {
            lVar3 = (longlong)(int)local_40;
            iVar10 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar10);
            if (*(int *)(local_48 + 0xc) <= iVar10) break;
            lVar9 = *(longlong *)(local_48 + 0x10);
            local_58 = *(longlong **)(lVar9 + 8 + lVar3 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
            param_1 = (pthread_key_t)lVar9;
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012eb770();
            if (CONCAT71(uStack_87,local_88) == 0) {
              bVar16 = false;
              lVar3 = 0;
            }
            else {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              bVar16 = local_d8 == local_70;
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar3 = CONCAT71(uStack_87,local_88);
            }
            if ((local_80 != '\0') && (lVar3 != 0)) {
              FUN_00d50b20();
            }
            plVar8 = local_58;
            if (bVar16) {
              if (local_58 == (longlong *)0x0) {
                plVar8 = (longlong *)0x0;
                bVar16 = false;
              }
              else {
                if (local_50[0] == '\0') {
                  FUN_00d50b00();
                }
                else {
                  local_50[0] = '\0';
                }
                bVar16 = true;
              }
              FUN_000be170();
              goto LAB_019d8922;
            }
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar10 = -local_40._4_4_;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar10 = 0;
              }
              local_40 = CONCAT44(iVar10,(int)local_40);
            }
          }
          FUN_000be170();
        }
LAB_019d8a75:
        if ((bVar14) && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_70;
        if (bVar15 && (char)local_68 == '\0') {
          FUN_00d50b20();
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d3ecf0();
        local_70 = local_58;
        if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d3ed20();
        if (local_50[0] == '\0') {
          if (local_58 == (longlong *)0x0) goto LAB_019d74b8;
          uVar18 = FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_019d7426:
          lVar3 = DAT_02709968;
          if (DAT_02709968 != 0) {
            uVar18 = FUN_00d50b00();
          }
          local_198 = lVar3;
          local_190 = '\x01';
          pplVar12 = &local_58;
          FUN_000175c0(uVar18,&local_198);
          plVar8 = local_58;
          uVar18 = FUN_002771e0();
          if (plVar8 == (longlong *)0x0) {
LAB_019d7492:
            pplVar12 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar8 + 0x360))();
            uVar18 = FUN_00e85ea0();
            if ((char)uVar18 == '\0') goto LAB_019d7492;
          }
          plVar8 = *pplVar12;
          if (plVar8 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            plVar8 = (longlong *)0x0;
          }
          else {
            if (*(char *)(pplVar12 + 1) == '\0') {
              uVar18 = FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar12 + 1) = 0;
            }
            local_78 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          lVar3 = DAT_027295d0;
          local_60 = plVar8;
          if (DAT_027295d0 != 0) {
            FUN_00d50b00();
          }
          local_188 = lVar3;
          local_180 = '\x01';
          FUN_000175c0();
          plVar8 = local_58;
          if ((DAT_027048b0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
            _DAT_026cd478 = FUN_00d4fe50();
            DAT_026cd460 = "GNList";
            _DAT_026cd468 = 0x20;
            param_1 = 0x18210;
            _DAT_026cd470 = FUN_00018210;
            _DAT_026cd480 = 0;
            uRam00000000026cd488 = 0;
            _DAT_026cd490 = 0;
            _DAT_026cd508 = 0;
            uRam00000000026cd510 = 0;
            _DAT_026cd518 = 0;
            DAT_026cd51a = 6;
            _DAT_026cd498 = 0;
            uRam00000000026cd4a0 = 0;
            _DAT_026cd4a8 = 0;
            uRam00000000026cd4b0 = 0;
            _DAT_026cd4b8 = 0;
            uRam00000000026cd4c0 = 0;
            _DAT_026cd4c8 = 0;
            uRam00000000026cd4d0 = 0;
            _DAT_026cd4d8 = 0;
            uRam00000000026cd4e0 = 0;
            _DAT_026cd4e8 = 0;
            uRam00000000026cd4f0 = 0;
            _DAT_026cd4f8 = 0;
            uRam00000000026cd500 = 0;
            DAT_026cd523 = 0;
            _DAT_026cd51b = 0;
            ___cxa_guard_release();
          }
          pplVar12 = &DAT_02802688;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar2 = FUN_00e85ea0();
            if (cVar2 != '\0') {
              FUN_0006e1c0();
              cVar2 = FUN_00e8da30();
              pplVar12 = &local_58;
              if (cVar2 == '\0') {
                pplVar12 = &DAT_02802688;
              }
            }
          }
          plVar8 = *pplVar12;
          if (plVar8 == (longlong *)0x0) {
            bVar14 = false;
            plVar8 = (longlong *)0x0;
          }
          else {
            if (*(char *)(pplVar12 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar12 + 1) = 0;
            }
            bVar14 = true;
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          local_68 = plVar8;
          FUN_00d50b20();
        }
        else {
          if (local_58 != (longlong *)0x0) goto LAB_019d7426;
LAB_019d74b8:
          local_60 = (longlong *)0x0;
          local_78 = (longlong *)0x0;
          local_68 = (longlong *)0x0;
          bVar14 = false;
        }
        cVar2 = FUN_019a9840();
        if (cVar2 == '\0') {
          (**(code **)(*unaff_RDI + 0xa00))();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e8920();
          plVar13 = local_58;
          plVar8 = (longlong *)CONCAT71(uStack_87,local_88);
          if ((local_80 != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 == plVar8) {
            bVar15 = false;
            lVar3 = 0;
LAB_019d8552:
            cVar2 = FUN_019c98c0();
            if (((cVar2 != '\0') &&
                (*(undefined1 *)(unaff_RDI + 0xa2) = 0, local_68 != (longlong *)0x0)) &&
               (*(int *)((longlong)local_68 + 0xc) != 0)) {
              dVar19 = (double)(**(code **)(*unaff_RDI + 0xa50))();
              uVar18 = (**(code **)(*unaff_RDI + 0xa98))();
              FUN_00d23310();
              plVar8 = local_58;
              local_88 = local_50[0];
              pcVar5 = local_50;
              if (local_50[0] == '\0') {
                pcVar5 = &local_88;
              }
              *pcVar5 = '\0';
              if ((local_50[0] != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 == '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              fVar17 = (float)(**(code **)(*unaff_RDI + 0xc38))();
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d23310();
              plVar8 = local_58;
              local_88 = local_50[0];
              pcVar5 = &local_88;
              pcVar6 = local_50;
              if (local_50[0] == '\0') {
                pcVar6 = pcVar5;
              }
              *pcVar6 = '\0';
              if ((local_50[0] != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_98 = (double)FUN_0125a280();
              if ((local_88 != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d23310();
              plVar8 = local_58;
              pcVar5 = local_50;
              if (local_50[0] == '\0') {
                pcVar5 = &local_88;
              }
              local_88 = local_50[0];
              *pcVar5 = '\0';
              if ((local_50[0] != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pVar7 = (pthread_key_t)pcVar5;
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar20 = (double)FUN_01259520();
              if ((local_88 != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar3 != 0) {
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_98 = (double)FUN_01656080(local_98);
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar20 = (double)FUN_01656080(dVar20);
              }
              local_248 = (float)uVar18;
              fStack_244 = (float)((ulonglong)uVar18 >> 0x20);
              *(bool *)(unaff_RDI + 0xa2) =
                   fVar17 < fStack_244 + local_248 &&
                   ((local_248 < fVar17 && dVar19 < dVar20) &&
                   local_98 < (double)CONCAT44(uVar31,uVar29) + dVar19);
            }
            if (local_60 != (longlong *)0x0) {
              local_178 = local_60;
              local_170 = '\0';
              (**(code **)(&UNK_00001650 + *unaff_RDI))();
              if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((bVar15) && (lVar3 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (unaff_RDI[0x3d] != 0) {
          local_50[0] = '\0';
          local_58 = (longlong *)0x0;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_48 = unaff_RDI[0x3d];
          while( true ) {
            lVar3 = (longlong)(int)local_40;
            iVar10 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar10);
            if (*(int *)(local_48 + 0xc) <= iVar10) break;
            lVar9 = *(longlong *)(local_48 + 0x10);
            local_58 = *(longlong **)(lVar9 + 8 + lVar3 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
            pVar7 = (pthread_key_t)lVar9;
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012eb770();
            if (CONCAT71(uStack_87,local_88) == 0) {
              bVar15 = false;
              lVar3 = 0;
            }
            else {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              bVar15 = local_d8 == local_70;
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar3 = CONCAT71(uStack_87,local_88);
            }
            if ((local_80 != '\0') && (lVar3 != 0)) {
              FUN_00d50b20();
            }
            if (bVar15) {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f51f0();
              lVar3 = CONCAT71(uStack_87,local_88);
              if (lVar3 == 0) {
                bVar15 = false;
                lVar3 = 0;
              }
              else {
                bVar15 = true;
                if (((local_80 == '\0') && (FUN_00d50b00(), local_80 != '\0')) &&
                   (CONCAT71(uStack_87,local_88) != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_000be170();
              goto LAB_019d8552;
            }
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar10 = -local_40._4_4_;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar10 = 0;
              }
              local_40 = CONCAT44(iVar10,(int)local_40);
            }
          }
          FUN_000be170();
        }
        if ((bVar14) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *unaff_RDI + 0x40))();
      (**(code **)(&DAT_000014b8 + *unaff_RDI))();
    }
  }
  else {
    if (0 < (int)unaff_RDI[0x9b]) {
      *(int *)(unaff_RDI + 0x9b) = (int)unaff_RDI[0x9b] + -1;
      goto LAB_019d8afd;
    }
    uVar18 = FUN_00d3ed20();
    local_70 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 == (longlong *)0x0) goto LAB_019d72f3;
      uVar18 = FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
LAB_019d726e:
      lVar3 = DAT_027e1420;
      if (DAT_027e1420 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_228 = lVar3;
      local_220 = '\x01';
      pplVar12 = &local_58;
      FUN_000175c0(uVar18,&local_228);
      plVar8 = local_58;
      uVar18 = FUN_00053ac0();
      if (plVar8 == (longlong *)0x0) {
LAB_019d72d3:
        pplVar12 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar18 = extraout_XMM0_Qa_00;
        if (cVar2 == '\0') goto LAB_019d72d3;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar3 = DAT_027e7c60;
      local_78 = plVar8;
      if (DAT_027e7c60 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_218 = lVar3;
      local_210 = '\x01';
      pplVar12 = &local_58;
      FUN_000175c0(uVar18,&local_218);
      plVar8 = local_58;
      uVar18 = FUN_00053ac0();
      if (plVar8 == (longlong *)0x0) {
LAB_019d757c:
        pplVar12 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar18 = extraout_XMM0_Qa_01;
        if (cVar2 == '\0') goto LAB_019d757c;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar3 = DAT_027e1428;
      if (DAT_027e1428 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_208 = lVar3;
      local_200 = '\x01';
      pplVar12 = &local_58;
      FUN_000175c0(uVar18,&local_208);
      plVar13 = local_58;
      uVar18 = FUN_00053ac0();
      if (plVar13 == (longlong *)0x0) {
LAB_019d763c:
        pplVar12 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar18 = extraout_XMM0_Qa_02;
        if (cVar2 == '\0') goto LAB_019d763c;
      }
      plVar13 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar13 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar3 = DAT_027e7c70;
      local_60 = plVar13;
      if (DAT_027e7c70 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_1f8 = lVar3;
      local_1f0 = '\x01';
      pplVar12 = &local_58;
      FUN_000175c0(uVar18,&local_1f8);
      plVar13 = local_58;
      uVar18 = FUN_00053ac0();
      if (plVar13 == (longlong *)0x0) {
LAB_019d76f9:
        pplVar12 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar18 = extraout_XMM0_Qa_03;
        if (cVar2 == '\0') goto LAB_019d76f9;
      }
      plVar13 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar13 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      local_68 = plVar13;
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar3 = DAT_027e1430;
      if (DAT_027e1430 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_1e8 = lVar3;
      local_1e0 = '\x01';
      pplVar12 = &local_58;
      FUN_000175c0(uVar18,&local_1e8);
      plVar13 = local_58;
      FUN_00053ac0();
      if (plVar13 == (longlong *)0x0) {
        pplVar12 = &DAT_02802688;
        plVar13 = DAT_02802688;
        if (DAT_02802690 != '\0') goto LAB_019d77d2;
LAB_019d77f3:
        plVar11 = local_78;
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') {
          pplVar12 = &DAT_02802688;
        }
        plVar13 = *pplVar12;
        if (*(char *)(pplVar12 + 1) == '\0') goto LAB_019d77f3;
LAB_019d77d2:
        *(undefined1 *)(pplVar12 + 1) = 0;
        plVar11 = local_78;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((((plVar11 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) &&
          (local_60 != (longlong *)0x0)) && (local_68 != (longlong *)0x0)) {
        dVar19 = (double)FUN_00d45bc0();
        dVar20 = (double)FUN_00d45bc0();
        dVar21 = (double)FUN_00d45bc0();
        dVar22 = (double)FUN_00d45bc0();
        dVar23 = (double)(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x368))();
        dVar21 = dVar20 - (dVar20 - dVar21) / dVar19;
        if (dVar23 < dVar21) {
          dVar23 = (double)(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x368))();
          dVar24 = (double)(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          dVar19 = (dVar22 - dVar20) / dVar19 + dVar20;
          dVar23 = dVar23 + dVar24;
          if (dVar19 < dVar23) {
            fVar17 = (float)FUN_00d459e0();
            fVar30 = SUB84(dVar23,0);
            uVar18 = FUN_01e436c0();
            dVar22 = (double)(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3c0))();
            dVar19 = (double)fVar30 / (dVar19 - dVar21);
            if ((dVar22 < dVar19) &&
               (dVar21 = (double)(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3b0))(),
               dVar19 < dVar21)) {
              (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3a0))(dVar19);
              (**(code **)(*unaff_RDI + 0x540))();
              auVar27._0_8_ = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x390))(dVar20);
              auVar27._8_8_ = extraout_XMM0_Qb_00;
              auVar26._4_12_ = auVar27._4_12_;
              auVar26._0_4_ = (float)auVar27._0_8_ - fVar17;
              auVar27 = roundss(auVar26,auVar26,9);
              auVar28._8_8_ = extraout_XMM0_Qb;
              auVar28._0_8_ = uVar18;
              auVar28 = blendps(auVar27,auVar28,0xe);
              (**(code **)(*unaff_RDI + 0x518))(auVar28._0_8_,fVar30);
            }
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar14 = false;
    }
    else {
      if (local_58 != (longlong *)0x0) goto LAB_019d726e;
LAB_019d72f3:
      bVar14 = true;
    }
    (**(code **)(*unaff_RDI + 0x960))();
    FUN_00d403d0();
    local_1d8 = DAT_027060b0;
    if (DAT_027060b0 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = '\x01';
    FUN_00d50b00();
    local_1c8 = 0;
    local_1c0 = '\0';
    FUN_00d40470(&local_1c8,&stack0xffffffffffffff08,1,3);
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar14) {
      FUN_00d50b20();
    }
  }
LAB_019d8ab7:
  local_108 = *unaff_RSI;
  local_100 = '\0';
  FUN_00d530a0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_019d8afd:
  FUN_00d50b20();
  return;
}


