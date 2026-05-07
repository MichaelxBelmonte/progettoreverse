// Function: FUN_00b25f20
// Address: 00b25f20
// Size: 916 bytes
// Class: MUElementAnalyzer


void FUN_00b25f20(void)

{
  int iVar1;
  longlong *unaff_RDI;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x568))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  iVar1 = _AudioDeviceCreateIOProcID(unaff_RDI + 0x1c);
  if (iVar1 == 0) {
    if ((((int)unaff_RDI[0x1a] == *(int *)((longlong)unaff_RDI + 0xd4)) ||
        ((int)unaff_RDI[0x14] < 1)) ||
       (iVar1 = _AudioDeviceCreateIOProcID(unaff_RDI + 0x1b), iVar1 == 0)) {
      iVar1 = _AudioDeviceStart();
      if (iVar1 == 0) {
        if ((((int)unaff_RDI[0x1a] == *(int *)((longlong)unaff_RDI + 0xd4)) ||
            ((int)unaff_RDI[0x14] < 1)) || (iVar1 = _AudioDeviceStart(), iVar1 == 0)) {
          *(undefined1 *)((longlong)unaff_RDI + 0x74) = 1;
          return;
        }
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceStop();
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*unaff_RDI + 0x580))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      else {
        _AudioDeviceDestroyIOProcID();
        if (((int)unaff_RDI[0x1a] != *(int *)((longlong)unaff_RDI + 0xd4)) &&
           (0 < (int)unaff_RDI[0x14])) {
          _AudioDeviceDestroyIOProcID();
        }
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*unaff_RDI + 0x580))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    else {
      _AudioDeviceDestroyIOProcID();
      FUN_00d50b00();
      FUN_00d50b00();
      (**(code **)(*unaff_RDI + 0x580))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b00();
    (**(code **)(*unaff_RDI + 0x580))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}


