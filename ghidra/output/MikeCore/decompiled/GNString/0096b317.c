// Function: FUN_0096b317
// Address: 0096b317
// Size: 704 bytes
// Class: GNString


void FUN_0096b317(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RDI;
  int local_970;
  int local_96c [565];
  undefined8 local_98 [12];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(int *)(unaff_RDI + 0x168) == 0) {
    iVar1 = FUN_00969dba();
    if (iVar1 == 0) {
      FUN_0096a284(0,0,param_1);
    }
    else {
      FUN_00969bc3();
      FUN_0096a575();
      FUN_0096ac64();
      iVar1 = FUN_00969dba();
      if (iVar1 < 0) {
        FUN_00969c61();
        FUN_0096b25d();
      }
      iVar1 = FUN_00969dba();
      if (iVar1 != 1) {
        FUN_0096820e(*(undefined8 *)(unaff_RDI + 0x128),3);
        lVar5 = 0;
        FUN_009740e6();
        do {
          uVar3 = FUN_0096a101();
          local_98[lVar5] = uVar3;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xb);
        FUN_0096ac64();
        FUN_0096ac64();
        FUN_0096a6b8();
        FUN_0096a575();
        lVar5 = 1;
        do {
          FUN_0096ac64();
          FUN_0096acb3();
          lVar5 = lVar5 + 1;
        } while (lVar5 != 10);
        FUN_0096acb3();
        iVar1 = FUN_00969226();
        if (2 < iVar1) {
          iVar1 = iVar1 + -2;
          do {
            iVar2 = FUN_00969ef5(iVar1,*(undefined8 *)(unaff_RDI + 0x128),local_96c,&local_970);
            if (0 < local_96c[0]) {
              iVar4 = 0;
              do {
                FUN_0096a6b8();
                iVar4 = iVar4 + 1;
              } while (iVar4 < local_96c[0]);
            }
            if (iVar2 < 1) {
              if (iVar2 < 0) {
                FUN_0096b2a4();
              }
            }
            else {
              FUN_0096acb3();
            }
            iVar1 = iVar1 - local_96c[0];
            if (local_970 != 0) {
              if (0 < local_970) {
                iVar2 = 0;
                do {
                  FUN_0096a6b8();
                  iVar2 = iVar2 + 1;
                } while (iVar2 < local_970);
              }
              iVar1 = iVar1 - local_970;
            }
          } while (0 < iVar1);
        }
        FUN_0096a11d();
      }
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


