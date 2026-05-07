// Function: FUN_00d10270
// Address: 00d10270
// Size: 528 bytes
// Class: GNList
// String references:
//   "@%@"


/* WARNING: Removing unreachable block (ram,0x00d10444) */
/* WARNING: Removing unreachable block (ram,0x00d1044d) */
/* WARNING: Removing unreachable block (ram,0x00d102d0) */
/* WARNING: Removing unreachable block (ram,0x00d102dc) */
/* WARNING: Removing unreachable block (ram,0x00d10458) */
/* WARNING: Removing unreachable block (ram,0x00d10461) */
/* WARNING: Removing unreachable block (ram,0x00d103b5) */
/* WARNING: Removing unreachable block (ram,0x00d103c2) */
/* WARNING: Removing unreachable block (ram,0x00d103ec) */
/* WARNING: Removing unreachable block (ram,0x00d103f5) */

void FUN_00d10270(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  if (*(longlong *)(unaff_RSI + 0x68) == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_0258a670;
    (*DAT_0258a688)();
    puVar2 = *(undefined8 **)(unaff_RSI + 0x68);
    if (puVar2 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RSI + 0x68) = puVar3;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00cabdd0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if (local_50 == 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_50 = local_50;
    if ((local_60 != 0) && (local_50 = local_60, local_58 == '\0')) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00cabe80();
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


