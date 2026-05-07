// Function: FUN_01bb2d10
// Address: 01bb2d10
// Size: 552 bytes
// Class: GNList
// String references:
//   "%I"
//   "+%I"


/* WARNING: Removing unreachable block (ram,0x01bb2ef2) */
/* WARNING: Removing unreachable block (ram,0x01bb2efb) */
/* WARNING: Removing unreachable block (ram,0x01bb2ddd) */
/* WARNING: Removing unreachable block (ram,0x01bb2de6) */

void FUN_01bb2d10(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RSI;
  longlong *plVar3;
  longlong *unaff_RDI;
  bool bVar4;
  float fVar5;
  undefined8 *local_48;
  undefined4 local_40;
  int local_3c;
  float local_34;
  
  lVar1 = *param_2;
  if (*(longlong *)(unaff_RSI + 0xd8) == lVar1) {
    local_3c = param_4 / 3;
    local_40 = 1;
    local_48 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_48);
  }
  else {
    if (*(longlong *)(unaff_RSI + 0xe0) == lVar1) {
      local_34 = (float)(**(code **)(**(longlong **)(unaff_RSI + 0xf8) + 0x380))();
      fVar5 = local_34 + (float)param_4;
      plVar3 = *(longlong **)(unaff_RSI + 0xf8);
    }
    else {
      if (*(longlong *)(unaff_RSI + 0xe8) != lVar1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar1 = *param_1;
        if ((char)param_1[1] != '\0') {
          *unaff_RDI = lVar1;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
      FUN_01d3a560();
      local_34 = (float)FUN_01d3b590();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3a560();
      iVar2 = FUN_01d3b590();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      bVar4 = local_34 == 1.12104e-44;
      local_34 = DAT_023908ec;
      if (iVar2 != 4) {
        local_34 = *(float *)(&DAT_0241dd00 + (ulonglong)bVar4 * 4);
      }
      fVar5 = (float)(**(code **)(**(longlong **)(unaff_RSI + 0x100) + 0x380))();
      fVar5 = local_34 * (float)param_4 + fVar5;
      plVar3 = *(longlong **)(unaff_RSI + 0x100);
    }
    (**(code **)(*plVar3 + 0x378))(fVar5);
  }
  return;
}


