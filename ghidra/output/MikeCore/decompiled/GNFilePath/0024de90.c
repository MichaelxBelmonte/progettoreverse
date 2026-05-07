// Function: FUN_0024de90
// Address: 0024de90
// Size: 564 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x0024dfec) */
/* WARNING: Removing unreachable block (ram,0x0024dff5) */
/* WARNING: Removing unreachable block (ram,0x0024df4b) */
/* WARNING: Removing unreachable block (ram,0x0024df57) */
/* WARNING: Removing unreachable block (ram,0x0024df34) */
/* WARNING: Removing unreachable block (ram,0x0024df3d) */
/* WARNING: Removing unreachable block (ram,0x0024dfcb) */
/* WARNING: Removing unreachable block (ram,0x0024dfd4) */
/* WARNING: Removing unreachable block (ram,0x0024e0a1) */
/* WARNING: Removing unreachable block (ram,0x0024e0aa) */

void FUN_0024de90(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong *local_58;
  char local_50;
  longlong *local_38;
  char local_30;
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      (**(code **)(&UNK_00001828 + *local_38))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      lVar1 = DAT_026f6de8;
      if (DAT_026f6de8 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_026f6d80;
      if (DAT_026f6d80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_50 = '\0';
      local_58 = plVar2;
      FUN_00d40470(&local_58,&stack0xffffffffffffffb8,3,3);
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}


