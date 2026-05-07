// Function: FUN_00e633c0
// Address: 00e633c0
// Size: 1298 bytes
// Class: GNString
// String references:
//   "%s"


/* WARNING: Removing unreachable block (ram,0x00e6383c) */
/* WARNING: Removing unreachable block (ram,0x00e63845) */
/* WARNING: Removing unreachable block (ram,0x00e637db) */
/* WARNING: Removing unreachable block (ram,0x00e637f3) */
/* WARNING: Removing unreachable block (ram,0x00e635a3) */
/* WARNING: Removing unreachable block (ram,0x00e635ac) */
/* WARNING: Removing unreachable block (ram,0x00e63699) */
/* WARNING: Removing unreachable block (ram,0x00e636a2) */
/* WARNING: Removing unreachable block (ram,0x00e6377d) */
/* WARNING: Removing unreachable block (ram,0x00e63786) */
/* WARNING: Removing unreachable block (ram,0x00e63871) */
/* WARNING: Removing unreachable block (ram,0x00e6387a) */
/* WARNING: Removing unreachable block (ram,0x00e6371c) */
/* WARNING: Removing unreachable block (ram,0x00e63629) */
/* WARNING: Removing unreachable block (ram,0x00e635de) */
/* WARNING: Removing unreachable block (ram,0x00e635e7) */
/* WARNING: Removing unreachable block (ram,0x00e636d4) */
/* WARNING: Removing unreachable block (ram,0x00e636dd) */
/* WARNING: Removing unreachable block (ram,0x00e637b2) */
/* WARNING: Removing unreachable block (ram,0x00e637bb) */

void FUN_00e633c0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  
  FUN_00d50100();
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d41430(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  *(longlong **)(unaff_RDI + 0x28) = plVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00003040();
  FUN_00d8cb40();
  lVar1 = DAT_02787830;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
    lVar1 = DAT_02787830;
  }
  DAT_02787830 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00003050();
  FUN_00d8cb40();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027d2068;
  if (DAT_027d2068 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d8cb40();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02787840;
  if (DAT_02787840 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00dd16c0();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02787848;
  if (DAT_02787848 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000468f0();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  *(longlong **)(unaff_RDI + 0x30) = plVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00e36990();
  return;
}


