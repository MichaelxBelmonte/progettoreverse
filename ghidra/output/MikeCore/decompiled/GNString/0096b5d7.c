// Function: FUN_0096b5d7
// Address: 0096b5d7
// Size: 1172 bytes
// Class: GNString


void FUN_0096b5d7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RDI;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(int *)(unaff_RDI + 0x168) == 0) {
    iVar2 = FUN_00969dba();
    if (iVar2 == 0) {
      FUN_0096b317(param_4,param_3);
    }
    else {
      FUN_009740e6();
      FUN_0096a101();
      FUN_0096a101();
      FUN_0096a101();
      FUN_0096a101();
      FUN_0096a575();
      FUN_0096ac64();
      FUN_00969bc3();
      iVar2 = FUN_00969dba();
      if (iVar2 < 0) {
        FUN_00969c61();
        FUN_0096b25d();
      }
      FUN_0096820e(*(undefined8 *)(unaff_RDI + 0x128),3);
      FUN_0096a575();
      FUN_0096ac64();
      FUN_00969bc3();
      iVar2 = FUN_00969dba();
      if (iVar2 < 0) {
        FUN_00969c61();
        FUN_0096b25d();
      }
      FUN_0096820e(*(undefined8 *)(unaff_RDI + 0x140),3);
      FUN_0096a284(0,0,param_4);
      FUN_00969df5();
      FUN_00969226();
      FUN_00969282();
      FUN_0096ac64();
      FUN_0096acb3();
      FUN_0096ac64();
      FUN_0096b2a4();
      FUN_0096a575();
      FUN_0096a575();
      iVar2 = FUN_00969dba();
      while (1 < iVar2) {
        FUN_0096a6b8();
        iVar2 = FUN_00969df5();
        bVar4 = -1 < iVar2;
        if (bVar4) {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x120),*(undefined8 *)(unaff_RDI + 0x130));
        }
        iVar2 = FUN_00969df5();
        bVar5 = -1 < iVar2;
        if (bVar5) {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x128),*(undefined8 *)(unaff_RDI + 0x130));
        }
        iVar2 = FUN_00969df5();
        if (-1 < iVar2) {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x138),*(undefined8 *)(unaff_RDI + 0x130));
        }
        iVar3 = FUN_00969df5();
        bVar6 = -1 < iVar3;
        if (bVar6) {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x140),*(undefined8 *)(unaff_RDI + 0x130));
        }
        if (-1 < iVar2 == bVar6) {
          if (bVar4 != bVar5) {
joined_r0x0096b993:
            if (!bVar5) goto LAB_0096b9e9;
LAB_0096b9d8:
            FUN_0096acb3();
          }
        }
        else {
          bVar4 = bVar4 == bVar5;
          bVar5 = bVar6;
          if (bVar4) goto joined_r0x0096b993;
          if (bVar6) goto LAB_0096b9d8;
LAB_0096b9e9:
          FUN_0096b2a4();
        }
        FUN_0096836c(*(undefined8 *)(unaff_RDI + 0x130),2);
        iVar2 = FUN_00969dba();
      }
      FUN_0096a11d();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


