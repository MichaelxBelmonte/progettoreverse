// Function: FUN_01522730
// Address: 01522730
// Size: 1224 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x015229ed) */
/* WARNING: Removing unreachable block (ram,0x015229f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01522730(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_01522cd0();
  lVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      lVar1 = *param_2;
      goto joined_r0x0152278c;
    }
  }
  else if (local_48 != 0) {
    lVar1 = *param_2;
joined_r0x0152278c:
    if (lVar1 != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      if (iVar4 != 0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        if (iVar4 != 1) {
          iVar4 = *(int *)(unaff_RSI + 0x18);
          if (iVar4 == 0) {
            dVar9 = 0.0;
            dVar13 = 0.0;
          }
          else {
            plVar2 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + 0x10);
            uVar3 = iVar4 + 0x3fe;
            if (-1 < (int)(iVar4 - 1U)) {
              uVar3 = iVar4 - 1U;
            }
            dVar9 = **(double **)(*plVar2 + 0x10);
            param_1 = *(longlong *)(plVar2[(int)uVar3 >> 10] + 0x10);
            dVar13 = *(double *)
                      (param_1 + (longlong)(int)((iVar4 - (uVar3 & 0xfffffc00)) + -1) * 0x20) -
                     dVar9;
          }
          pVar6 = (pthread_key_t)param_1;
          dVar13 = dVar13 + dVar9;
          if (*(int *)(unaff_RSI + 0x20) != 2) {
            local_50 = 0xffffffff;
            local_4c = 0xffffffff;
            dVar11 = dVar9;
            dVar10 = local_38;
            while( true ) {
              local_38 = dVar11;
              if (dVar13 < local_38) {
                *(undefined1 *)(unaff_RDI + 1) = 0;
                *unaff_RDI = 0;
                local_38 = dVar10;
                FUN_00d50b20();
                return;
              }
              pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_016c25f0(local_38);
              pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar11 = (double)FUN_016c25f0(local_38);
              local_48 = FUN_01907d40();
              dVar12 = (double)FUN_00e7c860();
              pVar6 = (pthread_key_t)param_1;
              if (dVar12 * DAT_023942d0 * _DAT_0240e9a0 <
                  (double)((ulonglong)(dVar11 - dVar10) & _DAT_023908f0)) break;
              dVar10 = local_38 + DAT_0238fee8;
              dVar11 = dVar10;
            }
          }
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = (double)FUN_016c9870();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_016c9950();
          if ((!NAN(local_38)) &&
             ((uVar8 = -(ulonglong)(dVar13 < DAT_0240e9a8 + dVar10), local_38 + DAT_023908d0 < dVar9
              || (!NAN((double)(-(ulonglong)NAN(dVar10) & (ulonglong)dVar13 |
                               ~-(ulonglong)NAN(dVar10) &
                               (~uVar8 & DAT_023908c8 | uVar8 & (ulonglong)dVar13))))))) {
            local_60 = lVar7;
            local_58 = '\0';
            FUN_016c3770(dVar9,&local_60);
            lVar1 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00d50130();
              if (lVar7 != lVar1) {
                FUN_00d50b00();
                FUN_00d50b20();
                lVar7 = lVar1;
              }
              FUN_00d50b20();
            }
          }
        }
      }
    }
    *unaff_RDI = lVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


