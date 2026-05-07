// Function: FUN_016b6bb0
// Address: 016b6bb0
// Size: 2193 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize"
//   "properties->durationInModificationTime >= 0.0"
//   "properties->durationInPlaybackTime >= 0.0"
//   "properties->durationInModificationTime == properties->durationInPlaybackTime"
//   "false && \"ARA 2 requires properties->regionSequenceRef\""
//   "musicalContext"


/* WARNING: Removing unreachable block (ram,0x016b6e67) */
/* WARNING: Removing unreachable block (ram,0x016b6d2b) */
/* WARNING: Removing unreachable block (ram,0x016b6d37) */
/* WARNING: Removing unreachable block (ram,0x016b6e73) */

void FUN_016b6bb0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  code *UNRECOVERED_JUMPTABLE;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
  }
  else {
    if (0x33 < *unaff_RSI) {
      if ((*unaff_RSI < 0x3d) || (*(longlong *)((longlong)unaff_RSI + 0x3c) == 0)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        pVar7 = (pthread_key_t)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654a70();
      }
      else {
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        pVar7 = (pthread_key_t)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d93290();
        local_78 = local_48;
        local_70 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_70 = '\x01';
        FUN_01654a70();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*unaff_RSI < 0x45) || (*(longlong *)((longlong)unaff_RSI + 0x44) == 0)) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654d80();
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01cfbee0(**(undefined4 **)((longlong)unaff_RSI + 0x44),
                     (*(undefined4 **)((longlong)unaff_RSI + 0x44))[1]);
        local_68 = local_48;
        local_60 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_60 = '\x01';
        FUN_01654d80();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      dVar1 = *(double *)((longlong)unaff_RSI + 0x14);
      if (dVar1 < 0.0) {
        if (DAT_02802f60 == (longlong *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
        pcVar8 = "properties->durationInModificationTime >= 0.0";
      }
      else {
        dVar2 = *(double *)((longlong)unaff_RSI + 0x24);
        if (0.0 <= dVar2) {
          if ((unaff_RSI[1] & 1) == 0) {
            if ((((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) &&
                (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)
                        (dVar1,
                         "properties->durationInModificationTime == properties->durationInPlaybackTime"
                        );
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655050(*(undefined8 *)((longlong)unaff_RSI + 0xc));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655110(*(undefined8 *)((longlong)unaff_RSI + 0x14));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016551d0(*(undefined8 *)((longlong)unaff_RSI + 0x1c));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655290(*(undefined8 *)((longlong)unaff_RSI + 0x24));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655370();
          iVar4 = DAT_027cb0f0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (iVar4 < 3) {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *unaff_RSI;
          }
          else {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *unaff_RSI;
          }
          if (uVar3 < 0x35) {
            local_38[0] = '\0';
            if (2 < DAT_027cb0f0) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)
                          (uVar10,"false && \"ARA 2 requires properties->regionSequenceRef\"");
                return;
              }
              return;
            }
            lVar9 = *(longlong *)((longlong)unaff_RSI + 0x2c);
            if (lVar9 == 0) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(uVar10,"musicalContext");
                return;
              }
              return;
            }
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01658380();
            local_58 = local_88;
            local_50 = 0;
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_50 = '\x01';
            local_b0 = '\0';
            local_b8 = lVar9;
            uVar10 = FUN_0168a170(&local_b8,&local_58);
            if (local_48 == 0) {
              lVar9 = 0;
            }
            else {
              if (local_40[0] == '\0') {
                pcVar8 = local_38;
              }
              else {
                pcVar8 = local_40;
                local_38[0] = '\x01';
              }
              *pcVar8 = '\0';
              lVar9 = local_48;
              if (local_40[0] != '\0') {
                uVar10 = FUN_00d50b20();
              }
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            if ((*(longlong *)((longlong)unaff_RSI + 0x34) == 0) ||
               (cVar5 = FUN_012c91b0(), uVar10 = extraout_XMM0_Qa, cVar5 == '\0')) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
                return;
              }
              return;
            }
            lVar9 = *(longlong *)((longlong)unaff_RSI + 0x34);
          }
          local_a0 = '\0';
          local_98 = *unaff_RDI;
          local_90 = '\0';
          local_a8 = lVar9;
          FUN_0168a900(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            if (lVar9 != 0) {
              FUN_00d50b20();
              return;
            }
            return;
          }
          return;
        }
        if (DAT_02802f60 == (longlong *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
        pcVar8 = "properties->durationInPlaybackTime >= 0.0";
      }
      (*UNRECOVERED_JUMPTABLE)(dVar1,pcVar8);
      return;
    }
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize";
  }
                    /* WARNING: Could not recover jumptable at 0x016b6cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
  return;
}


