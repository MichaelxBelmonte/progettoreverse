// Function: FUN_01878fb0
// Address: 01878fb0
// Size: 549 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01879018) */
/* WARNING: Removing unreachable block (ram,0x01879021) */
/* WARNING: Removing unreachable block (ram,0x01879090) */
/* WARNING: Removing unreachable block (ram,0x01879099) */
/* WARNING: Removing unreachable block (ram,0x0187919a) */
/* WARNING: Removing unreachable block (ram,0x018791a7) */
/* WARNING: Removing unreachable block (ram,0x018791cc) */
/* WARNING: Removing unreachable block (ram,0x018791d9) */

void FUN_01878fb0(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  iVar2 = FUN_01715480();
  FUN_018da560();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = *param_3;
  local_78 = 0;
  FUN_0185df90(1,param_1,&local_80);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01716260();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(local_40 + 0x18);
  if (iVar3 < 4) {
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_40 == 0) goto LAB_01879165;
  }
  else {
    lVar5 = 0;
    fVar6 = DAT_02394274;
    do {
      iVar4 = *(int *)(*(longlong *)(local_40 + 0x10) + lVar5 * 4);
      pfVar1 = (float *)(*(longlong *)(local_40 + 0x10) + (longlong)iVar4 * 4);
      if (*pfVar1 <= fVar6 && fVar6 != *pfVar1) {
        FUN_017163c0((ulonglong)((longlong)(iVar4 + (0xc - iVar2)) * 0x2aaaaaab) >> 0x3f);
        iVar3 = *(int *)(local_40 + 0x18);
        fVar6 = DAT_02394274;
      }
      lVar5 = lVar5 + 1;
      iVar4 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
    } while (lVar5 < iVar4 >> 2);
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_00d50b20();
LAB_01879165:
  FUN_00d50b20();
  return;
}


