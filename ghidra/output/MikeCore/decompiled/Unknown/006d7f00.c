// Function: FUN_006d7f00
// Address: 006d7f00
// Size: 899 bytes
// Class: Unknown
// String references:
//   "%I"
//   "+%I"


/* WARNING: Removing unreachable block (ram,0x006d8064) */
/* WARNING: Removing unreachable block (ram,0x006d806d) */

undefined8 FUN_006d7f00(undefined8 *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  float fVar10;
  float local_44;
  longlong *local_40;
  uint local_38;
  int local_34;
  
  plVar1 = (longlong *)*param_1;
  FUN_00e99dd0();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_34 = param_4 / 3;
    local_38 = 1;
    local_40 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_40);
    return unaff_RDI;
  }
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3a560();
  iVar6 = FUN_01d3b590();
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e05950();
  local_44 = (float)(**(code **)(*local_40 + 0x380))();
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  if (*(longlong *)(unaff_RSI + 0x170) == lVar2) {
    fVar10 = DAT_02391090;
    if (iVar6 != 4) {
      fVar10 = *(float *)(&DAT_023b67d0 + (ulonglong)(iVar5 == 8) * 4);
    }
    lVar8 = *(longlong *)(unaff_RSI + 0x168);
LAB_006d81ce:
    local_44 = local_44 + (float)param_4 * fVar10;
    if (lVar8 != lVar2) goto LAB_006d8238;
  }
  else {
    lVar8 = *(longlong *)(unaff_RSI + 0x168);
    if (lVar8 != lVar2) {
      if (*(longlong *)(unaff_RSI + 0x178) == lVar2) {
        fVar10 = DAT_02390d28;
        if (iVar6 != 4) {
          fVar10 = *(float *)(&DAT_023b67c8 + (ulonglong)(iVar5 == 8) * 4);
        }
      }
      else {
        pfVar9 = (float *)(&DAT_023b67c0 + (ulonglong)(iVar5 == 8) * 4);
        if (iVar6 == 4) {
          pfVar9 = (float *)(&DAT_023b67b8 +
                            (ulonglong)(*(longlong *)(unaff_RSI + 0x180) != lVar2) * 4);
        }
        if (*(longlong *)(unaff_RSI + 0x180) != lVar2) {
          pfVar9 = (float *)(&DAT_023b67b8 +
                            (ulonglong)(*(longlong *)(unaff_RSI + 0x180) != lVar2) * 4);
        }
        fVar10 = *pfVar9;
      }
      goto LAB_006d81ce;
    }
    fVar10 = DAT_02391090;
    if (iVar6 != 4) {
      fVar10 = *(float *)(&DAT_023b67d0 + (ulonglong)(iVar5 == 8) * 4);
    }
    local_44 = local_44 + (float)param_4 * fVar10;
  }
  fVar10 = (float)(**(code **)(**(longlong **)(unaff_RSI + 0x130) + 0xad0))();
  if (local_44 <= fVar10) {
    fVar10 = (float)(**(code **)(**(longlong **)(unaff_RSI + 0x130) + 0xac0))();
    if (fVar10 <= local_44) goto LAB_006d8238;
    puVar7 = (undefined8 *)(**(longlong **)(unaff_RSI + 0x130) + 0xac0);
  }
  else {
    puVar7 = (undefined8 *)(**(longlong **)(unaff_RSI + 0x130) + 0xad0);
  }
  local_44 = (float)(*(code *)*puVar7)();
LAB_006d8238:
  FUN_01e05950();
  (**(code **)(*local_40 + 0x378))(local_44);
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


