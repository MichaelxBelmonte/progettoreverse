// Function: FUN_01b71450
// Address: 01b71450
// Size: 1414 bytes
// Class: MUElementAnalyzer


void FUN_01b71450(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  ulonglong *puVar11;
  int iVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  int iVar14;
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  undefined8 *local_38;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x9d0))();
  if (cVar1 != '\0') {
    if (unaff_RDI[0x2b] == 0) {
                    /* WARNING: Could not recover jumptable at 0x01b716a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_RDI + 0xa10))();
      return;
    }
    if ((*(int *)((longlong)unaff_RDI + 0x17c) != 0) || (*(int *)((longlong)unaff_RDI + 0x184) != 0)
       ) {
      local_40 = (ulonglong *)(unaff_RDI + 0x2f);
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &DAT_025683c0;
      *puVar3 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      local_38 = puVar3;
      FUN_00c92160();
      local_64 = 0xffffffff;
      local_70 = '\0';
      local_78 = 0;
      while( true ) {
        pVar10 = (pthread_key_t)puVar6;
        lVar8 = unaff_RDI[0x2b];
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_00e7bdb0();
        puVar6 = (undefined *)FUN_00e7bdb0();
        cVar1 = FUN_01252960(puVar6,uVar5,&local_78,&local_88);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        puVar3 = local_38;
        if (cVar1 == '\0') break;
        if (iStack_84 != 0) {
          iVar14 = *(int *)(local_38 + 3);
          FUN_00c8e340();
          puVar6 = (undefined *)CONCAT44(iStack_84,local_88);
          *(undefined **)(puVar3[2] + (longlong)iVar14) = puVar6;
        }
      }
      if (*(int *)(local_38 + 3) + 7U < 0xf) {
        uVar7 = FUN_00e7bdb0();
        *local_40 = uVar7;
        lVar8 = FUN_00e7bdb0();
        unaff_RDI[0x30] = lVar8;
      }
      uVar7 = *local_40 >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b716d8;
            if (iVar12 == 0) break;
            uVar7 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0x17c);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_40 = uVar7;
      }
LAB_01b716d8:
      local_48 = (ulonglong *)(unaff_RDI + 0x30);
      uVar7 = (ulonglong)unaff_RDI[0x30] >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b7177e;
            if (iVar12 == 0) break;
            uVar7 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0x184);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_48 = uVar7;
      }
LAB_01b7177e:
      iVar14 = *(int *)((longlong)unaff_RDI + 0x17c);
      while (((iVar14 != 0 && (*(int *)((longlong)local_48 + 4) != 0)) &&
             (cVar1 = FUN_00e7c020(), cVar1 == '\0'))) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          lVar8 = local_38[2];
          iVar14 = 0;
          do {
            if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((longlong)unaff_RDI + 0x17c) != 0)) &&
               (cVar1 = FUN_00e7c000(), cVar1 != '\0')) goto LAB_01b71856;
            lVar8 = lVar8 + 8;
            iVar14 = iVar14 + 1;
          } while (iVar12 >> 3 != iVar14);
          iVar14 = -1;
LAB_01b71856:
          iVar12 = *(int *)(local_38 + 3);
          iVar2 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar2 = iVar12;
          }
          if (7 < iVar12) {
            lVar8 = local_38[2];
            lVar13 = 0;
            do {
              if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((longlong)unaff_RDI + 0x184) != 0)) &&
                 (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
                if (iVar14 == -1) break;
                local_58 = FUN_00e7bdb0();
                uVar7 = FUN_00e7bdb0();
                if (0 < iVar14) {
                  local_58 = *(ulonglong *)(local_38[2] + (ulonglong)(iVar14 - 1) * 8);
                }
                iVar14 = *(int *)(local_38 + 3);
                iVar12 = iVar14 + 7;
                if (-1 < iVar14) {
                  iVar12 = iVar14;
                }
                if ((int)lVar13 < (iVar12 >> 3) + -1) {
                  uVar7 = *(ulonglong *)(local_38[2] + 8 + lVar13 * 8);
                }
                local_60 = uVar7;
                if (local_58 >> 0x20 == 0) {
                  puVar11 = local_48;
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                  }
                }
                else {
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                    break;
                  }
                  local_50 = *local_40;
                  FUN_00e7b970();
                  local_80 = FUN_00e7bdb0();
                  local_50 = *local_48;
                  FUN_00e7b970();
                  uVar9 = FUN_00e7bdb0();
                  uVar7 = local_60;
                  puVar11 = local_48;
                  if (((local_80._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
                     (cVar1 = FUN_00e7c020(), uVar7 = local_60, puVar11 = local_48, cVar1 == '\0'))
                  {
                    uVar7 = local_58;
                    puVar11 = local_40;
                  }
                }
                *puVar11 = uVar7;
                break;
              }
              lVar8 = lVar8 + 8;
              lVar13 = lVar13 + 1;
            } while (iVar2 >> 3 != (int)lVar13);
          }
        }
        iVar14 = *(int *)((longlong)local_40 + 4);
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


