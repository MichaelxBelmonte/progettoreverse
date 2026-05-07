// Function: FUN_00367bf0
// Address: 00367bf0
// Size: 521 bytes
// Class: MDMetaDocumentController


/* WARNING: Removing unreachable block (ram,0x00367c2a) */
/* WARNING: Removing unreachable block (ram,0x00367c33) */

void FUN_00367bf0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x518))();
  plVar1 = (longlong *)*unaff_RSI;
  local_40 = 0;
  local_48 = unaff_RDI[0x2a];
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x528))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x390))();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x370))();
  }
  plVar1 = (longlong *)unaff_RDI[0x2a];
  FUN_00b335d0();
  (**(code **)(*plVar1 + 0x398))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x660))();
  FUN_00b33530();
  (**(code **)(*(longlong *)*unaff_RSI + 0x668))();
  FUN_00b335a0();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  }
  (**(code **)(*unaff_RDI + 0x770))();
  DAT_028077a0 = (**(code **)(*(longlong *)*unaff_RSI + 0x6d0))();
  FUN_00d403d0();
  lVar2 = DAT_027294a0;
  if (DAT_027294a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&stack0xffffffffffffffc8,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


