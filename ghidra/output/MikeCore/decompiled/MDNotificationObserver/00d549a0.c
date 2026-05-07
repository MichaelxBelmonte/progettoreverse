// Function: FUN_00d549a0
// Address: 00d549a0
// Size: 1804 bytes
// Class: MDNotificationObserver


/* WARNING: Removing unreachable block (ram,0x00d55002) */
/* WARNING: Removing unreachable block (ram,0x00d5500e) */
/* WARNING: Removing unreachable block (ram,0x00d54ee5) */
/* WARNING: Removing unreachable block (ram,0x00d54ef1) */
/* WARNING: Removing unreachable block (ram,0x00d54e5f) */
/* WARNING: Removing unreachable block (ram,0x00d54e6b) */
/* WARNING: Removing unreachable block (ram,0x00d54c88) */
/* WARNING: Removing unreachable block (ram,0x00d54ca1) */
/* WARNING: Removing unreachable block (ram,0x00d54a1c) */
/* WARNING: Removing unreachable block (ram,0x00d54a28) */
/* WARNING: Removing unreachable block (ram,0x00d54b1a) */
/* WARNING: Removing unreachable block (ram,0x00d54b26) */
/* WARNING: Removing unreachable block (ram,0x00d54e45) */
/* WARNING: Removing unreachable block (ram,0x00d54e51) */
/* WARNING: Removing unreachable block (ram,0x00d54fab) */
/* WARNING: Removing unreachable block (ram,0x00d54fb7) */
/* WARNING: Removing unreachable block (ram,0x00d5501c) */
/* WARNING: Removing unreachable block (ram,0x00d55028) */
/* WARNING: Removing unreachable block (ram,0x00d54ecb) */
/* WARNING: Removing unreachable block (ram,0x00d54ed4) */
/* WARNING: Removing unreachable block (ram,0x00d54d48) */
/* WARNING: Removing unreachable block (ram,0x00d54d21) */
/* WARNING: Removing unreachable block (ram,0x00d54abc) */
/* WARNING: Removing unreachable block (ram,0x00d54ac9) */
/* WARNING: Removing unreachable block (ram,0x00d54d3b) */
/* WARNING: Removing unreachable block (ram,0x00d54b34) */
/* WARNING: Removing unreachable block (ram,0x00d54ba5) */
/* WARNING: Removing unreachable block (ram,0x00d54d52) */
/* WARNING: Removing unreachable block (ram,0x00d54bbc) */
/* WARNING: Removing unreachable block (ram,0x00d54bd5) */
/* WARNING: Removing unreachable block (ram,0x00d54bdd) */
/* WARNING: Removing unreachable block (ram,0x00d54cb0) */
/* WARNING: Removing unreachable block (ram,0x00d54cb9) */
/* WARNING: Removing unreachable block (ram,0x00d54cd4) */
/* WARNING: Removing unreachable block (ram,0x00d54ce1) */
/* WARNING: Removing unreachable block (ram,0x00d54c34) */
/* WARNING: Removing unreachable block (ram,0x00d54c38) */
/* WARNING: Removing unreachable block (ram,0x00d54c4d) */
/* WARNING: Removing unreachable block (ram,0x00d54c52) */
/* WARNING: Removing unreachable block (ram,0x00d54db2) */
/* WARNING: Removing unreachable block (ram,0x00d54dd6) */
/* WARNING: Removing unreachable block (ram,0x00d54ddb) */
/* WARNING: Removing unreachable block (ram,0x00d54df1) */
/* WARNING: Removing unreachable block (ram,0x00d54dfa) */
/* WARNING: Removing unreachable block (ram,0x00d54dff) */
/* WARNING: Removing unreachable block (ram,0x00d54e80) */
/* WARNING: Removing unreachable block (ram,0x00d54e88) */
/* WARNING: Removing unreachable block (ram,0x00d54cf9) */
/* WARNING: Removing unreachable block (ram,0x00d54b80) */
/* WARNING: Removing unreachable block (ram,0x00d54ba0) */
/* WARNING: Removing unreachable block (ram,0x00d54b82) */
/* WARNING: Removing unreachable block (ram,0x00d54ba2) */
/* WARNING: Removing unreachable block (ram,0x00d54d13) */
/* WARNING: Removing unreachable block (ram,0x00d550a2) */
/* WARNING: Removing unreachable block (ram,0x00d550af) */
/* WARNING: Removing unreachable block (ram,0x00d55040) */
/* WARNING: Removing unreachable block (ram,0x00d54d9c) */
/* WARNING: Removing unreachable block (ram,0x00d54eae) */
/* WARNING: Removing unreachable block (ram,0x00d54da6) */
/* WARNING: Removing unreachable block (ram,0x00d55088) */
/* WARNING: Removing unreachable block (ram,0x00d55061) */

undefined8 * FUN_00d549a0(void)

{
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  
  (**(code **)(*unaff_RSI + 0x360))();
  FUN_00e86210();
  FUN_00c85dd0();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00e31530();
  }
  if (local_58 == (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0xf8))();
    (**(code **)(*unaff_RSI + 0x1f8))();
    FUN_00c841b0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00e31530();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00dd4dc0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c85c30();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00e31530();
    (**(code **)(*local_58 + 0x368))();
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}


