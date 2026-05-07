// Function: FUN_00d31720
// Address: 00d31720
// Size: 534 bytes
// Class: GNString


void FUN_00d31720(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_0277d620;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_0277d620 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_68);
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x398))();
      if (cVar3 != '\0') {
        local_58 = plVar1;
        local_50 = '\0';
        FUN_00ca94c0();
        plVar1 = local_38;
        if (local_30 == '\0') {
          if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
             (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_30 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0277d628;
        if (plVar1 != (longlong *)0x0) {
          if (DAT_0277d628 != 0) {
            FUN_00d50b00();
          }
          local_48 = lVar2;
          local_40 = '\x01';
          FUN_000175c0(param_1,&local_48);
          plVar1 = local_38;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_30 == '\0') {
            if (local_38 == (longlong *)0x0) {
              *unaff_RDI = 0;
              *(undefined1 *)(unaff_RDI + 1) = 1;
            }
            else {
              FUN_00d50b00();
              *unaff_RDI = plVar1;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *unaff_RDI = local_38;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_30 = '\0';
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


