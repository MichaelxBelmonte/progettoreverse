// Function: FUN_01e5e740
// Address: 01e5e740
// Size: 821 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e5e96f) */
/* WARNING: Removing unreachable block (ram,0x01e5e978) */
/* WARNING: Removing unreachable block (ram,0x01e5e887) */
/* WARNING: Removing unreachable block (ram,0x01e5e890) */
/* WARNING: Removing unreachable block (ram,0x01e5e82b) */
/* WARNING: Removing unreachable block (ram,0x01e5e834) */
/* WARNING: Removing unreachable block (ram,0x01e5e8f7) */
/* WARNING: Removing unreachable block (ram,0x01e5e900) */
/* WARNING: Removing unreachable block (ram,0x01e5ea31) */
/* WARNING: Removing unreachable block (ram,0x01e5ea3a) */

void FUN_01e5e740(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d8b200();
  if (in_stack_ffffffffffffffc0 == 0) {
    bVar3 = false;
  }
  else if (unaff_RDI[3] == 0) {
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    lVar1 = unaff_RDI[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d88f70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[4];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x558))();
  }
  FUN_01e58640();
  lVar1 = local_70;
  FUN_00d50b00();
  cVar4 = FUN_00d23d70();
  FUN_00d50b20();
  if ((local_68 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01e58640();
    FUN_00d50b00();
    FUN_00d23f50();
    FUN_00d50b20();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  FUN_00d50b00();
  FUN_01f30670();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x550))();
  }
  FUN_01f27fe0();
  (**(code **)(*unaff_RDI + 0x4b8))();
  FUN_00d403d0();
  lVar1 = DAT_027f3de8;
  if (DAT_027f3de8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffffb0,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


