// Function: FUN_00b69850
// Address: 00b69850
// Size: 945 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00b69ad3) */
/* WARNING: Removing unreachable block (ram,0x00b69ae3) */
/* WARNING: Removing unreachable block (ram,0x00b69bdd) */
/* WARNING: Removing unreachable block (ram,0x00b69be6) */
/* WARNING: Removing unreachable block (ram,0x00b69b1e) */
/* WARNING: Removing unreachable block (ram,0x00b69b2b) */
/* WARNING: Removing unreachable block (ram,0x00b69952) */
/* WARNING: Removing unreachable block (ram,0x00b6995f) */
/* WARNING: Removing unreachable block (ram,0x00b69b72) */
/* WARNING: Removing unreachable block (ram,0x00b69b7b) */
/* WARNING: Removing unreachable block (ram,0x00b69ba9) */
/* WARNING: Removing unreachable block (ram,0x00b69bb5) */
/* WARNING: Removing unreachable block (ram,0x00b69a46) */
/* WARNING: Removing unreachable block (ram,0x00b69a52) */
/* WARNING: Removing unreachable block (ram,0x00b699ca) */
/* WARNING: Removing unreachable block (ram,0x00b699da) */
/* WARNING: Removing unreachable block (ram,0x00b69906) */
/* WARNING: Removing unreachable block (ram,0x00b6990f) */
/* WARNING: Removing unreachable block (ram,0x00b698b7) */
/* WARNING: Removing unreachable block (ram,0x00b698c0) */
/* WARNING: Removing unreachable block (ram,0x00b69a88) */
/* WARNING: Removing unreachable block (ram,0x00b69a98) */

void FUN_00b69850(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong *local_40;
  char local_38;
  
  do {
    FUN_00b33310();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    cVar2 = FUN_00b38170();
    if (cVar2 == '\0') {
      cVar2 = FUN_00b381b0();
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x610))();
      }
    }
    else {
      FUN_00b38180();
      if (local_40 == (longlong *)0x0) {
        bVar1 = true;
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = false;
        }
        else {
          bVar1 = false;
        }
      }
      uVar3 = FUN_00b38160();
      cVar2 = FUN_00b51d60();
      if (cVar2 == '\0') {
        cVar2 = FUN_00b518a0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00b51910();
          if (cVar2 == '\0') {
            cVar2 = FUN_00b51d00();
            if ((cVar2 != -0x50) || (cVar2 = FUN_00b51df0(), cVar2 != '{')) {
              (**(code **)(*unaff_RDI + 0x5d8))(param_1,uVar3);
            }
          }
          else {
            (**(code **)(*unaff_RDI + 0x5f8))(param_1,uVar3);
          }
        }
        else if ((int)unaff_RDI[0x12] == 2) {
          (**(code **)(*unaff_RDI + 0x5f0))(param_1,uVar3);
        }
        else if ((int)unaff_RDI[0x12] == 1) {
          (**(code **)(*unaff_RDI + 0x600))(param_1,uVar3);
          (**(code **)(*unaff_RDI + 0x5f0))(param_1,uVar3);
        }
        else {
          (**(code **)(*unaff_RDI + 0x5f0))(param_1,uVar3);
        }
      }
      else {
        cVar2 = (**(code **)(*plVar4 + 0x368))();
        if (cVar2 == '\0') {
          (**(code **)(*unaff_RDI + 0x5e8))(param_1,uVar3);
        }
        else {
          (**(code **)(*unaff_RDI + 0x5e0))(param_1,uVar3);
        }
      }
      if (!bVar1 && plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  } while( true );
}


