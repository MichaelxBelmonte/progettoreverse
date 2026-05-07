// Function: FUN_015f9f10
// Address: 015f9f10
// Size: 827 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fa184) */
/* WARNING: Removing unreachable block (ram,0x015fa18d) */
/* WARNING: Removing unreachable block (ram,0x015f9ff2) */
/* WARNING: Removing unreachable block (ram,0x015f9ffb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f9f10(float param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char in_CL;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar5;
  bool bVar6;
  
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    do {
      if ((*(int *)(*(longlong *)(unaff_RSI + 0x10) + 0xc) < 2) ||
         ((lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + 0x78),
          lVar2 == 0 || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)))) goto LAB_015fa256;
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 != 3) {
        lVar2 = *param_2;
        if ((lVar2 == 0) || ((int)*(uint *)(lVar2 + 0x18) < 4)) goto LAB_015fa256;
        uVar5 = 0;
        while (iVar1 != *(int *)(*(longlong *)(lVar2 + 0x10) + uVar5 * 4)) {
          uVar5 = uVar5 + 1;
          if (*(uint *)(lVar2 + 0x18) >> 2 == uVar5) goto LAB_015fa256;
        }
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x78) + 0xc) != iVar1) ||
         (lVar2 = *(longlong *)(lVar3 + 0x80), lVar2 == 0)) goto LAB_015fa256;
      FUN_00d50b00();
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0xc) < 2) goto LAB_015fa23a;
      if (*param_3 == 0) {
        cVar4 = in_CL;
        if (*(char *)(lVar2 + 0x50) == '\0') goto joined_r0x015fa07c;
      }
      else {
        cVar4 = FUN_00d24090();
joined_r0x015fa07c:
        if (cVar4 == '\0') goto LAB_015fa244;
      }
      if ((lVar2 != unaff_RSI) && (FUN_00d50b00(), bVar6 = unaff_RSI != 0, unaff_RSI = lVar2, bVar6)
         ) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    } while( true );
  }
  while( true ) {
    if (((*(int *)(*(longlong *)(unaff_RSI + 0x10) + 0xc) < 2) ||
        (lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + 0x78),
        lVar2 == 0)) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_015fa256;
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 != 3) {
      lVar2 = *param_2;
      if ((lVar2 == 0) || ((int)*(uint *)(lVar2 + 0x18) < 4)) goto LAB_015fa256;
      uVar5 = 0;
      while (iVar1 != *(int *)(*(longlong *)(lVar2 + 0x10) + uVar5 * 4)) {
        uVar5 = uVar5 + 1;
        if (*(uint *)(lVar2 + 0x18) >> 2 == uVar5) goto LAB_015fa256;
      }
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x78) + 0xc) != iVar1) ||
       (lVar2 = *(longlong *)(lVar3 + 0x80), lVar2 == 0)) goto LAB_015fa256;
    FUN_00d50b00();
    if (param_1 < (float)((uint)(*(float *)(unaff_RSI + 0x2c) - *(float *)(lVar2 + 0x2c)) &
                         _DAT_02390140)) break;
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0xc) < 2) goto LAB_015fa23a;
    if (*param_3 == 0) {
      cVar4 = in_CL;
      if (*(char *)(lVar2 + 0x50) == '\0') goto joined_r0x015fa200;
    }
    else {
      cVar4 = FUN_00d24090();
joined_r0x015fa200:
      if (cVar4 == '\0') goto LAB_015fa244;
    }
    if ((lVar2 != unaff_RSI) && (FUN_00d50b00(), bVar6 = unaff_RSI != 0, unaff_RSI = lVar2, bVar6))
    {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_015fa256:
  *unaff_RDI = unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
LAB_015fa23a:
  FUN_00d50b20();
  goto LAB_015fa256;
LAB_015fa244:
  FUN_00d50b20();
  goto LAB_015fa256;
}


