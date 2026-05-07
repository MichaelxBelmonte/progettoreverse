// Function: FUN_01d824e0
// Address: 01d824e0
// Size: 509 bytes
// Class: GNResponder


/* WARNING: Removing unreachable block (ram,0x01d82589) */
/* WARNING: Removing unreachable block (ram,0x01d82592) */

undefined8 * FUN_01d824e0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  bVar3 = true;
  do {
    if (unaff_RSI == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00d4efa0();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 == (longlong *)0x0) ||
       ((local_48 != (longlong *)*param_2 && (cVar5 = FUN_00c80ea0(), cVar5 == '\0')))) {
      (**(code **)(*unaff_RSI + 0x370))();
      if (local_48 == unaff_RSI) {
        bVar4 = bVar3;
        if ((!bVar3) && (local_48 != (longlong *)0x0)) {
          bVar4 = true;
          if (local_40[0] != '\0') goto LAB_01d82684;
          FUN_00d50b00();
          bVar4 = true;
        }
joined_r0x01d8265d:
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        unaff_RSI = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (bVar3) {
            FUN_00d50b20();
          }
          goto joined_r0x01d8265d;
        }
        bVar4 = true;
        if (bVar3) {
          FUN_00d50b20();
        }
      }
LAB_01d82684:
      bVar2 = false;
      bVar1 = false;
      bVar3 = bVar4;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar3) {
        FUN_00d50b00();
      }
      *unaff_RDI = unaff_RSI;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    if ((local_38[0] != '\0') && (bVar1 = bVar2, local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      if ((bVar3) && (unaff_RSI != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}


