// Function: FUN_00b21b60
// Address: 00b21b60
// Size: 636 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b21dd7) */
/* WARNING: Removing unreachable block (ram,0x00b21de4) */
/* WARNING: Removing unreachable block (ram,0x00b21d00) */
/* WARNING: Removing unreachable block (ram,0x00b21d09) */
/* WARNING: Removing unreachable block (ram,0x00b21d47) */
/* WARNING: Removing unreachable block (ram,0x00b21d70) */
/* WARNING: Removing unreachable block (ram,0x00b21d49) */
/* WARNING: Removing unreachable block (ram,0x00b21d72) */

void FUN_00b21b60(void)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *unaff_RDI;
  undefined8 in_R9;
  double dVar9;
  longlong local_60;
  char local_58;
  int local_48;
  uint local_34;
  
  iVar4 = _AudioObjectGetPropertyDataSize(0,0,&local_34,in_R9,0x73666d61,0);
  if (iVar4 == 0) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    if (local_34 != 0) {
      lVar6 = FUN_00e83010();
      iVar4 = _AudioObjectGetPropertyData(0,0,&local_34,lVar6);
      if (iVar4 != 0) {
        FUN_00e83070();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00d50b20();
        return;
      }
      if (0x37 < local_34) {
        uVar8 = 0;
        do {
          lVar3 = local_60;
          lVar7 = uVar8 * 0x38;
          if ((*(int *)(lVar6 + 8 + lVar7) == 0x6c70636d) &&
             ((*(byte *)(lVar6 + 0xc + lVar7) & 0xb) != 0)) {
            dVar1 = *(double *)(lVar6 + 0x28 + lVar7);
            dVar2 = *(double *)(lVar6 + 0x30 + lVar7);
            FUN_00b19680();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                goto LAB_00b21d12;
              }
            }
            else if (local_60 != 0) {
LAB_00b21d12:
              local_58 = '\0';
              local_60 = 0;
              local_48 = -1;
              while( true ) {
                lVar7 = (longlong)local_48;
                local_48 = local_48 + 1;
                if (*(int *)(lVar3 + 0xc) <= local_48) break;
                local_60 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar7 * 8);
                dVar9 = (double)FUN_00d45bc0();
                if ((dVar1 <= dVar9) && (dVar9 <= dVar2)) {
                  FUN_00d235a0();
                }
              }
              FUN_00136b80();
              FUN_00d50b20();
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != (ulonglong)(local_34 >> 3) / 7);
      }
      FUN_00e83070();
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


